#include <iostream>
using namespace std;
#define a (9.0 / 5.0)
#define b (32.0)
void ctf(float c)
{
    float f = a * c + b;
    cout << c << "C=" << f << "F" << endl
         << endl;
}
void ftc(float f)
{
    float c = (f - b) / (a);
    cout << f << "F=" << c << "C" << endl
         << endl;
}
void ctk(float c)
{
    float k = c + 273;
    cout << c << "C=" << k << "K" << endl
         << endl;
}
void ktc(float k)
{
    float c = k - 273;
    cout << k << "K=" << c << "C" << endl
         << endl;
}
void ftk(float f)
{
    float k = 273 + (f - b) / (a);
    cout << f << "F=" << k << "K" << endl
         << endl;
}
void ktf(float k)
{
    float f = a * (k - 273) + b;
    cout << k << "K=" << f << "F" << endl
         << endl;
}
int main()
{
    while (true)
    {
        int n;
        cout << "TEMPERATURE CONVERTER\n1. Celcius to Fahrenheit\n2. Fahrenheit to Celcius\n3. Celcius to Kelvin\n4. Kelvin to Celsius\n5. Fahrenheit to Kelvin\n6. Kelvin to Fahrenheit\n7. Exit\n\n";
        cout << "Enter your choice(1-7): ";
        cin >> n;
        float c, f, k;

        if (n == 1)
        {
            cout << "Enter temperature in celcius: ";
            cin >> c;
            ctf(c);
        }
        else if (n == 2)
        {
            cout << "Enter temperature in fahrenheit: ";
            cin >> f;
            ftc(f);
        }
        else if (n == 3)
        {
            cout << "Enter temperature in celcius: ";
            cin >> c;
            ctk(c);
        }
        else if (n == 4)
        {
            cout << "Enter temperature in kelvin: ";
            cin >> k;
            ktc(k);
        }
        else if (n == 5)
        {
            cout << "Enter temperature in fahrenheit: ";
            cin >> f;
            ftk(f);
        }
        else if (n == 6)
        {
            cout << "Enter temperature in kelvin: ";
            cin >> k;
            ktf(k);
        }
        else if (n == 7)
        {
            break;
        }
        else
        {
            cout << "Invalid input" << endl
                 << endl;
        }
    }
    return 0;
}

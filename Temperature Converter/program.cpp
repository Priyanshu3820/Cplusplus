#include <iostream>
using namespace std;
#define a 9.0 / 5.0
#define b 32.0
float ctf(float c)
{
    float f = a * c + b;
    cout << c<<"C="<<f<<"F"<<endl<<endl;
}
float ftc(float f)
{
    float c = (f-b)/(a);
    cout << f<<"F="<<c<<"C"<<endl<<endl;
}
int main()
{
    while('a'<'b')
    {
    int n;
    cout << "TEMPERATURE CONVERTER\n1. Celcius to fahrenheit\n2. Fahrenheit to celcius\n3. Exit\n";
    cout << "Enter your choice(1-3): ";
    cin >> n;
    float c, f;
    
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
            break;
        }
        else
        {
            cout << "Invalid input"<<endl<<endl;
        }
    }
}

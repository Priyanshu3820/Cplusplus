#include <iostream>
using namespace std;
int main()
{
    int arr[5][7] = {0};
    int n;
    do
    {

        cout << "====== Cinema Seat Booking Menu ======" << endl;
        cout << "1. View Seat Layout" << endl;
        cout << "2. Book a Single Seat" << endl;
        cout << "3. Book a Block of Seats" << endl;
        cout << "4. Cancel a seat booking " << endl;
        cout << "5. Display available seat only" << endl;
        cout << "6. Exit " << endl;
        cout << "Enter your choice(1 to 6) to select a function: ";
        cin >> n;

        if (n == 1)
        {
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (n == 2)
        {
            int a, b;
            cout << "Enter row and column to book : ";
            cin >> a >> b;
            if (arr[a - 1][b - 1] == 0)
            {
                arr[a - 1][b - 1] = 1;
            }
            else
            {
                cout << "Seat already booked!" << endl;
            }
        }
        else if (n == 3)
        {

            int c, d, e;
            cout << "Enter row, starting column, and number of seats to book : ";
            cin >> c >> d >> e;
            for (int j = d - 1; j < d - 1 + e; j++)
            {
                if (arr[c - 1][j] == 0)
                {
                    arr[c - 1][j] = 1;
                }
                else
                {
                    cout << "Seats already booked!" << endl;
                }
            }
        }
        else if (n == 4)
        {

            int f, g;
            cout << "Enter row and column to cancel : ";
            cin >> f >> g;
            if (arr[f - 1][g - 1] == 1)
            {
                arr[f - 1][g - 1] = 0;
            }
            else
            {
                cout << "This seat is not booked yet!" << endl;
            }
        }
        else if (n == 5)
        {

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (arr[i][j] == 1)
                    {
                        cout << "- ";
                    }
                    else
                    {
                        cout << arr[i][j] << " ";
                    }
                }
                cout << endl;
            }
        }
        else if (n == 6)
        {
            return 0;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    } while (true);
}

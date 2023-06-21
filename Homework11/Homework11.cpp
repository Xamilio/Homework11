#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{

    while (true) 
    {

        int a = 0, b = 0, c = 0, k = 0, y = 0, x = 11;
        int number;
        cout << "Напишите число от 1 до 10: "; 
        cin >> number;
        switch (number)
        {
        case 1:
            for (int i = 10; i >= 0; i--) 
            {
                for (int l = 0; l <= b * 2; l++)
                {

                    cout << " ";
                }
                for (int j = 0; j <= i; j++) 
                {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            break;
        case 2:
            for (int i = 1; i <= 10; i++) 
            {
                for (int j = 1; j < i; j++) 
                {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 3:

            for (int i = 10; i >= 0; i--) 
            {
                for (int k = 0; k <= b; k++) 
                {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) 
                {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            break;

        case 4:
            for (int i = 10; i >= 0; i--) 
            {

                for (int j = 0; j <= i; j++) 
                {
                    cout << " ";
                }
                for (int k = 0; k <= a; k++) 
                {
                    cout << "* ";
                }
                cout << endl;
                a++;
            }
            break;

        case 5:

        case 6:

        case 7:
            for (int i = 1; i <= 10; i++) 
            {
                for (int j = 1; j <= i; j++) 
                {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int i = 10; i >= 1; i--) {
                for (int j = 1; j <= i; j++) 
                {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 8:
            for (int i = 1; i <= 11; i++) 
            {
                for (int k = 0; k <= x * 2; k++) 
                {
                    cout << " ";
                }
                for (int j = 1; j < i; j++) 
                {
                    cout << "* ";
                }
                cout << endl;
                x--;
            }
            for (int i = 10; i >= 0; i--) 
            {
                for (int l = 0; l <= b * 2; l++) 
                {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) 
                {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            break;

        case 9:
            for (int i = 10; i >= 1; i--) 
            {
                for (int j = 1; j <= i; j++) 
                {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 10:
            for (int i = 1; i <= 10; i++) 
            {
                for (int k = 0; k <= x * 2; k++) 
                {
                    cout << " ";
                }
                for (int j = 1; j < i; j++) 
                {
                    cout << "* ";
                }
                cout << endl;
                x--;
            }
            break;
        }
    }
}

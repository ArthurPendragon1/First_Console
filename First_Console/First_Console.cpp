using namespace std;

#include <iostream>

int main()
{
    int a = 0;

    switch (a)
    {
        case 0:
            while (a < 1000)
            a++;
            cout << a << endl;
            if (a == 1000)
            {
                cout << "Value is: " << a << endl;
                a++;
            }
            break;
    }

    return 0;
}
using namespace std;

#include <iostream>

int main()
{
    int choiseAction;
    cout << "Select an action: " << endl;
    cin >> choiseAction;

    int firstValue = 0, secondValue = 0, sum = 0;

    cout << "Enter a first Value: " << endl;
    cin >> firstValue;
    cout << "Enter a second Value: " << endl;
    cin >> secondValue;

    switch (choiseAction)
    {
    case 1:
        sum = firstValue + secondValue;
        cout << "Result: " << sum << endl;
        break;
    case 2:
        sum = firstValue - secondValue;
        cout << "Result: " << sum << endl;
        break;
    case 3:
        sum = firstValue * secondValue;
        cout << "Result: " << sum << endl;
        break;
    case 4:
        if (secondValue == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        else {
            sum = firstValue / secondValue;
            cout << "Result: " << sum << endl;
        }
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }


    return 0;
}
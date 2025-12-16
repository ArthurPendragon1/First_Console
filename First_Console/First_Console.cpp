using namespace std;

#include <iostream>

int main()
{
    string player;
    int choise = 0;
    cout << "Enter a something..? " << endl;
    cin >> player;

    cout << "Right? " << player << endl;
    cout << "If: yes - enter 1. no - enter 2." << endl;
    cin >> choise;

    if (choise == 1)
    {
        cout << "Congratulations!" << endl;
        return 0;
    }
    else if (choise == 2)
    {
        cout << "Enter a something again: " << endl;
        cin >> player;
    }
    else
        cout << "Error value." << endl;

    return 0;
}
using namespace std;

#include <iostream>

int main()
{
    float firstValue = 0.0, secondValue = 0.0, threeValue = 0.0, fourValue = 0.0, fiveValue = 0.0;
    float avgValue;
    
        cout << "Enter a Value: " << endl;
        cin >> firstValue;
        if (firstValue < 0 || firstValue > 5)
            return 1;
        cout << "Enter a Value: " << endl;
        cin >> secondValue;
        if (secondValue < 0 || secondValue > 5)
            return 1;
        cout << "Enter a Value: " << endl;
        cin >> threeValue;
        if (threeValue < 0 || threeValue > 5)
            return 1;
        cout << "Enter a Value: " << endl;
        cin >> fourValue;
        if (fourValue < 0 || fourValue > 5)
            return 1;
        cout << "Enter a Value: " << endl;
        cin >> fiveValue;
        if (fiveValue < 0 || fiveValue > 5)
            return 1;

        avgValue = (firstValue + secondValue + threeValue + fourValue + fiveValue) / 5.0;

        cout << "The current estimate is: " << avgValue << endl;
    

    

    return 0;
}
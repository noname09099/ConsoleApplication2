// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    char veteranStatus;
    int myAge;
    char hasDriversLicense = 'N';
    char hasBeenOutsideUSA;

    cout << "Are you a veteran (Y/N)? ";
    cin >> veteranStatus;
    cout << "Enter your current age in years: ";
    cin >> myAge;
    cout << "Have you ever been outside USSA (Y/N)? ";
    cin >> hasBeenOutsideUSA;

    if (veteranStatus == 'Y')
        cout << "Thank you for your service.\n";
    if (myAge > 15)
    {
        cout << "Do you have a driver license (Y/N)? ";
        cin >> hasDriversLicense;
        if (hasDriversLicense == 'Y')
        {
            cout << "Don't text and drive.\n";
        }
    }
    if (myAge >= 18)
        cout << "You can vote.\n";
    if (myAge >= 65)
        cout << "You can take free classes at TCC!\n";
    if (hasBeenOutsideUSA == 'Y')
    {
        if (veteranStatus == 'Y')
            cout << "Ask if person was stationed overseas.\n ";
        else
            cout << "Ask if person which countries were visited. \n";
    }
 /*  if (hasBeenOutsideUSA == 'Y' && veteranStatus == 'Y')
        cout << "Ask if person was stationed overseas.\n ";
    if (hasBeenOutsideUSA == 'Y' && veteranStatus != 'Y')
        cout << "Ask if person which countries were visited. \n";
    */
}

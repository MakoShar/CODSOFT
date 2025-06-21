#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main()
{
    //to select random number between 1 and 1000
    srand(time(0));
    int x = rand() % 1000 + 1;


    cout << "Welcome to the Number Guessing Game!\n";
    cout << "made by Anoop Verma\n";
    cout << "you can guess up to 10 times!\n";
    cout << "Please enter a number between 1 and 1000: ";
    int guess;

    int count = 1;

    while (count <= 10)
    {
        cout << "Guess " << count << ": ";
        cin >> guess;
        if (guess < 1 || guess > 1000)
        {
        cout << "Invalid number!\n";
        cout << "Please enter a number between 1 and 1000:" << endl;
            continue;
        }
        else if (guess < x)
        {
            cout << "Too low!\n";
        }
        else if (guess > x)
        {
            cout << "Too high!\n";
        }
        else if (guess == x)
        {
            cout << "You win!\n";
            break;
        }
        count++;
    }
    if (count > 10)
    {
        cout << "You Could have done better man.\n";
        cout << "The correct number was: " << x << endl;
    }
    return 0;
}

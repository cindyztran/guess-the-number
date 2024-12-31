#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));                // seed random number generator
    int number = rand() % 100 + 1; // random number between 1 and 100
    int guess = 0;
    int tries = 0;

    cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is." << endl;

    while (guess != number && tries < 7)
    {
        cout << "Enter a guess: ";
        cin >> guess;
        tries++;

        if (guess < number)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > number)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;
        }
    }

    if (tries == 7)
    {
        cout << "Sorry, you didn't guess the number in 7 tries. The number was " << number << "." << endl;
    }

    return 0;
}

// In this program, we generate a random number between 1 and 100 using the rand() function.The user has 7 tries to guess the number.If the user's guess is too low or too high, the program will provide feedback. If the user guesses the number correctly within 7 tries, the program will congratulate the user. If the user does not guess the number within 7 tries, the program will reveal the correct number.  To compile and run the program, you can use the following commands : g++ GuessTheNumber.cpp - o GuessTheNumber

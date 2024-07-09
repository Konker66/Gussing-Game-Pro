#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{

    int Guesses = 5;
    int Guess;
    int Answer;

    srand(time(0));
    Answer = rand() % 20;
    while (1)
    {

        cout << "Welcome to the Guessing Game : " << endl;
        cout << "Im thinking of number between 0 and 20 , in 5 Guesses" << endl;
        cout << "!-----------------------Guess the number with me--------------------------!" << endl;

        for (int i = 0; i < Guesses; i++)
        {
            if (i >= Guesses)
            {
                cout << "you lose " << endl; /*this (if) dosn't work..!*/
            }

            cout << "Guess #" << i + 1 << ":";
            cin >> Guess;
            if (Guess != Answer)
            {
                if (Guess > Answer)
                    cout << "too hight!" << endl;
                else
                    cout << "too low!" << endl;
                cout << "!---ANTA HMAR WLA AA---!" << endl;
            }
            else
            {
                cout << "you won" << endl;
                break;
            }
        }
    }

    return 0;
}

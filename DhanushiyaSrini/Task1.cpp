#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int main() {
    
    srand(time(0));

    int Numb;
    Numb = 1+ (rand() % 101);
    int guess;

    while (true) 
    {
        cout << "\nGuess the number between 1 and 100 : ";

        cin >> guess;
        if (guess == Numb) 
        {
            cout << "\nCongratulations! You guessed it right.\n";
            break;
        } 
        else if (guess < Numb) 
        {
            cout << "\nToo low. Try again: \n";
        } 
        else 
        {
            cout << "\nToo high. Try again: \n";
        }
    }

    return 0;
}
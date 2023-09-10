#include<bits/stdc++.h>
using namespace std;

int main() {
   
    srand(time(0));

    int randomNumber = rand() % 100 + 1;
    
    int guessNumber;
    int attempt = 0;
    
    cout << "Welcome to  Guess the Number Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guessNumber;
        attempt++;

        if (guessNumber < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guessNumber > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << 
 attempt<< " attempts." << endl;
        }
    } while (guessNumber != randomNumber);

    return 0;
}
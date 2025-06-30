#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    int count = 0;

    cout << "guess number between 1 to 100\n";

    while(1){
        cin >> guess;
        count = count + 1;

        if(guess == number){
            cout << "you guessed right in " << count << " tries\n";
            break;
        }

        if(guess > number){
            cout << "too high\n";
        }

        if(guess < number){
            cout << "too low\n";
        }
    }

    return 0;
}



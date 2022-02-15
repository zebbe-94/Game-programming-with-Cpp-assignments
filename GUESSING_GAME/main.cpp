#include <iostream>

using namespace std;

int main() {
    const int MAX_NUMBER = 10;
    const int MIN_NUMBER = 0;
    bool run_game = true;
    srand (time(NULL));

    while(run_game){
        int random_number = rand() % (MAX_NUMBER + 1) + MIN_NUMBER;
        int n = INT_MIN;
        cout << "I have a number between " << MIN_NUMBER << " and " << MAX_NUMBER << endl;
        while(random_number != n){
            cout << "Guess the number: " << endl;
            cin >> n;
            while(n < MIN_NUMBER || n > MAX_NUMBER){
                cout << "Number is not within range, try again:  " << endl;
                cin >> n;
            }
        }
        cout << "You guessed the number!" << endl;

        cout << "Would you like to play again? y/n" << endl;
        char answer = ' ';
        while (answer != 'y' && answer != 'n'){
            cin >> answer;
        }
        run_game = answer == 'y' ? true : false;
    }

    return 0;
}

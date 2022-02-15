#include <iostream>

using namespace std;

int main() {
    const int MAX_NUMBER = 10;
    int random_number = rand() % (MAX_NUMBER + 1);
    int n;

    cout << "I have a number between 0 and " << MAX_NUMBER << endl;
    while(random_number != n){
        cout << "Guess the number: " << endl;
        cin >> n;
    }
    cout << "You guessed the number!" << endl;

    return 0;
}

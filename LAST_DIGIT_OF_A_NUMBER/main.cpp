#include <iostream>

using namespace std;

int last_digit(int n);

int main() {
    int n;
    cout << "Input number: " << endl;
    cin >> n;
    cout << "last digit is: " << last_digit(n) << endl;
    return 0;
}
int last_digit(int n){
    return abs(n) % 10;
}

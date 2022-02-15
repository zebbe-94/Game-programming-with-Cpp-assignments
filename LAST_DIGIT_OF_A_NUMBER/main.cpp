#include <iostream>
#include "math.h"

using namespace std;

int last_digit(int n);
void print_digits(int n);
void print_digits_reverse(int n);
int number_of_digits(int n);

int main() {
    int n;
    cout << "Input number: " << endl;
    cin >> n;
    cout << "last digit is: " << last_digit(n) << endl;
    print_digits(n);
    print_digits_reverse(n);
    return 0;
}
int last_digit(int n){
    return abs(n) % 10;
}

void print_digits(int n){
    cout << "digits : ";
    int digits = number_of_digits(n);
    for (int i = digits; i > 0; --i) {
        cout << (n % (int)pow(10, i)) / (int)pow(10, i - 1) << " ";
    }
    cout << endl;
}

void print_digits_reverse(int n){
    cout << "digits reversed: ";
    int digits = number_of_digits(n);
    for (int i = 1; i <= digits; ++i) {
        cout << (n % (int)pow(10, i)) / (int)pow(10, i - 1) << " ";
    }
    cout << endl;
}

int number_of_digits(int n){
    return log10(n) + 1;
}

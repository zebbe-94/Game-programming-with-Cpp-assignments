#include <iostream>

using namespace std;

bool is_odd(int n);

int main() {
    int n;
    cout << "Input a number: " << endl;
    cin >> n;
    cout << n << " is " << (is_odd(n) ? "odd" : "even") << endl;
    return 0;
}
bool is_odd(int n){
    return n & 1;
}

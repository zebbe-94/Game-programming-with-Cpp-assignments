#include <iostream>

using namespace std;

int absolute_value(int x){
    return x < 0 ? -x : x;
}

int absolute_difference(int a, int b){
    return absolute_value(a - b);
}

int main() {
    int a, b;
    cout << "Input integer number one:" << endl;
    cin >> a;
    cout << "Input integer number two:" << endl;
    cin >> b;
    cout << "The absolute difference between the two numbers: " << absolute_difference(a, b);
    return 0;
}



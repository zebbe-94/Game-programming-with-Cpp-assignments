#include <iostream>

using namespace std;

double celsius_to_fahrenheit(double celsius);

int main() {
    double c;
    cout << "Input degrees in celsius: " << endl;
    cin >> c;
    cout << c << " degrees celsius is " << celsius_to_fahrenheit(c) << " degrees fahrenheit" << endl;
    return 0;
}

double celsius_to_fahrenheit(double celsius){
    return celsius * 1.8 + 32;
}

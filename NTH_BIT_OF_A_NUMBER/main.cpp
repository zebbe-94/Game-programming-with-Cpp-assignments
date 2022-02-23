#include <iostream>

using namespace std;


void set_bit(int* number, int bit);
int get_bit(int number, int bit);

int main() {
    int number = 8;
    int bit = 2;
    cout << "Number is: " << number << endl;
    cout << "Bit " << bit << " in " << number << " is: " << get_bit(number, bit) << endl;
    set_bit(&number, bit);
    cout << "Number after setting bit " << bit << " is: " << number << endl;
    cout << "Bit " << bit << " in " << number << " is: " << get_bit(number, bit) << endl;
    return 0;
}

void set_bit(int* number, int bit){
    bit %= sizeof(int);
    *number |= 1 << bit;
}
int get_bit(int number, int bit){
    bit %= sizeof(int);
    return number >> bit & 1;
}

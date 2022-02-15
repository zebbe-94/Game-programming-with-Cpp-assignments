#include <iostream>

using namespace std;

void swap_by_reference(int& a, int& b);
void swap_by_pointers(int* a, int* b);
void swap_by_math(int& a, int& b);
void swap_by_xor(int& a, int& b);

int main() {
    int a, b;

    cout << "Input first number: " << endl;
    cin >> a;
    cout << "Input second number: " << endl;
    cin >> b;
    cout << "your numbers: " << a << " " << b << endl;
    swap(a, b);
    cout << "your numbers swapped: " << a << " " << b << endl;
    swap_by_reference(a, b);
    cout << "your numbers swapped again: " << a << " " << b << endl;
    swap_by_pointers(&a, &b);
    cout << "your numbers swapped once more: " << a << " " << b << endl;
    swap_by_math(a, b);
    cout << "your numbers swapped one last time: " << a << " " << b << endl;
    swap_by_xor(a, b);
    cout << "jk, your numbers swapped one extra time: " << a << " " << b << endl;
    return 0;
}

void swap_by_reference(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_by_pointers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_by_math(int& a, int& b){
    a += b;
    b = a - b;
    a -= b;
}

void swap_by_xor(int& a, int& b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
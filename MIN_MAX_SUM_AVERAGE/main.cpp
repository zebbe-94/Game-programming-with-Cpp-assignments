#include <iostream>

using namespace std;

void present_min_max_sum_average(const int* array, int length);

int main() {
    const int array_length = 5;
    int array[array_length]{2,0,-12,-3,34};
    present_min_max_sum_average(array, array_length);
    return 0;
}

void present_min_max_sum_average(const int* array, int length){
    if (length <= 0) {
        cout << "Error, no numbers to operate on" << endl;
        return;
    }
    int min, max, sum, avg;
    min = array[0];
    max = array[0];
    sum = array[0];
    for (int i = 1; i < length; ++i) {
        if (array[i] < min){
            min = array[i];
        }
        if (array[i] > max){
            max = array[i];
        }
        sum += array[i];
    }
    avg = sum / length;
    cout << "Min: " << min << " Max: " << max << " Sum: " << sum << " Avg: " << avg << endl;
}
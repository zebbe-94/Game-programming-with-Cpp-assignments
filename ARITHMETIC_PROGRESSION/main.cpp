#include <iostream>
#include <vector>

using namespace std;

bool has_arithmetic_progression(const vector<int>& series);

int main() {
    vector<int> series;
    cout << "Enter four numbers: " << endl;
    int n;
    for (int i = 0; i < 4; ++i) {
        cin >> n;
        series.push_back(n);
    }
    cout << "The series " << (has_arithmetic_progression(series) ? "has" : "does not have") << " arithmetic progression" << endl;
    return 0;
}

bool has_arithmetic_progression(const vector<int>& series){
    if (series.size() < 2){
        return false;
    }
    int difference = series[1] - series[0];
    for (int i = 1; i < series.size(); ++i) {
        if (series[i] - series[i-1] != difference){
            return false;
        }
    }
    return true;
}

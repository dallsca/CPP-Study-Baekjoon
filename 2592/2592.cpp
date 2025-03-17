#include <iostream>
using namespace std;

int main() {
    int values[10];
    int frequency[1001] = {0}; 
    int sum = 0;
    int maxIndex = 0; 

    for (int i = 0; i < 10; i++) {
        cin >> values[i];
        sum += values[i];
        frequency[values[i]]++;
    }

    int maxFrequency = 0; 
    for (int i = 0; i < 1001; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            maxIndex = i;
        }
    }

    cout << sum / 10 << endl; 
    cout << maxIndex << endl; 
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    int k;
    int total = 0;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++) 
    {
        cin >> k;
        if (k == 0)
        {
            v.pop_back();
        }
        else
        {
            v.push_back(k);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        total = total + v[i];
    }
    cout << total;
    return 0;
}

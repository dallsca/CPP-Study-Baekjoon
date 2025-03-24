#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int bugger[3];
    int drink[2];
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> bugger[i];
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> drink[i];
    }
    int min_bugger = *min_element(bugger, bugger + 3);
    int min_drink = *min_element(drink, drink + 2);
    total = min_bugger + min_drink - 50;

    cout << total;
    return 0;
}
    
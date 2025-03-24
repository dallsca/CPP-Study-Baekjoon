#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[8];
    int arrcopy[8];
    int indexNum[5];
    int total = 0;
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
        arrcopy[i] = arr[i];  // 동시에 복사
    }

    sort(arr, arr + 8);
    reverse(arr, arr + 8);

    for (int i = 0; i < 5; i++)
    {
        total += arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i] == arrcopy[j])
            {
                indexNum[i] = j + 1;  // 인덱스 1부터 시작이면 +1
                break;
            }
        }
    }
    sort(indexNum, indexNum + 5);

    cout << total << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << indexNum[i] << " ";
    }
    cout << endl;

    return 0;
}

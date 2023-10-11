#include <iostream>
using namespace std;

int findpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int a[5] = {3, 8, 10, 17, 1};
    cout << " the pivot index is " << findpivot(a, 5) << endl;

    return 0;
}
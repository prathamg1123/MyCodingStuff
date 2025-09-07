// Search in rotated sorted array
#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> arr, int tr)
{
    int st = 0;
    int end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == tr)
            return mid;

        // left sorted
        if (arr[st] <= arr[mid])
        {
            if (arr[st] <= tr && tr <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        { // right sorjjj
            if (arr[mid] <= tr && tr <= arr[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};
    int tr = 2;
    

    cout << bs(arr, tr);
    return 0;
}
// Peak index in mountain array
#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> arr)
{
    int st = 1;
    int end = arr.size() - 2;
    while(st <= end){
        
        int mid = st + (end-st)/2;



        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) return mid;

        if (arr[mid-1] < arr[mid]){ // Increasing order 
            st = mid + 1;
        }
        else { // Decreasing order
            end = mid - 1; 
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 4, 5, 6, 1, 2};

    cout << bs(arr);
    return 0;
}
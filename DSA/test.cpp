#include <iostream>
using namespace std;
void sort(int arr[], int n)
{
    
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            count0++;
        }
        if(arr[i] == 1){
            count1++;
        }
        if(arr[i] == 2){
            count2++;
        }
    }
    int idx = 0;
    for(int i = 0; i<count0; i++){
        arr[i] = 0;
    }
    for(int i = count0; i<count1 + count0; i++){
        arr[i] = 1;
    }
    for(int i = count0 + count1; i<n; i++){
        arr[i] = 2;
    }
}

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = sizeof(arr) / sizeof(int);
    sort(arr , n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
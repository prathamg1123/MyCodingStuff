#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[],int n){ // O(n*2)
    for(int i = 0; i<n-1; i++){
        int smallIdx = i;
        for(int j = i+1; j<n; j++){
            if (arr[j]<arr[smallIdx]){
                smallIdx = j;
            }
        }
        swap(arr[i],arr[smallIdx]);
    }
}

int main()
{
    int n = 5;
    int arr[] = {4,2,5,1,3};
    selectionSort(arr , n);
    
    printArr(arr,n);
    
    return 0;
}
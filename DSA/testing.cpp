#include <iostream>
using namespace std;

void merge(int A[],int low,int mid,int high){
    int i = low;
    int j = mid+1;
    int idx = 0;
    int temp[high-low+1];  
    while(i<=mid && j<=high){
        if(A[i] < A[j]){
            temp[idx] = A[i];
            idx++, i++;
        } else{
            temp[idx] = A[j];
            idx++ , j++; 
        }
    }
    while(i<=mid){
        temp[idx] = A[i];
        idx++, i++;
    }
    while(j<=high){
        temp[idx] = A[j];
        idx++ , j++;
    }

    for(int i = 0; i< high; i++){
        A[i] = temp[i];
    }
}

void mergeSort(int A[], int low, int high){
    if(low<high){
        int mid = low + (high-low)/2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, low, mid, high);
    }
}

int main()
{
    int A[7] = {2, 6, 3, 5, 1, 0, 8};
    int low = 0;
    int high = 6;
    mergeSort(A, low, high);

    for(int i = 0; i< high; i++){
        cout<< A[i] << " ";
    }
    cout<< endl;

    
    return 0;
}
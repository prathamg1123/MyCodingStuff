#include<iostream>
#include<vector>
using namespace std;
void sort(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i] < arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main()
{
    int arr[] = {8,1,3,5,2,4,7,6};
    int n = 8;
    sort(arr,n);
    for (int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
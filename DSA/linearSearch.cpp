#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target)
        return i;
        
    }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};//target = 8;
    int res = linearsearch(arr,7,8 );
    cout<<res;
    return 0;
}
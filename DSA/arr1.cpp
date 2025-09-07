#include<iostream>
#include<climits>
using namespace std;

int main (){
    int size = 5;

    int marks[] = {23, -43, 34, 66, 56};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int index_smallest;
    int index_largest;

    for (int i = 0; i<size;i++){

        smallest = min(marks[i],smallest);
        largest = max(marks[i],largest);

    }

    cout << "Smallest is: " << smallest << endl;
    cout <<"Largest is: " << largest <<endl; 

    for (int i = 0;i<size ;i++){
        if(marks[i] == smallest){
            index_smallest = i;
        }
        if(marks[i] == largest){
            index_largest = i;
        }
    }
    cout <<"Index of smallest element is: " << index_smallest<<endl;
    cout <<"Index of largest element is: " << index_largest<<endl;
    
    return 0;
}





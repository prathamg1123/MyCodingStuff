#include <iostream>
using namespace std;

int getMaxSum(int mat[][3], int row, int col){
    int maxRowSum = INT_MIN;
    for(int i = 0; i<row; i++){
        int rowSum = 0;
        for(int j = 0; j<col; j++){
            rowSum += mat[i][j];
        
        }
        maxRowSum = max(maxRowSum,rowSum);
        
    }
    return maxRowSum;
}

int main()
{
    int arr[3][3] = {{1, 2, 3} , {4, 5, 6} , {7, 8, 9}};
    int row = 3;
    int col = 3;

    cout << getMaxSum(arr,row,col);
    
    
    return 0;
}
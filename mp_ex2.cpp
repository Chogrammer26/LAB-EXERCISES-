#include <iostream>

void input(int [][], int, int);
void result(int [][], int, int);

int main()
{
    int row,col;
    std::cin >> row >> col;
    
    int arr[row][col];
    input(arr,row,col);
    result(arr,row,col);
}

void input(int arr[][], int row, int col)
{
    for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
    std::cin >> arr[i][j]; 
}

void result(int arr[][], int row, int col)
{    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) 
            std::cout << *(*(arr + i) + j) << " ";
    std::cout << '\n';
    }

}

#include <iostream>

void subscript(int arr[], int size);
void arrayname(int arr[], int size);

int main()
{
    int size; 
    std::cin >> size;
    
    int a[size];
    for (int i = 0; i < size; i++)
    std::cin >> a[i];
    
    subscript(a,size);
    arrayname(a,size);    
}

void subscript(int arr[], int size)
{ 
    for (int i = 0; i < size; i++)
    std::cout << "a[" << i << "] = " << arr[i] << "\n"; 
}

void arrayName(int a[], int size)
{
    int *arr = a;
    for (int i = 0; i < size; i++)
    std::cout << "*(a + " << i << ") = " << *(arr + i) << "\n"; 
    
}

void ptrSubNot(int a[], int size)
{
    int *cptr[size] = a;
    for (int i = 0; i < size; i++)
    std::cout << "cptr    
}


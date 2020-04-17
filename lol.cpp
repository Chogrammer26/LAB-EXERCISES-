#include <iostream>

void subscript(int arr[], int size);
void arrayName(int arr[], int size);
void ptrSubNot(int arr[], int size); 
void offSetNotation(int arr[], int size); 

int main()
{
    int size; 
    std::cin >> size;
    
    int a[size];
    for (int i = 0; i < size; i++)
    std::cin >> a[i];
    
    subscript(a,size);
    arrayName(a,size);
    ptrSubNot(a,size);
    offSetNotation(a,size); 
}

void subscript(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    std::cout << "a[" << i << "] = " << arr[i] << "\n"; 
    std::cout << '\n';
}

void arrayName(int a[], int size)
{
    
    for (int i = 0; i < size; i++)
    std::cout << "*(a + " << i << ") = " << *(a + i) << "\n"; 
    std::cout << '\n';
    
}

void ptrSubNot(int a[], int size)
{
   int *cptr = a;
   for (int i = 0; i < size; i++)
   std::cout << "cptr[" << i << "] = " << cptr[i] << '\n';
   std::cout << "\n";
}

void offSetNotation(int a[], int size)
{
  int *cptr = a;
  for (int i = 0; i < size; i++)
  std::cout << "*(cptr + " << i << ") = " << *(cptr + i) << '\n';
  std::cout << '\n';
}


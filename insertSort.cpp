#include <iostream>

int main()
{
    int a[10]{22,4,33,5,3,1,6,7,8,10};
    int key,j;
    
    // Before Insert Sort
    for (auto x : a)
    std::cout << x << ' ';
    std::cout << std::endl;
    
    for (int i = 1; i <= 9; i++) {
        key = a[i];
        
        j = i - 1;
        
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    
    // After Insert Sort
    for (auto x : a)
    std::cout << x << ' ';
    std::cout << std::endl;
    
}

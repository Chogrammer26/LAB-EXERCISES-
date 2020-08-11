#include <iostream>
#include <array>


int main()
{
    std::array<int,10> n {1,2,3,4,5,6,7,8,9,10}; 
    int left = 0;
    int right = n.size() - 1;
    
    int target{}; 
    
    std::cin >> target; 
    
    // Works if the array input is already sorted (increasingly)
    // Complexity : O(log n) 
    while (left <= right) {
        int mid = (left + right) / 2; 
        
        if (target == n[mid]) { 
            std::cout <<  mid;
            break;
        }
        else if (target > n[mid]) 
            left = mid + 1;
            
        else if (target < n[mid]) 
            right = mid - 1;
        
        else 
            std::cout << "Not Found";
    }
}

// https://www.geeksforgeeks.org/templates-cpp/

#include <iostream> 
// using namespace std; // ouch  this causes errors...
  
template <typename TT> 
class Array { 
private: 
    TT *ptr; 
    int size; 
public: 
    Array(TT arr[], int s); 
    void print(); 
}; 
  
template <typename TT> 
Array<TT>::Array(TT arr[], int s) { 
    ptr = new TT[s]; 
    size = s; 
    for(int i = 0; i < size; i++) 
        ptr[i] = arr[i]; 
} 
  
template <typename TT> 
void Array<TT>::print() { 
    for (int i = 0; i < size; i++) 
        std::cout<<" "<<*(ptr + i); 
    std::cout<<std::endl; 
} 
  
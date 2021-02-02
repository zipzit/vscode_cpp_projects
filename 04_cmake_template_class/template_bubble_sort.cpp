// https://www.geeksforgeeks.org/templates-cpp/

// CPP code for bubble sort
// using template function
#include <iostream>

// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
template <class T>
void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                std::swap(a[j], a[j - 1]);
}

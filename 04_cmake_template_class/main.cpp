// // https://pspdfkit.com/blog/2019/visual-studio-code-for-cpp/

// // CMakeLists.txt is generated by the CMake Tools Extension
// // https://vector-of-bool.github.io/docs/vscode-cmake-tools/index.html

// // http://cplusplus.com/forum/beginner/157663/
// // reminder, use kit: GCC for x86_64-linux-gnu 9.3.0 (select from bottom bar of vs code...)

#include <iostream>
#include "template_array.cpp"
#include "template_max.cpp"
#include "template_bubble_sort.cpp"

int main()
{
    std::cout << " Max value testing : " << std::endl;
    // return max value testing...
    int i = max(3, 7); // returns 7
    std::cout << ' ' << i << '\n';

    double d = max(6.34, 18.523); // returns 18.523
    std::cout << ' ' << d << '\n';

    char ch = max('a', '6'); // returns 'a'
    std::cout << ' ' << ch << '\n'
              << '\n';

    // test template array...
    int arr[5] = {7, 2, 3, 4, 5};
    Array<int> a(arr, 5);
    std::cout << " Array print : ";
    a.print();
    std::cout << '\n';

    // test bubble sort
    int bs[5] = {(int)10., 50, 309, 40, 2000};
    int n = sizeof(bs) / sizeof(bs[0]);

    bubbleSort(bs, 5);

    std::cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        std::cout << bs[i] << " ";
    std::cout << std::endl;

    return 0;
}
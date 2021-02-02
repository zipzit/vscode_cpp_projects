// https://code.visualstudio.com/docs/cpp/config-linux
// https://code.visualstudio.com/docs/languages/cpp

#include <iostream>
#include <vector>
#include <string>

// https://code.visualstudio.com/docs/languages/cpp
// https://code.visualstudio.com/docs/cpp/config-linux


using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!\n\n"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
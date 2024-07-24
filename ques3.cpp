#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string in;
    cout << "Enter string: ";
    cin >> in;
    char test;
    int j = in.length() - 1;
    for (int i = 0; i < in.length() / 2; i++)
    {
        test = in[i];
        in[i] = in[j - i];
        in[j - i] = test;
    }
    cout << "Reversed string: " << in;
}
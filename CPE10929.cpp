#include <cmath>
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>
using namespace std;
bool iseleven(string s)
{
    int a = 0;
    int b = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            a += s[i] - '0';
        }
        else
        {
            b += s[i] - '0';
        }
    }
    if (abs(a - b) % 11 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//https://blog.xuite.net/lee54816/math/8037126-%E5%80%8D%E6%95%B8%E5%88%A4%E6%96%B7%E6%B3%95 各倍數判別法
int main()
{
    string input;
    cin >> input;
    while (input != string("0"))
    {
        if (iseleven(input))
        {
            cout << input + " is a multiple of 11." << endl;
        }
        else
        {
            cout << input + " is not a multiple of 11." << endl;
        }
        cin >> input;
    }
    return 0;
}

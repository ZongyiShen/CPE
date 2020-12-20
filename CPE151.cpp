#include <cmath>
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    //題目從1開始，所以就是從1開始的約瑟夫問題
    //2到n中跳m的約瑟夫環，最後為13
    //轉換成1到n-1去n的約瑟夫環最後為12
    int n;
    while (cin >> n && n)
    {
        int i, j, x;
        for (i = 1; i < n - 1; i++)
        {
            x = 0;
            for (j = 2; j < n; j++)
                x = (x + i) % j;
            if (x == 11) //第一個為0，所以第12個計為11
                break;
        }
        cout << i << endl;
    }
    return 0;
}

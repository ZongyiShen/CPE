#include <cmath>
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;
int Three_n_add_one(int input)
{
    int c = 1;
    while (input != 1)
    {
        if (input % 2 == 1)
        {
            input = 3 * input + 1;
        }
        else
        {
            input /= 2;
        }
        c += 1;
    }
    return c;

}

int main()
{
    int i, j;
    while (cin >>i >>j)
    {
        cout << i << " " << j << " ";
        if(i > j){
			std::swap(i, j);
		}
        int max = 1;
        for (i; i <= j; i++)
        {
            if (max < Three_n_add_one(i))
            {
                max = Three_n_add_one(i);
            }
        }
        cout << max << endl;
    }
    return 0;
}

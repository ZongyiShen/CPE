#ifndef CPE100
#define CPE100
#include <cmath>
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;
int getspace(string s)
{
    int spacenum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            spacenum++;
        }
    }
    return spacenum;
}
string *split(string s)
{
    string temp = "";
    int spacenum = getspace(s);
    //int spacelocate[spacenum];
    string *result;
    result = new string[spacenum + 1];
    int j = 0;
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            result[j] = temp;
            temp = "";
            k = 0;
            j++;
        }
        else
        {
            temp = temp + s[i];
            k++;
        }
    }
    result[j] = temp;
    temp = "";
    k = 0;
    j++;
    return result;
}
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
#endif
/*
#include "./CPE100.h"
int main()
{
    string s;
    getline(cin, s);
    while (s.length())
    {
        int len = getspace(s);
        string *ls;
        int a[len + 1];
        ls = new string[len + 1];
        ls = split(s);
        for (int i = 0; i < len + 1; i++)
        {
            a[i] = atoi(ls[i].c_str());
        }
        int max = 0;
        for (int i = a[0]; i < a[1]; i++)
        {
            if (max < Three_n_add_one(i))
            {
                max = Three_n_add_one(i);
            }
        }
        cout << max << endl;
        delete[] ls;
        getline(cin, s);
    }
    return 0;
}
*/
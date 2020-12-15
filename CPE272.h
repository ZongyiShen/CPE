#ifndef CPE272
#define CPE272
#include <cmath>
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>
using namespace std;
string *tran_to_tex(vector<string> s)
{
    string *result;
    result = new string[s.size()];
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s[i].length(); j++)
        {
            if (s[i][j] != '"')
            {
                result[i] += s[i][j];
            }
            else if (c == 0)
            {
                result[i] += "``";
                c++;
            }
            else
            {
                c = 0;
                result[i] += "''";
            }
        }
    }
    return result;
}
#endif
/*
#include "./CPE272.h"
int main()
{
    string s;
    getline(cin, s);
    vector<string> input;
    int l = 0;
    while (s.length())
    {
        input.push_back(s);
        getline(cin, s);
        l++;
    }
    string *r;
    r = new string[l];
    r = tran_to_tex(input);
    for (int i = 0; i < l; i++)
    {
        cout << r[i] << endl;
    }

    return 0;
}
*/
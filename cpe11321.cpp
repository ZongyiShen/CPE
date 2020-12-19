#include <cmath>
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <vector>
using namespace std;
vector<string> split(string s)
{
    stringstream ss(s);
    string dir;
    vector<string> r;
    while (getline(ss, dir, ' '))
    {
        r.push_back(dir);
    }
    return r;
}
int swapcount(int input[], int len)
{
    int s = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (input[i] > input[j])
            {
                std::swap(input[i], input[j]);
                s++;
            }
        }
    }
    return s;
}
int main()
{
    int count = 0;
    int len;
    string input;
    cin >> count;
    for (int x = 0; x < count; x++)
    {
        scanf("%d\n", &len);
        getline(cin, input);
        vector<string> s;
        s = split(input);
        int a1[s.size()];
        for (int i = 0; i < s.size(); i++)
        {
            a1[i] = atoi(s[i].c_str());
        }
        cout << "Optimal train swapping takes " + to_string(swapcount(a1, s.size())) + " swaps." << endl;
    }
    return 0;
}

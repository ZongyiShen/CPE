#include <cmath>
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void kuti(long long int input){
    if(input < 100){
        cout << to_string(input) << " ";
    }
    else if(100 <= input && input < 1000){
        cout << to_string(input / 100) + " shata ";
        if(input % 100 != 0){
            kuti(input % 100);
        }
    }
    else if(1000 <= input && input < 100000){
        cout << to_string(input / 1000) + " hajar ";
        if(input % 1000 != 0){
            kuti(input % 1000);
        }
    }
    else if(100000 <= input && input < 10000000){
        cout << to_string(input / 100000) + " lakh ";
        if(input % 100000 != 0){
            kuti(input % 100000);
        }
    }
    else if(10000000 <= input && input <1000000000){
        cout << to_string(input / 10000000) + " kuti ";
        if(input % 10000000 != 0){
            kuti(input % 10000000);
        }
    }
    else{
        long long int a = input / 10000000;
        kuti(a);
        cout << "kuti ";
        long long int b = input % 10000000;
        if(b != 0){
            kuti(b);
        }
    }
}

int main()
{
    long long int input;
    int i = 1;
    while(cin >> input){
        cout<< setw(4) <<to_string(i) + ". ";
        kuti(input);
        cout << endl;
        i++;
    }
    return 0;
}
 
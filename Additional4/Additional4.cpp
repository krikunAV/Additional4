#include <iostream>
using namespace std;
int main()
{
    int a1, a2, a3, b1, b2, b3;
    int point = 0;
    for (int i = 1; i < 1000000; i++) {
        a1 = (i % 1000) / 100;
        a2 = (i % 100) / 10;
        a3 = (i % 10) ;
        
        b1 = ((i - i % 1000) % 1000000) / 100000 - ((i - i % 1000) % 100000) / 100000;
        b2 = ((i - i % 1000) % 100000) / 10000 - ((i - i % 1000) % 10000) / 10000;
        b3 = ((i - i % 1000) % 10000) / 1000;
        
        if (a1 + a2 + a3 == b1 + b2 + b3) point++;
    }
    cout << point;
}


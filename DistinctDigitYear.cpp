#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAX 1e3
int main()
{
    int a, fir, sec, thi, fo;
    //enter year
    cin >> a;
    
    while (1)
    {
        a++;
        //first digit
        fir = a / 10000;
        //second digit
        sec = (a / 100)%10;
        //third digit
        thi = (a / 10)%10;
        //fourth digit
        fo = a %10;
        if (fir != sec && sec != thi && thi != fo && fo != fir && sec != fo && thi != fir)
            break;
    }
    //next year have distinct digits my first commit first
    cout << a;
    return 0;
}

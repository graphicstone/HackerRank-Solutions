#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float fl1=0,fl2=0,fl3=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            fl1++;
        else if(a[i]<0)
            fl2++;
        else
            fl3++;
    }
    //cout<<fl1<<fl2<<fl3;
    fl1 = fl1 / n;
    fl2 = fl2 / n;
    fl3 = fl3 / n;
    cout<<fl1<<"\n"<<fl2<<"\n"<<fl3;
    return 0;
}


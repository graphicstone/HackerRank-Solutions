#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n;
    int max = 0,st;
    int c[5] = {0,0,0,0,0};
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] == 1)
            c[0]++;
        else if(a[i] == 2)
            c[1]++;
        else if(a[i] == 3)
            c[2]++;
        else if(a[i] == 4)
            c[3]++;
        else if(a[i] == 5)
            c[4]++;
    }
    for(int i=0; i<5; i++)
    {
        //cout<<c[i];
        if(max < c[i])
        {
            max = c[i];
            st = i;
        }
    }
    cout<<st+1;
    return 0;
}


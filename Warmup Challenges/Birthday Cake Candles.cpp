#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n,temp,c=0;
    cin>>n;
    long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l = a[0];
    for(int i=0; i<n; i++)
    {
       if(l < a[i])
           l = a[i];
    }
    int max = l;
    for(int i=0; i<n; i++)
    {
        if(a[i] == max)
            c++;
    }
    cout<<c;
    return 0;
}


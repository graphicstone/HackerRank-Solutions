#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t;
    cin>>n;
    t = n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<t-1; j++)
        {
            cout<<" ";
        } t--;
        for(int k=0; k<i+1; k++)
        {
            cout<<"#";
        } cout<<"\n";
    }
    return 0;
}


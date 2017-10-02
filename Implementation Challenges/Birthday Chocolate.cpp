#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m, d, flag=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>d>>m;
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=i; j<m+i; j++)
        {
            sum = sum + a[j];
        }
        //cout<<sum<<" ";
        if(sum == d)
            flag++;
    }
    cout<<flag;
    return 0;
}


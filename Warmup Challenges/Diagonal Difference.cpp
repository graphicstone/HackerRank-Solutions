#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,sum1=0,sum2=0,s=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == j)
                sum1 = sum1 + a[i][j];
        }
    }
    //cout<<sum1;
    int st = n-1; 
    for(int i=0;i<n;i++)
    {
        sum2 = sum2 + a[i][st];
        st--;
    }
    //cout<<sum2;
    s = sum1 - sum2;
    int sum = sqrt(s*s);
    cout<<sum;
    return 0;
}


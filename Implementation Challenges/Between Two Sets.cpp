#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m, n, count=0;
    cin>>m>>n;
    int a[m], b[n];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(int j=a[0]; j<=b[n-1]; j++)
    {
        int flag=0, flag1=0;
        for(int i=0; i<m; i++)
        {
            if(j%a[i] == 0)
            {
                flag++;
            }
        }//cout<<flag<<"\n";
        for(int i=0; i<n; i++)
        {
            if(b[i]%j == 0)
            {
                flag1++;
            }
        }//cout<<flag1<<"\n";
        if(flag == m && flag1 == n)
            count++;
    }
    cout<<count;
    return 0;
}


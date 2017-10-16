#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int m,n;
        cin>>m>>n;
        int c[n];
        for(int j=0; j<n; j++)
        {
            cin>>c[j];
        }
        for(int j=0; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(c[j] + c[k] == m)
                    cout<<j+1<<" "<<k+1<<"\n";
            }
        }
    }
}

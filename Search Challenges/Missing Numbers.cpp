#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m, temp=0;
    cin>>n;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i] == b[j])
            {
                b.erase(b.begin() + j);
                break;
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=i+1; j<m; j++)
        {
            if(b[i] > 0)
                if(b[i] == b[j])
                {
                    b.erase(b.begin() + j);
                    j--;
                }
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=i+1; j<m; j++)
        {
            if(b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        if(b[i] == 0)
            continue;
        else
            cout<<b[i]<<" ";
    }
    return 0;
}


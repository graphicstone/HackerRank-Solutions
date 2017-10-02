#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, max=0, min=0;
    cin>>n;
    long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int maxi = a[0];
    int mini = a[0];
    for(int i=0; i<n-1; i++)
    {
        if(maxi < a[i+1])
        {
            maxi = a[i+1];
            //cout<<maxi<<" ";
            max++;
        }
        if(mini > a[i+1])
        {
            mini = a[i+1];
            //cout<<mini<<" ";
            min++;
        }
    }
    cout<<max<<" "<<min;
    return 0;
}


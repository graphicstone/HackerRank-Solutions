#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, flag = 0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((a[i] + a[j]) % k == 0)
                flag++;
        }
    }
    cout<<flag;
    return 0;
}


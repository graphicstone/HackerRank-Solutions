#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, c=0;
    cin>>n;
    int arr[n], st[100], count[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<100; i++)
    {
        st[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        st[arr[i]]++;
    }
    for(int i=1; i<100; i++)
    {
        st[i] = st[i] + st[i-1];
    }
    for(int i=n-1; i>=0; i--)
    {
        count[st[arr[i]] - 1] = arr[i];
        st[arr[i]]--;
    }
    for(int i=0; i<n; i++)
    {
        cout<<count[i]<<" ";
    }
    return 0;
}

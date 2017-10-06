#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, c=0;
    cin>>n;
    int arr[n], ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int p = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] < p)
        {
            ar[c] = arr[i];
            c++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] >= p)
        {
            ar[c] = arr[i];
            c++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}

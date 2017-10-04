#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int v, n, st;
    cin>>v>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i] == v)
            st = i;
    }
    cout<<st;
    return 0;
}

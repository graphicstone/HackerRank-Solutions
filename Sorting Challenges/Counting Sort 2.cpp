#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, c=0;
    cin>>n;
    long arr[n], st[100], count[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<100; i++)
    {
        int flag=0;
        for(int j=0; j<n; j++)
        {
            if(i == arr[j])
            {
                flag++;
            }
        } 
        st[c] = flag;
        c++;
    }
    c = 0;
    for(int i=0; i<100; i++)
    {
        while(st[i] > 0)
        {
            count[c] = i;
            c++;
            st[i]--;
        } 
    }
    for(int i=0; i<n; i++)
    {
        cout<<count[i]<<" ";
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, c=0;
    cin>>n;
    int arr[n], st[100];
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
    for(int i=0; i<100; i++)
    {
        cout<<st[i]<<" ";
    }
    return 0;
}


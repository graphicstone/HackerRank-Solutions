#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k = arr[n-1];
    for(int i=n-2; i>=-1; i--)
    {
        if(arr[i] > k)
        {
            arr[i+1] = arr[i];
            for(int j=0; j<n; j++)
            {
                cout<<arr[j]<<" ";
            } cout<<"\n";
        }
        else
        {
            arr[i+1] = k;
            for(int j=0; j<n; j++)
            {
                cout<<arr[j]<<" ";
            } cout<<"\n";
            break;
        }
    }
    return 0;
}

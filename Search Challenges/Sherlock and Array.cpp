#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int sum1[n];
        int sum2[n];
        sum1[0]=A[0];
        sum2[n-1]=A[n-1];
        for(int i=1;i<n;i++)
        {
            sum1[i]=sum1[i-1]+A[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            sum2[i]=sum2[i+1]+A[i];
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(sum1[i]==sum2[i])
            {
                k++;
            }
        }
            if(k==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
    }
    return 0;
}

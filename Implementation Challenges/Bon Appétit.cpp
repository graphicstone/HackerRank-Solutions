#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n;
    int k, charge, sum=0;
    cin>>n>>k;
    int c[n];
    for(int i=0; i<n; i++)
    {
        cin>>c[i];
    }
    cin>>charge;
    for(int i=0; i<n; i++)
    {
        if(i == k)
            continue;
        else
            sum = sum + c[i];
    }
    int actual = sum / 2;
    if(charge == actual)
        cout<<"Bon Appetit";
    else
        cout<<charge - actual;
    return 0;
}


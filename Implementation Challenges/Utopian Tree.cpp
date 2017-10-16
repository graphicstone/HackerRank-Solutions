#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t; 
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, h=1; 
        cin>>n;
        for(int j=1; j<=n; j++)
        {
            if(j%2 != 0)
                h = h * 2;
            else
                h = h + 1;
        }
        cout<<h<<"\n";
    }
    return 0;
}

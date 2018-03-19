#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long s,t,a,b,m,n,flag=0,flag1=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int da[m], db[n];
    for(int i=0; i<m; i++)
    {
        cin>>da[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>db[i];
    }
    for(int i=0; i<m; i++)
    {
        if(a + da[i] >= s && a + da[i] <= t)
            flag++;
    }
    for(int i=0; i<n; i++)
    {
        if(b + db[i] >= s && b + db[i] <= t)
            flag1++;
    }
    cout<<flag<<"\n"<<flag1;
    return 0;
}

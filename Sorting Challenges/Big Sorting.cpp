#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
    bool func(string i, string j)
    {
        int n=i.length();
        int m=j.length();
        if(n==m)
            return (i<j);
        return n<m;   
    }
int main(void) 
{
    int size;
    cin >> size;
    vector<string> ar(size);
    for(int i = 0; i < size; i++) 
        cin>>ar[i];
    sort(ar.begin(),ar.end(), func);
    for(int i=0; i<size; i++)
        cout<<ar[i]<<"\n";
    return 0;
}

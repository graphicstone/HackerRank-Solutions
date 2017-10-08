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
        i.length();
        j.length();
        if(i.length==j.length)
            return (i.length<j.length);
        return i.length<j.length;   
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

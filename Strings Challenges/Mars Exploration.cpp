#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    int c=0;
    cin>>s;
    int len = s.length();
    char st[len];
    for(int i=0; i<len; i+=3)
    {
        st[i] = 'S';
        st[i+1] = 'O';
        st[i+2] = 'S';
    }
    //cout<<st;
    for(int i=0; i<len; i++)
    {
        if(s[i] == st[i])
            continue;
        else
            c++;
    }
    cout<<c;
    return 0;
}


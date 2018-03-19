#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cctype>
using namespace std;


int main() {
    string s;
    cin>>s;
    int c=1;
    for(int i=0; i<s.length(); i++)
    {
        if(isupper(s[i]))
            c++;
    }
    cout<<c;
    return 0;
}


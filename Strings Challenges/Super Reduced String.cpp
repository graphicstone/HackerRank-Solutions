#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s;
    cin>>s;
    for(int i=0; i<s.length()-1; i++)
    {
        if(s.length() > 1 && s[i] == s[i+1])
        {
            s.erase(s.begin() + i, s.begin() + (i + 2));
            if(s.length() <= 0)
                break;
            i=-1;
        }   
    }
    if(s.length() > 0)
        cout<<s;
    else
        cout<<"Empty String";
    return 0;
}

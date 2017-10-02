#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    string s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int flag = 0;
        cin>>s;
        string r(s);
        reverse(r.begin(), r.end());
        for(int j=1; j<s.length(); j++)
        {
            int st = sqrt((s[j] - s[j - 1]) * (s[j] - s[j - 1]));
            int rt = sqrt((r[j] - r[j - 1]) * (r[j] - r[j - 1]));
            //cout<<st<<" "<<rt;
            if (st == rt)
            {
                flag++;
                continue;
            }
            else
                break;
        }
        if(flag == (s.length() - 1))
            cout<<"Funny\n";
        else
            cout<<"Not Funny\n";
    }
    return 0;
}

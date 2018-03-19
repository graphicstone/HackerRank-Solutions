#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t,j , k;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        for (j=0;j<s.length()/2;j++) 
        {
            if (s[j]==s[s.length()-1-j]) 
                continue;
            for (k=j+1;k<j+1+(s.length()-1-j-j)/2;k++) 
            {               
                if (s[k]==s[s.length()-k]) 
                    continue;
                cout << s.length()-1-j << endl;
                break;
        }
        if (k==j+1+(s.length()-1-j-j)/2) 
            cout << j << endl;
        break;
    }
    if (j==s.length()/2) 
        cout << -1 << endl;
}
    return 0;
}

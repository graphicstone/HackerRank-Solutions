#include <bits/stdc++.h>

using namespace std;

int commonChild(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();
    int a[2][n+1];
    bool b;
    for(int i=0; i<=m+1; i++)
    {
        b = i & 1;
        for(int j=0; j<=n; j++)
        {
            if(i == 0 || j == 0)
                a[b][j] = 0;
            else if(s1[i-1] == s2[j-1])
                a[b][j] = a[1-b][j-1] + 1;
            else
                a[b][j] = max(a[1-b][j], a[b][j-1]);
        }
    }
    return a[b][n];
}

int main() 
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = commonChild(s1, s2);
    cout << result << endl;
    return 0;
}

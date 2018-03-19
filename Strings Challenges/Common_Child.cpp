#include <bits/stdc++.h>

using namespace std;

int commonChild(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    int arr[n + 1], prev;
    for (int i = 0; i <= m; i++)
    {
        prev = arr[0];
        for (int j = 0; j <= n; j++)
        {
            int temp = arr[j];
            if (i == 0 || j == 0)
                arr[j] = 0;
            else
            {
                if (s1[i - 1] == s2[j - 1])
                    arr[j] = prev + 1;
                else
                    arr[j] = max(arr[j], arr[j - 1]);
            }
            prev = temp;
        }
    }
    return arr[n];
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

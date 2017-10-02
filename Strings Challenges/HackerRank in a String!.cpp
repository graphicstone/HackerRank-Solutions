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
    char arr[10] = {'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
    for(int k=0; k<n; k++)
    {
        cin>>s;
        int flag = 0;
        for(int i=0; i<10; i++)
        {
            for(long j=0; j<s.length(); j++)
            {
                //cout<<arr[i]<<s[j]<<"\n";
                if(arr[i] == s[j])
                {
                    flag++;
                    //cout<<flag<<"\n";
                    if(j == 0)
                    {
                        s.erase(s.begin());
                        //cout<<s<<"\n";
                    }
                    else
                    {
                        s.erase(s.begin(), s.begin() + (j + 1));
                        //cout<<s<<"\n";
                    }
                    break;
                }
            }
        }
        //cout<<flag;
        if(flag >= 10)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    return 0;
}

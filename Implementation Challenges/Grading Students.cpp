#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int grade[n];
    for(int i=0; i<n; i++)
    {
        cin>>grade[i];
    }
    for(int i=0; i<n; i++)
    {
        if(grade[i] >= 38)
        {
            if((5 - grade[i] % 5) < 3)
            {
                grade[i] = grade[i] + (5 - grade[i] % 5);
                cout<<grade[i]<<"\n";
            }
            else
                cout<<grade[i]<<"\n";   
        }
        else
            cout<<grade[i]<<"\n";
    }
    return 0;
}

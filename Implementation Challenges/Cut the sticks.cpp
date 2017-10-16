#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
       cin>>arr[i];
    }
    int na=n;
    int no=0;
    cout<<n<<endl;
    sort(arr.begin(),arr.end());
    int ele=arr[0];
    while(na>1)
    {
        for(int a=0; a<n; a++)
        {
            while(arr[a] == ele)
            {
                no++;
                a++;     
            }
            na=na-no;
            if(na>=1)
            cout<<na<<endl;
            no=1;
            ele=arr[a];
        }
    }
    return 0;
}

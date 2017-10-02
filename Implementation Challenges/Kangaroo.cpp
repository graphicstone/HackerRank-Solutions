#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1,v1,x2,v2,flag=0;
    cin>>x1>>v1>>x2>>v2;
    while(flag == 0 && x1 < x2)
    {
        x1 = x1 + v1;
        x2 = x2 + v2;
        if(x1 == x2)
            flag++;
    }
    if(flag != 0)
        cout<<"YES";
    else if(flag == 0)
        cout<<"NO";
    return 0;
}


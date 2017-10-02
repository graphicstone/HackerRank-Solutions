#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, flag=0;
    cin>>n;
    vector<int> c(n);
    for(int i=0; i<n; i++)
    {
        cin>>c[i];
    }
    //cout<<"Getting in\n";
    for(int i=0; i<c.size(); i++) 
    {
    	//cout<<"\ninside i"<<i<<"\n";
        for(int j=i+1; j<c.size(); j++)
        {
        	//cout<<"inside j"<<j<<"\n";
            if(c[i] == c[j])
            {
            	//cout<<"inside if"<<i<<j<<"\n";
                c.erase(c.begin() + j);
                flag++;
                break;
            }
        }
    }
    cout<<flag;
    return 0;
}


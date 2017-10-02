#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string time;
    int st=0;
    cin>>time;
    if(time[8] == 'A')
    {
        if(time[0] == '1' && time[1] == '2')
        {
            cout<<"00";
            for(int i=2; i<8; i++)
            {
                cout<<time[i];
            }
        }
        else
        {
            for(int i=0; i<8; i++)
            {
                cout<<time[i];
            }
        }
    }
    else
    {
        if(time[0] == '1' && time[1] == '2')
        {
            cout<<"12";
            for(int i=2; i<8; i++)
            {
                cout<<time[i];
            }
        }
            
        else
        {
            if(time[0] == '1' && time[1] == '0')
            {
                cout<<"22";
                for(int i=2; i<8; i++)
                {
                    cout<<time[i];
                }
            }
            else if(time[0] == '1' && time[1] == '1')
            {
                cout<<"23";
                for(int i=2; i<8; i++)
                {
                    cout<<time[i];
                }
            }
            else
            {
                int s = time[1];
                st = s - 48;
                st = st + 12; 
                cout<<st;
                for(int i=2;i<8;i++)
                {
                    cout<<time[i];
                }
            }
        }
    }
    
}


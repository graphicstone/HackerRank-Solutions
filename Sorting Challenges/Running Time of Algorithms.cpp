#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int ar_size;
    cin >> ar_size;
    //scanf("%d", &_ar_size);
    int ar[ar_size], ar_i;
    for(ar_i = 0; ar_i < ar_size; ar_i++) { 
        cin >> ar[ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }
    int temp, j, flag = 0;
    for(int i=1; i<ar_size; i++)
	{
		temp=ar[i];
		j=i-1;
		while((temp<ar[j]) && (j>=0))
		{
			ar[j+1]=ar[j];
			j=j-1;
            flag++;
		}
		ar[j+1]=temp;
	}
    cout<<flag;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int c = 0;
	int a[26];
	int flag = 0;
	for(int i = 0; i < 26; i++)
    {
		a[i] = 0;
	}
	for(int i = 0; i < s.length(); i++)
    {
		int n = (tolower(s[i]) - 'a');
		if(n < 0 || n > 25)
        {
			continue;
		}
		if(a[n] == 0)
        {
			c++;
		}
		if(c >= 26)
        {
			flag = 1;
			break;
		} 
        else 
        {
			a[n]++;
		}
	}
	if(flag)
    {
		cout << "pangram" << endl;
	} 
    else 
    {
		cout << "not pangram" << endl;
	}

	return 0;
}

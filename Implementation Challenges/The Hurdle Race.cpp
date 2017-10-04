#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
       cin >> h[i];
    }
    int max = *max_element(h.begin(), h.end());
    if(max > k)
        cout<<max - k;
    else
        cout<<"0";
    return 0;
}

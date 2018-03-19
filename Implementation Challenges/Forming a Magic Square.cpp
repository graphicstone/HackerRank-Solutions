#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int formingMagicSquare(vector < vector<int> > s) {
    int magic_mat[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},  
    };
    int max_cost = 81;
    for (int k = 0; k < 8; k++) {
        int cal_cost = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cal_cost += abs( s[i][j] - magic_mat[k][i][j] );
        }
        if (cal_cost < max_cost)
            max_cost = cal_cost;
    }
    return max_cost;
}

int main() {
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> s[s_i][s_j];
       }
    }
    int result = formingMagicSquare(s);
    cout << result << endl;
    return 0;
}

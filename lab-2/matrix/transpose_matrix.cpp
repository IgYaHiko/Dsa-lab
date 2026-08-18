#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose_matrix(vector<vector<int>>& matirx) {
        vector<vector<int>> res(matirx[0].size(), vector<int>(matirx.size()));
        for (int i = 0; i < matirx.size(); i++) {
            for(int j = 0; j < matirx[0].size(); j++) {
                res[j][i] = matirx[i][j];
            }
        }
    return res;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {1,2,3},
       
    };
    vector<vector<int>> ans = sol.transpose_matrix(mat);
    for (const vector<int>& row : ans) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
    
}

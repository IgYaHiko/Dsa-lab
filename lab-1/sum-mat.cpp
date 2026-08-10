#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sumofMatrix(vector<vector<int>>& nums) {
            for (int i=0; i< nums.size(); i++) {
                int total = 0;
                for (int j=0; j< nums[i].size(); j++) {
                    total += nums[i][j];
                    
                }
                cout << "row" << i << "=" << total << endl;
               
            }
            for (int i=0; i < nums[0].size(); i++) {
                int total = 0;
                for (int j=0; j<nums.size(); j++) {
                    total += nums[j][i];
                }
                cout << "column " << i << " = " << total << endl;
            }
        
    }

};

int main()  {
     vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution sol;
    sol.sumofMatrix(matrix);

    return 0;

}
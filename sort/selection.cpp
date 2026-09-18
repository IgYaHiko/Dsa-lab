#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> selection(vector<int> &nums) {
        for(int i=0; i<nums.size(); i++) {
            int minIndex = i;

            for(int j=i+1; j<nums.size(); j++) {
                if(nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
              
            }
            swap(nums[i], nums[minIndex]);

        }
    return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4,5,6,2,4,6,710,23,9,100,1};
    vector<int> ans = sol.selection(nums);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}
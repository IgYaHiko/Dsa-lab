#include<iostream>
#include<vector>
using namespace std;

class Solution {
public: 
    vector<int> insertion(vector<int> &nums) {
        
        for(int i=1; i<nums.size(); i++) {
            int key = nums[i];
            int j = i-1;
            while(j >= 0 && nums[j] > key) {
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = key;
            
        }
    return nums;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {4,23,1,4,34,54,51,4,2};
    vector<int> ans = sol.insertion(nums);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}
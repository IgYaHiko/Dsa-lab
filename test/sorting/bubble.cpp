#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int> &nums) {
        for(int i=0; i<nums.size(); i++) {
            for(int j=0; j<nums.size()-i-1; j++) {
                if(nums[j] > nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                }
            }
        }
    return nums;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3,2,1,4,5,5,62,0};
    vector<int> ans = sol.bubbleSort(nums);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;

}
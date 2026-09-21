#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int> &nums) {
        for(int i=0; i<nums.size(); i++) {
            int minIndex = i;
            for(int j= i+1; j<nums.size(); j++) {
                if(nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
                swap(nums[i], nums[minIndex]);
            }
        }
    return nums;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2,3,1,50,5,4,3,4,0,98,8};
    vector<int> ans = sol.selectionSort(nums);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}
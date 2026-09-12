#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++) {
            int minIndex = i;
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[j] < nums[minIndex]) {
                    minIndex = j;
                }

                
            }
            int temp = nums[i];
            nums[i] = nums[minIndex];
            nums[minIndex] = temp;

        }
    return nums;
    }   
};

int main() {
    Solution sol;
    vector<int> nums = {5,3,34,1,23,0};
    vector<int> ans = sol.selectionSort(nums);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}
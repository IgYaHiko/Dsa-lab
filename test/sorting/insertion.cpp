#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> insertionSort(vector<int> &nums) {
        for(int i=1; i<nums.size(); i++) {
            int key = nums[i];
            int j = i-1;
            while( j >= 0 && nums[j] > key) {
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
    vector<int> nums = {3,1,9,3,4,5,20,11,1,32,29,82,50,59,40};
    vector<int> ans = sol.insertionSort(nums);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}
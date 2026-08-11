#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
         for (int i=0; i<nums.size()-1; i++) {
            for (int j=0; j<nums.size()-i-1; j++) {
                if(nums[j] > nums[j+1]) {
                   int temp = nums[j+1];
                   nums[j+1] = nums[j];
                   nums[j] = temp;
                }
            }
         }
         return nums;
    }
};



int main() {
    vector<int> nums = {4,5,6,7,7,45,1};
    Solution sol;
    vector<int> ans = sol.bubbleSort(nums);
    for (int x: ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
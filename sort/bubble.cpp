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
    vector<int> nums = {1,3,4,53,34,34,35,45};
    vector<int> ans = sol.bubbleSort(nums);
    cout << "sorted Arrray: " << endl;
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;


}
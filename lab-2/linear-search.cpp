#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); i++) {
            if(target == nums[i]) {
               return i;
            }
        }
        return -1;
    }
};

int main() {
    cout << "Enter a target to search: ";
    int target;
    cin >> target;
    vector<int> nums = {1,2,3,4,5};
    Solution sol;
    cout << sol.linearSearch(nums, target);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> zeroDuplicate(vector<int>& nums) {
        int possible = 0;
        int last = nums.size() - 1;
        for (int i = 0; i <= possible - last; i ++) {
            if (nums[i] == 0) {
                if (i == possible - last) {
                    nums[last] = 0;
                    possible--;
                    last --;
                }
                possible ++;
            }

        }
        int i = last - possible;
        int j = last;
        while (i >= 0) {
            if(nums[i] == 0) {
                nums[j--] = 0;
                nums[j--] = 0;
            } else {
                nums[j] = nums[i];
                j--;

            }
            i++;
        }
    return nums;
    
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,0,3,4,0,0,1,3};
    vector<int> ans = sol.zeroDuplicate(nums);
    for (int x: ans) {
        cout << x << " ";
    }
    return 0;
    
}
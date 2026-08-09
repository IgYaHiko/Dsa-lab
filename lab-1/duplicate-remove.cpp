#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> duplicate_element(vector<int>& nums) {
        int i = 0;
        int j = 1;

        while (j < nums.size()) {

            if (nums[i] != nums[j]) {
                nums[i + 1] = nums[j];
                i++;
            }

            j++;
        }

        for (int k = 0; k <= i; k++) {
            cout << nums[k] << " ";
        }

        return nums;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 3, 3};

    Solution sol;

    sol.duplicate_element(nums);

    cout << endl;

    return 0;
}
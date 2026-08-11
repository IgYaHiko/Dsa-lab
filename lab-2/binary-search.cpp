#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int binarySearch(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        
        while (i<=j) {
            int mid = (i+j)/2;
            if (nums[mid] == target) {
                return mid;
            }
            if (target < nums[mid]) {
                j = mid - 1;
                if (target == nums[mid]) {
                    return mid;
                }
            } else {
                i = mid + 1;
                if(target == nums[mid]) {
                  return mid;
                }
            }

        }

         return -1;
    }
};

int main() {
    cout << "Enter your Target" << endl;
    int target;
    
    cin >> target;
    vector<int> nums = {1,2,3,4,5};
    Solution sol;
    cout << sol.binarySearch(nums,target) << endl;
    return 0;
}
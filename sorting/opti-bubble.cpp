#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> bubblesort(vector<int> &nums) {
        for(int i=0; i<nums.size(); i++) {
            bool swapped = false;
            for(int j=0; j<nums.size()-i-1; j++) {
                if(nums[j] > nums[j+1]) {
                    swap(nums[j], nums[j+1]);
                    swapped = true;
                }
               
            }
             if(!swapped) {
                    break;
                }
        }
    return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4,3,52,3,0,3,1};
    vector<int> ans = sol.bubblesort(nums);
    cout << "sorted Arrray: " << endl;
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}
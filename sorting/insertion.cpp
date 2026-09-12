#include<iostream>
#include<vector>
using namespace std;
class SOlution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++) {
            int key = nums[i];
            int j = i-1;
            while(j >= 0 && nums[j] > key) {
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = key;

        }
    return nums;
    }
};
int main() {
    SOlution sol;
    vector<int> nums = {4,43,4,34,34,23,3,24};
    vector<int> ans = sol.insertionSort(nums);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}
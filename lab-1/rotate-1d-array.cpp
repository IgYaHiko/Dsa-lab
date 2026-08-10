#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> reverseArray(vector<int>& arr, int i, int j) {
        while (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        return arr;
         
    }
    vector<int> rotateArray(vector<int>& nums, int k) {

        k %= nums.size();
        reverseArray(nums, 0, nums.size()-1);
        reverseArray(nums, 0, k-1);
        reverseArray(nums, k, nums.size()-1);
        return nums;
}

};
int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6,7};
    vector<int> ans = sol.rotateArray(nums, 3);
    for (int i: ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int pivotIndex(vector<int>& nums, int start, int end) {
        int idx = start - 1;
        int pivot = nums[end];

        for(int j=start; j<end; j++) {
            if(nums[j] < pivot) {
                idx++;
                swap(nums[j], nums[idx]);
            }
        }

        idx++;
        int temp = nums[idx];
        nums[idx] = pivot;
        pivot = temp;
        

        return idx;
    }
    void quickSort(vector<int>& nums, int start, int end) {
        if (start < end) {

            int pivotEle = pivotIndex(nums, start, end);

            quickSort(nums, start, pivotEle-1); // right half
            quickSort(nums, pivotEle+1, end);   // left half
        }
    }

};

int main() {
    Solution sol;
    vector<int> nums = {1,3,5,52,3,5,6,2,3,4,56,30};
    sol.quickSort(nums, 0, nums.size()-1);

    cout << "\n Sorted Array \n" << endl;;
    for(int x: nums) {
        cout << x << " "; 
    }
    return 0;
}
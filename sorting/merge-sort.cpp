#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int> &nums, int low, int mid, int high) {
        int i = low;
        int j = mid+1;
        vector<int> temp;
        while( i <= mid && j <= high) {
            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }
        // if there is any remaining elements is left part
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }
        // if there is any remaining elements in right part
        while( j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        // copy all the element in the main array to temp array
        for(int k=0; k<temp.size(); k++) {
            nums[low+k] = temp[k];
        }
    } 
    void mergeSort(vector<int> &nums, int low, int high) {
        // base case
        if(low >=  high) {
            return;
        }
         int mid = low + (high - low) / 2;

            // recursive call for left part
            mergeSort(nums, low, mid);

            // recursive call for right part
            mergeSort(nums, mid+1, high);
            
            // merge the elements 
            merge(nums, low, mid, high);

         
    }
};
int main() {
    Solution sol;
    vector<int> nums = {5,4,2,3,4,1,0};
    sol.mergeSort(nums,0, nums.size()-1);

    cout << "sorted array: ";

    for(int x: nums) {
        cout << x << " ";
    }
    return 0;

}
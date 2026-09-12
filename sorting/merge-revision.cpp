#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int> &nums, int low, int mid, int high) {
        vector<int> temp;
        int i = low;
        int j = mid+1;
        while(i <= mid && j <= high) {
            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }
        while(j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        for(int k=0; k<temp.size(); k++) {
            nums[low+k] = temp[k];
        }

    }
    void mergeSort(vector<int> &nums, int low, int high) {
        if(low >= high) {
            return;
        }
        int mid = low + ( high - low ) / 2;
        mergeSort( nums, low, mid );
        mergeSort(nums, mid+1, high);
        merge(nums, low, mid, high);    
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,4,2,2,4134,5,3,1,33435,23334};
    int low = 0;
    int high = nums.size()-1;
    sol.mergeSort(nums, low, high);
    for(int x: nums) {
        cout << x << " ";
    }
    return 0;

}
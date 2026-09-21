#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int> &nums, int left, int mid, int right) {
        vector<int> temp;
        int i = left;
        int j = mid + 1;

        while( i <= mid && j <= right) {
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
        while(j <= right) {
            temp.push_back(nums[j]);
            j++;
        }

        for(int k=0; k<temp.size(); k++) {
            nums[left+k] = temp[k];
        }

    }
    void mergesort(vector<int> &nums, int left, int right) {
        if (left >= right) {
            return;
        }

        // left division 
        int mid = left + (right - left) /2;
        mergesort(nums, left, mid);
        mergesort(nums, mid+1, right);
        merge(nums, left, mid, right);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4,3,2,1};
    int left = 0;
    int right = nums.size()-1;
    sol.mergesort(nums, left, right);

    for(int x: nums) {
        cout << x << " ";
    }
    return 0;

    



}
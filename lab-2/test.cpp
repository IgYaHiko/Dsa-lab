#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {1,3,4,5};
    cout << nums[0] << endl;
    cout << nums[nums.size() - 1];
    return 0;
}
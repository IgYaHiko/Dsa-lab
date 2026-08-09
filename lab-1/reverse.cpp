#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<char> reverseString(vector<char>& s) {
            int i = 0;
            int j = s.size() -1;
            while (i < j) {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
        return s;
        }
};

int main() {
    vector<char> s = {'h','e','l','l','o'};
    Solution sol;
    vector<char> ans = sol.reverseString(s);
    for (char x: ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;


    
}
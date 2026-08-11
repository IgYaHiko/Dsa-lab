#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string reverseString(string& s) {
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
    cout << "Enter a string you want to reverse: ";
    string s;
    cin >> s;
    Solution sol;
    cout << sol.reverseString(s);   

    return 0;
}
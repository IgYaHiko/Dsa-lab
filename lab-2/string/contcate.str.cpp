#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string concateString(string s1, string s2) {
            string con = s1 + " " +  s2;
            return con;
    }
};

int main() {
    cout << "Enter the first String: ";
    string s1;
    cin >> s1;
    cout << "Enter the second string: ";
    string s2;
    cin >> s2;
    Solution sol;
    cout << sol.concateString(s1, s2);
    return 0;
}

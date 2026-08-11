#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string removeVow(string& s) {
        bool found = false;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u') {
                found = true;
                s.erase(i, 1);
                i--;
            } else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'|| s[i] == 'U') {
                found = true;
                s.erase(i,1);
                i--;
            }
       
        
        }
     if (!found) {
            cout << "No vow found" << endl;
        }
    return s;
    }
};

int main() {
    cout << "Enter a string: ";
    string s1;
    cin >> s1;
    Solution sol;
    cout << sol.removeVow(s1);
    return 0;

}
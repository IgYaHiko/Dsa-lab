#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main() {
    int n = 5;
    unordered_set<int> s;
    for(int i=1; i<=n; i++) {
            if(n % i == 1) {
                s.insert(i);
    }
    cout << s.size();
}
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int n;
    int choice;
    while (true) {
        cout << "\n----- MENU -----\n";
        cout << "1) CREATE\n";
        cout << "2) DISPLAY\n";
        cout << "3) INSERT\n";
        cout << "4) DELETE\n";
        cout << "5) LINEAR SEARCH\n";
        cout << "6) EXIT\n";

        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1: {
                cout << "Enter the size: ";
                cin >> n;

                nums.resize(n);
                cout << "Enter element of array: \n";


                for (int i=0; i<n; i++) {
                    cin >> nums[i];
                }
                cout << "Array successfully created!\n";
                break;

            }
            case 2: {
            cout << "here's the created array: ";

            for (int i = 0; i < n; i++) {
                cout << nums[i] << " ";
             }

            cout << endl;
            break;
        }
            case 3: {
                cout << "Insert a element is array: ";
                int element;
                cin >> element;
                nums.push_back(element);
                cout << "after push a element -> ";
                for (int i=0; i<nums.size(); i++) {
                    cout << nums[i] << " ";
                }
                cout << endl;
                break;

            }
            case 4: {
                cout << "Delet element: ";
                nums.pop_back();
                cout << "After delet the top: ";
                for (int i=0; i<nums.size(); i++) {
                    cout << nums[i] << " ";
                }
                cout << endl;
                break;

            }
            case 5: {
            cout << "Binary Search\n";
    
            int target;
            cout << "Enter a target: ";
            cin >> target;

              int i = 0;
              int j = nums.size() - 1;
              bool found = false;

             while (i <= j) {
                int mid = (i + j) / 2;

                 if (nums[mid] == target) {
                     cout << "Target found at index: " << mid << endl;
                     found = true;
                     break;
                }
                 else if (target < nums[mid]) {
                 j = mid - 1;
                 }
                else {
                  i = mid + 1;
            }
     }

    if (!found) {
        cout << "Target not found!" << endl;
    }

    break;
}
           

                
            default:
                cout << "Invalid!\n";
        }
    }
    return 0;
}
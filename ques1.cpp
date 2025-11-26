/*
Name: Bani
Roll No: 102403190
Question 1: Check if array contains duplicates using hash set
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    
    for (int i = 0; i < nums.size(); i++) {
        if (seen.find(nums[i]) != seen.end()) {
            return true; 
        }
        seen.insert(nums[i]);
    }
    
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    
    if (containsDuplicate(nums)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}

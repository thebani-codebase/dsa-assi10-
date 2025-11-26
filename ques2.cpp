/*
Name: Bani
Roll No: 102403190
Question 2: Find common elements between two arrays using hash set
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findCommonElements(vector<int>& A, vector<int>& B) {
    unordered_set<int> setA;
    vector<int> common;
    
    // Add all elements of A to set
    for (int i = 0; i < A.size(); i++) {
        setA.insert(A[i]);
    }
    
    // Check if elements of B are in set
    for (int i = 0; i < B.size(); i++) {
        if (setA.find(B[i]) != setA.end()) {
            common.push_back(B[i]);
        }
    }
    
    return common;
}

int main() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {3, 4, 5, 6};
    
    vector<int> result = findCommonElements(A, B);
    
    cout << "Common elements: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}

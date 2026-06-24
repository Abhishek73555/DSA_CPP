/*
 * Input:  [1, 1, 2, 3, 3]
 * Output: [1, 2, 3]
 * 
 * Console Visual Output:
 * Original List: 1 -> 1 -> 2 -> 3 -> 3 -> nullptr
 * Modified List: 1 -> 2 -> 3 -> nullptr
 */

#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main() {
    // 1. Initialize input data
    vector<int> values = {1, 1, 2, 3, 3};
    
    // 2. Build the linked list
    ListNode* head = nullptr;
    if (!values.empty()) {
        head = new ListNode(values[0]);
        ListNode* current = head;
        for (size_t i = 1; i < values.size(); ++i) {
            current->next = new ListNode(values[i]);
            current = current->next;
        }
    }

    // 3. Print original list
    cout << "Original List: ";
    ListNode* printPtr = head;
    while (printPtr) {
        cout << printPtr->val;
        if (printPtr->next) cout << " -> ";
        printPtr = printPtr->next;
    }
    cout << " -> nullptr\n";

    // 4. Core Logic: Remove duplicates from the sorted list
    if (head) {        
        ListNode* temp = head;
        while (temp && temp->next) {
            if (temp->val == temp->next->val) {
                ListNode* duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            } else {
                temp = temp->next;
            }
        }
    }

    // 5. Print modified list
    cout << "Modified List: ";
    printPtr = head;
    while (printPtr) {
        cout << printPtr->val;
        if (printPtr->next) cout << " -> ";
        printPtr = printPtr->next;
    }
    cout << " -> nullptr\n";

    // 6. Free allocated memory to prevent leaks
    while (head) {
        ListNode* cleanupPtr = head;
        head = head->next;
        delete cleanupPtr;
    }

    return 0;
}

#include <iostream>
using namespace std;

/*
    Problem: Merge Two Sorted Linked Lists

    APPROACH:
    ----------
    Use 3 pointers:

    a → first list
    b → second list
    temp → builds merged list

    Create a dummy node:
        c

    Compare values:
    - smaller node gets attached
    - move corresponding pointer

    Finally connect remaining nodes.

    TIME: O(n + m)
    SPACE: O(1)
*/

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

void print(ListNode* head) {

    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    /*
        List A:
        1 -> 3 -> 5

        List B:
        2 -> 4 -> 6
    */

    ListNode* a = new ListNode(1);
    a->next = new ListNode(3);
    a->next->next = new ListNode(5);

    ListNode* b = new ListNode(2);
    b->next = new ListNode(4);
    b->next->next = new ListNode(6);

    cout << "List A: ";
    print(a);

    cout << "List B: ";
    print(b);

    /*
        Dummy node
    */

    ListNode* c = new ListNode(100);

    ListNode* temp = c;

    while (a != nullptr && b != nullptr) {

        if (a->val >= b->val) {

            temp->next = b;

            b = b->next;

        } else {

            temp->next = a;

            a = a->next;
        }

        temp = temp->next;
    }

    /*
        Attach remaining nodes
    */

    if (a == nullptr)
        temp->next = b;

    else
        temp->next = a;

    cout << "\nMerged List: ";

    print(c->next);

    return 0;
}
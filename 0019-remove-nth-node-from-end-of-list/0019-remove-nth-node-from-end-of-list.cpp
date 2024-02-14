/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int size = 0;
    ListNode* temp = head;
    while (temp != nullptr) {
        temp = temp->next;
        size++;
    }

    int idx = size - n;
    temp = head;
    ListNode* prev = nullptr;

    while (idx--) {
        prev = temp;
        temp = temp->next;
    }

    if (prev != nullptr) {
        prev->next = temp->next;
        // delete(temp);  // Delete only if prev is not nullptr
    } else {
        head = head->next;  // Update head if deleting the first node
        delete(temp);
    }

    return head;
}

};
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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr)return false;
        if(head->next ==nullptr)return true;
        int size = 0;
        ListNode* temp = head;
        while(temp!=nullptr)
        {
            size++;
            temp = temp->next;
        }
        temp = head;
        ListNode* prev = nullptr;
        ListNode* fast=head;
        int idx = size/2;
        while(idx > 0)
        {
            fast = temp->next;
            temp->next = prev;
            prev = temp;
            temp = fast;
            idx--;
        }
        if(size%2 !=0 && prev!=nullptr)fast=fast->next;
        if(prev == nullptr && size%2  != 0)return prev->next->val == fast->next->next->val;
        while(prev && fast)
        {
            if(prev->val != fast->val)
                return false;
            prev=prev->next;
            fast=fast->next;
        }
        return true;
    }
};
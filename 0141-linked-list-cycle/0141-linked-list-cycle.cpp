/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)return false;
        ListNode* fast = head->next;
        ListNode* slow = head;
        // if(head->next == nullptr)return false;
        while(slow != fast)
        {
            if(fast == nullptr || fast->next==nullptr || fast->next->next==nullptr)return false;;
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};
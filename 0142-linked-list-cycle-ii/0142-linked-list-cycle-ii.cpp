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
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)return nullptr;
        // if(head->next)
        ListNode* fast = head;
        ListNode* slow = head;
        
        // ListNode* prev = nullptr;
        while(fast!=nullptr && fast->next != nullptr)
        {
            // if(fast == nullptr || fast->next==nullptr || fast->next->next==nullptr)return nullptr;
            
            // prev = slow;
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                slow = head;
                while(slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};
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
    ListNode* reverse(ListNode* head)
    {
        if(head ==nullptr)return nullptr;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* fast = head;
        while(fast!=nullptr)
        {
            fast=curr->next;
            curr->next = prev;
            prev=curr;
            curr=fast;
        }
        return prev;
    }
    ListNode* getKthNode(ListNode* head,int k)
    {
        k -= 1;
        ListNode* temp = head;
        while(temp && k--)
        {
            temp=temp->next;
        }
        return temp;
        
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return nullptr;
        if(k==0 || !head->next)return head;
        
        int size =0 ;
        ListNode* kthNode = head;
        while(kthNode)
        {
            kthNode= kthNode->next;
            size++;
        }
        if(k>=size)
        {
            k = k%size;
        }
        if(k==0)return head;
        k = size - k;
        
        
        ListNode* temp = head;
        kthNode = getKthNode(head,k);
        ListNode* nextNode = nullptr;
        ListNode* prevHead = nullptr;
        ListNode* nextHead = nullptr;
        
        nextNode = kthNode->next;
        kthNode -> next = nullptr;
        prevHead = temp;
        
        
        nextHead = nextNode;
        
        
        ListNode* ctr = nextHead;
        while(ctr->next)
        {
            ctr = ctr->next;
        }
        ctr->next = prevHead;
        return nextNode;
        
        // return prevHead;
    }
};
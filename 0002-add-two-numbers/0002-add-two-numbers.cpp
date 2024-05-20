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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* newHead = new ListNode();
        ListNode* res = newHead;
        
        while(temp1!= nullptr || temp2!= nullptr || carry!=0)
        {
            int data = carry;
            if(temp1)
            {
                data += temp1->val;
                temp1=temp1->next;
            }
            if(temp2)
            {
                data += temp2->val;
                temp2 = temp2->next;
            }
            carry = data/10;
            res ->next = new ListNode((data)%10);
            res = res->next;
            
        }
        
        return newHead->next;
        
        
        // ListNode* res =  new ListNode();
        
        
        
        
        
//         newHead -> next = res;
//         while(temp1 && temp2)
//         {
//             int data = (temp1->val + temp2->val + carry)%10;
//             ListNode* tempNode = new ListNode(data);
//             res -> next = tempNode;
//             tempNode->next= nullptr;
//             res=  tempNode;
//             carry = (temp1->val + temp2->val + carry)/10;
//             temp1 = temp1->next;
//             temp2 = temp2->next;
            
//             // cout<<"carry : "<<carry<<endl;
//         }
        
//         while(temp1!=nullptr)
//         {
//             int data = (temp1->val + carry)%10;
//             cout<<"data : "<<data<<endl;
//             ListNode* tempNode = new ListNode(data);
//             res -> next = tempNode;
//             tempNode->next= nullptr;
//             res=  tempNode;
//             // res -> next = nullptr;
//             res = res->next;
//             temp1 = temp1->next;
//             carry = data/10;
            
//         }
//         while(temp2)
//         {
//             int data = (temp2->val + carry)%10;
//             ListNode* tempNode = new ListNode(data);
//             res -> next = tempNode;
//             tempNode->next= nullptr;
//             res=  tempNode;
//             temp2 = temp2->next;
//             carry = data/10;
//         }
        
//         return newHead -> next->next;
    }
};
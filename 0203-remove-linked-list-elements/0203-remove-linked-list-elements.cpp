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
    ListNode* removeElements(ListNode* head, int val) {
       if(head==NULL){
           return head;
       }
        while(head!=NULL&&head->val==val){
                ListNode* temp=head;
             head=head->next;
                delete(temp);
            
            
        }
        ListNode* curr=head;
        while(curr!=NULL&&curr->next!=NULL){
            if(curr->next->val==val){
                ListNode* temp2=curr->next;
                curr->next=temp2->next;
                delete(temp2);
            }
            else{
                curr=curr->next;
            }
        }
        return head;
        
    }
};
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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* modi=head->next;
        ListNode* nextSum=modi;
        while(nextSum){
            int sum=0;
            while(nextSum->val!=0){
                sum=sum+nextSum->val;
                nextSum=nextSum->next;
            }
            modi->val=sum;
            nextSum=nextSum->next;
            
            modi->next=nextSum;
            modi=modi->next;
        }
        
        return head->next;
    }
};
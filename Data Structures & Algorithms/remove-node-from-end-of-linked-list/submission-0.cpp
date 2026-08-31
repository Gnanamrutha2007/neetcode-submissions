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
    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next=nullptr;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = reverse(head);
        ListNode* temp=start;
        int cnt=1;
        ListNode* prev=nullptr;
        while(temp!=nullptr && cnt<n){
            prev=temp;
            temp=temp->next;
            cnt++;
        }
        if(prev==nullptr){
            start=temp->next;
        }
        else{
            prev->next=temp->next;
            delete(temp);
        }
        return reverse(start);
    }
};
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
    void insert_tail(ListNode *&head,ListNode *&tail,int val){
        ListNode *newNode = new ListNode(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void reverse(ListNode *&head,ListNode *cur){
        if(cur->next == NULL){
            head = cur;
            return;
        }
        reverse(head,cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return head;
        ListNode *newhead = NULL;
        ListNode *newtail = NULL;
        ListNode *temp = head;

        while(temp != NULL){
            insert_tail(newhead,newtail,temp->val);
            temp = temp->next;
        }
        reverse(newhead,newhead);
        temp = head;
        ListNode *temp2 = newhead;

        while(temp != NULL){
            if(temp->val != temp2->val) return false;
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};
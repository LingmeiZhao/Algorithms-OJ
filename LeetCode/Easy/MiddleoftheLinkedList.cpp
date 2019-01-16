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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL)
        {
            return NULL;
        }
        int count = 0;
        ListNode* current = head;
        while(current != NULL)
        {
            count++;
            current = current ->next;
        }
        if(count == 1)
        {
            return head;
        } else if(count == 2)
        {
            return head->next;
        }else if(count % 2 == 1)
        {
            int end = (count+1)/2;
            ListNode* res = head;
            for(int i=1; i< end; i++)
            {
                res = res -> next;
            }
            return res;
        }else if(count % 2 == 0)
        {
            int end = count / 2;
            ListNode* res = head;
            for(int i=1; i<= end; i++)
            {
                res = res -> next;
            }
            return res;
        }
        return NULL;
    }
}; 


// Method2:
  ListNode* middleNode(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        return slow;
    }


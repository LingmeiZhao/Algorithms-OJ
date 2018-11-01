class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr)
        {
            return NULL;
        }

        ListNode *currentA = headA;
        ListNode *currentB = headB;
        if( headA -> next == nullptr && headB -> next == nullptr)
        {
            if(headA == headB)
            {
                return headA;
            }
        }
         if((headA -> next == nullptr) && (headA != nullptr))
        {
            while(currentB != nullptr)
            {
                if(currentB == headA)
                {
                    return headA;
                }
                else
                {
                    currentB = currentB -> next;
                }
            }
        }
         if((headB -> next == nullptr) && (headB != nullptr))
        {
            while(currentA  != nullptr)
            {
                if(currentA == headB)
                {
                    return headB;
                }
                else
                {
                    currentA = currentA -> next;
                }
            }
        }
        while(currentA  != nullptr )
        {
            ListNode *currentB = headB;
            while(currentB  != nullptr)
            {
                if(currentA == currentB )
                {
                    return currentA;
                }else
                {
                    currentB = currentB -> next;
                }
             }
            currentA = currentA -> next;
        }
        
        ListNode *currentB2 = headB;
        while(currentB2  != nullptr )
        {
             ListNode *currentA2 = headA;
            while(currentA2  != nullptr)
            {
                if( currentB2 == currentA2 )
                {
                    return currentB2;
                }else
                {
                    currentA2 = currentA2 -> next;
                }
             }
            currentB2 = currentB2 -> next;
        }
        return NULL;
    }
}; 

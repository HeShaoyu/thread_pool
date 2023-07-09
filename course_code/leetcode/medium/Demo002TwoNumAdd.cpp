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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node = new ListNode(0);
        ListNode* l = node;
        int plus = 0;
        while (l1 or l2 or plus)
        {
            ListNode* tempNode = new ListNode;

            if (l1 and l2)
            {
                if ((l1->val + l2->val + plus) > 9)
                {
                    tempNode->val = (l1->val + l2->val + plus) % 10;
                    plus = 1;
                }else
                {
                    tempNode->val = l1->val + l2->val + plus;
                    plus = 0;
                }
                l1 = l1->next;
                l2 = l2->next;
            }else if (l1)
            {
                if ((l1->val + plus) > 9)
                {
                    tempNode->val = (l1->val + plus) % 10;
                    plus = 1;
                }else
                {
                    tempNode->val = l1->val + plus;
                    plus = 0;
                }
                l1 = l1->next;
            }else if(l2)
            {
                if ((l2->val + plus) > 9)
                {
                    tempNode->val = (l2->val + plus) % 10;
                    plus = 1;
                }else
                {
                    tempNode->val = l2->val + plus;
                    plus = 0;
                }
                l2 = l2->next;
            }
            else
            {
                tempNode->val = 1;
                plus = 0;
            }
            l->next = tempNode;
            l = l->next;
        }
        return node->next;
    }
};
int main()
{
    ListNode* L1 = new ListNode(0);
    ListNode* L2 = new ListNode(7);
    ListNode* L3 = new ListNode(3);
    L2->next = L3;
    Solution sol;
    ListNode* L4 =  sol.addTwoNumbers(L1, L2);
    return 0;
}
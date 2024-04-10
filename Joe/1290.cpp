
 //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int listsize=0;
        int sum=0;
        for (ListNode* temp = head; temp!=nullptr; temp = temp->next) {
            listsize++;
        }
        for (ListNode* cur = head; cur!=nullptr; cur = cur->next) {
            sum += cur->val*(pow(2,listsize-1));
            listsize--;
        }
        return sum;
    }
};
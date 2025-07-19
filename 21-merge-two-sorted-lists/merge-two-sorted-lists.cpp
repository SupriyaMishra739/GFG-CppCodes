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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
         vector<int> v;

        ListNode* temp = head1;
        while(temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        temp = head2;
        while(temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }
          if (v.empty()) return nullptr;  // ✅ Handle case where both lists are empty

        sort(v.begin(), v.end());

        // Create a new merged sorted list
        ListNode* mergedHead = new ListNode(v[0]);
        ListNode* curr = mergedHead;

        for(int i = 1; i < v.size(); i++) {
            curr->next = new ListNode(v[i]);
            curr = curr->next;
        }

        return mergedHead;
        
    }
};
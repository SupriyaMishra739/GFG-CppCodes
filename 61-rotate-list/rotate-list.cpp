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
    vector<int> rotateArray(vector<int> &v, int k) {
        int n = v.size();
        if (n == 0) return v;
        k = k % n;

        reverse(v.begin(), v.begin() + (n - k));
        reverse(v.begin() + (n - k), v.end());
        reverse(v.begin(), v.end());

        return v;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;

        vector<int> v;
        ListNode* temp = head;

        // Convert list to array
        while (temp != nullptr) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        // Rotate array
        vector<int> res = rotateArray(v, k);

        // Write back to list
        temp = head;
        int i = 0;
        while (temp != nullptr) {
            temp->val = res[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};

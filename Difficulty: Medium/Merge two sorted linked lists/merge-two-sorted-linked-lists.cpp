class Solution {
public:
    Node* sortedMerge(Node* head1, Node* head2) {
        vector<int> v;

        Node* temp = head1;
        while(temp != NULL) {
            v.push_back(temp->data);
            temp = temp->next;
        }

        temp = head2;
        while(temp != NULL) {
            v.push_back(temp->data);
            temp = temp->next;
        }

        sort(v.begin(), v.end());

        // Create a new merged sorted list
        Node* mergedHead = new Node(v[0]);
        Node* curr = mergedHead;

        for(int i = 1; i < v.size(); i++) {
            curr->next = new Node(v[i]);
            curr = curr->next;
        }

        return mergedHead;
    }
};

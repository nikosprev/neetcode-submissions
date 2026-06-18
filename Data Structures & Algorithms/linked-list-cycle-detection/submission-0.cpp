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
    bool hasCycle(ListNode* head) {
      unordered_map<ListNode *,bool> hash;
      ListNode* temp;
      while(head){
        if(hash.find(head->next)!=hash.end()){
           
            return true;

        }
        else hash[head->next]= true;
        head=head->next;
      } 
    return false;
    }
  
};

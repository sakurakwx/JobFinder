class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        int len = 0;
        ListNode * cp1 = head;
        ListNode * cp2 = head;
        ListNode * cp3 = head;
        while(cp1!=NULL){
            len+=1;
            cp1 = cp1->next;
        }
        int* stack = (int*)malloc(len*sizeof(int));
        for(int i=len-1;i>=0;i--){
            stack[i] = cp2->val;
            cp2 = cp2->next;
        }
        for(int i=0;i<len;i++){
            cp3->val = stack[i];
            cp3 = cp3 -> next;
        }
        return head;
    }
};
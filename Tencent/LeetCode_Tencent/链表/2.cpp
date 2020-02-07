//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * sum_cal = new ListNode(-1);
        ListNode * sum = sum_cal;
        int temp = 0;
        int c = 0;
        bool flag = true;
        while(flag){
            if (l1!=nullptr&&l2!=nullptr) {
                temp = l1->val + l2->val + c;
                if(temp >= 10){
                    temp -= 10;
                    c = 1;
                }
                else c = 0;
                sum->val=temp;
            }
            else if (l1!=nullptr && l2 == nullptr){
                temp = l1->val + c;
                if(temp >= 10){
                    temp -= 10;
                    c = 1;
                }
                else c = 0;
                sum->val=temp;
            }
            else if (l2!=nullptr && l1 == nullptr){
                temp = l2->val + c;
                if(temp >= 10){
                    temp -= 10;
                    c = 1;
                }
                else c = 0;
                sum->val=temp;
            }
            else{
                if(c==1){
                    sum = new ListNode(1);
                }
                flag = false;
            }
            if(l1!=NULL){
                if(l1->next!=NULL) l1 = l1->next;
                else l1 = NULL;
            }
            
            if(l2!=NULL){
                if(l2->next!=NULL)l2 = l2->next;
                else l2 = NULL;
            }
        
            if (l1!=NULL||l2!=NULL||c==1) {
                sum->next = new ListNode(1);
                sum = sum->next;
            }
        }
        
        return sum_cal;
    }
};
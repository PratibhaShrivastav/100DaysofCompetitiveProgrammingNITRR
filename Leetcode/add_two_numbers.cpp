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
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL,*end=NULL,*temp=NULL;
        int carry =0;
        while(list1!=NULL && list2!=NULL){
            int sum = list1->val + list2->val +carry;
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
            else
                carry=0;
            temp = new ListNode(sum);
            if(head==NULL)
            {
                head = temp;
                end = temp;
            }
            else
            {
                end->next = temp;
                end = temp;
            }
            
            list1=list1->next;
            list2=list2->next;
        }
        if((list1==NULL && list2!=NULL) || (list1!=NULL && list2==NULL)){
            if(list2==NULL ){
                temp=list1;
                list1=list2;
                list2=temp;
            }
            end->next=list2;
            // list2->val = list2->val + carry;
            end=end->next;
                if(carry){
                    while(1){
                        if(end->val+carry>9){
                            end->val=0;
                            if(end->next==NULL)
                                break;
                            end=end->next;
                            carry=1;
                        }
                        else{
                            end->val+=carry;
                            carry=0;
                            break;
                        }
                    }
                    if(carry)
                        end->next=new ListNode(1);
                }
        }
        else{
            if(carry){
                end->next=new ListNode(1);
            }
        }
        return head;
    }
};
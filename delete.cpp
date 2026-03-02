//single linked list
//case 1
//when head and key value is given


if(!head) return NULL;
if(head->data==key){
    Node * temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* curr=head;
while(curr->next&&curr->next->data!=key){
    curr=curr->next;
}
if(curr->next)
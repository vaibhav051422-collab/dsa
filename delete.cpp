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
if(curr->next){
    Node*temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
}
return head;

//case 2
//delete a node when only a pointer to that node is given
void deleteNode(Node *node){
    Node* temp=node->next;
    node->data=temp->data;
    node->next=temp->next;
    delete temp;
}
//delete node at a given position
if(pos==1){
    Node *temp=head;
    head=head->next;
    delete temp;
    return head;
}
// if pos!=1
Node *curr=head;
for(int i=1;i<pos-1&&curr;i++){
    curr=curr->next;
}

    Node *temp=curr->next;
    curr->next=temp->next;
    delete temp;
    return head;
}

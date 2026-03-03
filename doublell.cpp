#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node*next1,Node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;


    }
};
Node *convertarr2Dll(vector<int>&arr){
    Node *head=new Node(arr[0]);
    Node *prev=head;
    for(int i=1;i<arr.size();i++){
        Node *temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;


}
void print(Node *head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    
}
}
Node *deleteHead(Node *head){
    if(head==NULL||head->next==nullptr){
        return NULL;
    }
    Node *temp=head;
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;


}
Node *deleteTail(Node *head){
    if(head==NULL||head->next==nullptr){
        return NULL;
    }
    Node * tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node * newtail=tail->back;
    newtail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
    
}
//delete kth node
Node *deleteKth(Node *head,int k){
    if(head==NULL){
        return NULL;

    }
    int cnt=0;
    Node *temp=head;
    while(temp!=NULL){
         cnt++;
    if(cnt==k) break;


    
   
    temp=temp->next;
}
Node * front=temp->next;
Node * prev=temp->back;
front->back=prev;
prev->next=front;
delete temp;
return head;
}
//pointer to a node is given and we have to delete that node
void deletenode(Node * temp){
    Node * front=temp->next;
    Node * prev=temp->back;
    front->back=prev;
    prev->next=front;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;

}
    
 
    
int main(){
    vector<int>arr={1,2,3,4,5};
    Node *head=convertarr2Dll(arr);
    print(head);
    return 0;
}
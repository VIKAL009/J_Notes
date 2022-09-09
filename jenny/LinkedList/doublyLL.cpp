#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
};
node* createnode(int x){
    node* newnode = new node();
    newnode->data=x;
    newnode->next=newnode->prev=NULL;
    return newnode;
}
node* tail=NULL;
void insertAtbeg(node* &head,int x){
    node* temp = createnode(x);
    if(head==NULL){
        head=tail=temp;
    }else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    
}
void insertAfter(node* &head,int x,int pos){
    int i=1;
    node* temp = head;
    node* newnode = createnode(x);
    if(pos==1){
        insertAtbeg(head,x);
    }else
    {
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
      newnode->next=temp->next;
      newnode->prev=temp;
      temp->next->prev=newnode;
      temp->next=newnode;
        
    }
    
}
void insertAtend(node* &head,int x){
    node* newnode = createnode(x);
    if(head==NULL){
        insertAtbeg(head,x);
    }else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    
}
void deleteAtend(node* &head){
     if(head==NULL){
        cout<<"List is Empty:";
    }else
    {
        node* temp =tail;
        tail=tail->prev;
        tail->next=NULL;
        delete temp;
    }
    
}
void deleteAtbeg(node* &head){
    if(head==NULL){
        cout<<"List is Empty:";
    }else 
    {
        node* temp=head;
        head=temp->next;
        head->prev=NULL;
        delete temp;
    }
    
}
void deleteAfter(node* &head,int pos){
    int i=1;
    node * temp =head;
      if(head==NULL){
        cout<<"List is Empty:";
    }else if(pos==1){
        deleteAtbeg(head);
    }
    else
    {
        while (i<pos)
        {
            i++;
            temp = temp->next;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
        
    }
    
}
void print(node* head){

    while (head!=NULL)
    { 
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
    
}
node* reverse(node* head){
    node* temp,*next;
    temp = head;
    while (temp!=0)
    {
        next = temp->next;
        temp->next=temp->prev;
        temp->prev=next;
        temp=next;
    }
    temp=tail;
    tail=head;
    head=temp;
    return head;

}
int main(){
  node* head=NULL;
  insertAtbeg(head,10);
  insertAtbeg(head,20);
  insertAtbeg(head,30);
  insertAtbeg(head,40);
//   insertAfter(head,50,2);
//   insertAfter(head,60,1);
//   insertAfter(head,100,4);
//   insertAtend(head,500);
//   insertAtend(head,1000);
// deleteAtbeg(head);
// deleteAtbeg(head);
// deleteAtend(head);
// deleteAtend(head);
// deleteAtend(head);
// deleteAtend(head);
// deleteAfter(head,3);
// deleteAfter(head,1);
// deleteAfter(head,2);
  print(head);
  head=reverse(head);
  cout<<"\n";
  print(head);
//   cout<<tail->data;
}
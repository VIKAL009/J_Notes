#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* createnode(int x){
    node* newnode = new node();
    newnode->data=x;
    newnode->next=NULL;
    return newnode;
}
void insertAtfirst(node* &tail,int x){
    node* temp = createnode(x);
    if(tail==NULL){
        tail=temp;
        tail->next=tail;

    }else{
        temp->next=tail->next;
        tail->next=temp;
    }
}
void insertAtend(node* &tail,int x){
   node *temp=createnode(x);
    if(tail==NULL){
        tail=temp;
        tail->next=tail;

    }else{
     temp->next=tail->next;
     tail->next=temp;
     tail=temp;
    }
}
void insertAfter(node* &tail,int x,int pos){
    int i=1;
     node *temp=createnode(x);
     node * temp2=tail->next;
    if(tail==NULL){
        tail=temp;
        tail->next=tail;
       
    }else if(pos==1){
        insertAtfirst(tail,x);
    }else
    {
        while (i<pos-1)
        {
            temp2=temp2->next;
            i++;
        }
        temp->next=temp2->next;
        temp2->next=temp;
    }
    
}
void DeleteFirst(node* &tail){
    if(tail==NULL){
        cout<<"List is Empty:";
    }else
    {
    node* temp=tail->next;
        tail->next=temp->next;
        delete temp;
    }
    
}
void DeleteLast(node* &tail){
     if(tail==NULL){
        cout<<"List is Empty:";
    }else{
        node* temp=tail->next,*del;
        while (temp->next!=tail)
        {
            temp=temp->next;
        }
        del=tail;
        temp->next=tail->next;
        tail=temp;
        delete del;
        
    }
}
void DleteAfter(node* &tail,int pos){
      int i=1;
      if(tail==NULL){
          cout<<"List is Empty:";
      }else if(pos==1){
          DeleteFirst(tail);
      }
      else
      {
          node* temp=tail->next,*temp2;
          while (i<pos-1)
          {
              i++;
              temp=temp->next;
          }
       temp2=temp->next;
          if(temp2=tail){
              tail=temp;
             temp->next=temp2->next;
             delete temp2;
          }
       temp->next=temp2->next;
       delete temp2;
          
      }
      
}
void print(node* tail){
    node* temp = tail->next;
   do
   {
     cout<<temp->data<<"->";
     temp=temp->next;
   } while (temp!=tail->next);
   cout<<"NULL";
}
int main(){
    node* tail=NULL;
    insertAtfirst(tail,10);
    insertAtfirst(tail,20);
    insertAtfirst(tail,30);
    insertAtfirst(tail,40);
    insertAtfirst(tail,50);
    insertAtfirst(tail,60);
    // DeleteFirst(tail);
    // DeleteLast(tail);
    DleteAfter(tail,2);
    // DeleteLast(tail);
    // DeleteLast(tail);
    // DeleteFirst(tail);
    // DeleteFirst(tail);
    // DeleteFirst(tail);
    // DeleteLast(tail);
    // DeleteLast(tail);
    // insertAtend(tail,25);
    // insertAfter(tail,22,3);
    print(tail);
    cout<<"\n"<<tail->next->data;
}
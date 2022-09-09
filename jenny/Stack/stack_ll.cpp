#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
class STACK{
    public:
   node* top=NULL;
    node* createnode(int x){
        node* newnode = new node();
        newnode->data=x;
        return newnode;
    }
   void push(){
       int x;
       cout<<"enter element to be entered:";
       cin>>x;
      node* temp = createnode(x);
      if(top==NULL){
         top=temp;
      }else
      {
          temp->next=top;
          top=temp;
      } 
   }
   void pop(){
       if(top==NULL){
           cout<<"Stack is empty:";
       }else
       {
           node* temp=top;
           int item= temp->data;
           top=top->next;
           cout<<"poped item is "<<item;
           delete temp;
       }
       
   }
   void peek(){
       cout<<top->data;
   }
   void print(){
       node* temp=top;
       if(temp==NULL){
           cout<<"Stack is empty:";
       }
       while (temp!=0)
       {
           cout<<temp->data<<"->";
           temp=temp->next;
       }cout<<"NULL";
       
   }
   void Isempty(){
       if(top==NULL){
           cout<<true;
       }else
       {
           cout<<false;
       }
       
   }
};
int main(){
    node* temp =NULL;
    cout<<temp<<"\n";
    cout<<true<<"\n";
    cout<<false<<"\n";
    cout<<0<<"\n";
   STACK s;
    int choice;
    cout << "Enter a choice :\n";
    cout << "1. Add an element :\n";
    cout << "2. Delete an element :\n";
    cout << "3. Peek or Top :\n";
    cout << "4. Print List :\n";
    cout << "5. Is empty :\n";
    cout << "0. Exit :\n";
    do
    {
        cin >> choice;
        switch (choice)
        {
            case 1:
               s.push();
            break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.print();
                break;
            case 5:
                s.Isempty();
                break;
            case 0:
                // exit;
                break;
            default:
            cout<<"Invalid choice:";
                break;
            }
        }
        while (choice);
}
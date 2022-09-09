#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
class Queue{
    node* front =0;
    node* rare =0;
    public:
    node* createnode(int x){
       node* temp = new node;
       temp->data=x;
       temp->next=NULL;
       return temp;
    }
    void Enqueue(){
        int x;
        cout<<"Enter the element to be entered : ";
        cin>>x;
        node* newnode = createnode(x);
        if(front==0&&rare==NULL){
            newnode->next=newnode;
            front=rare=newnode;
        }else
        {
            newnode->next=front;
            front=newnode;
            rare->next=front;
        }  
    }
    void Dequeue(){
        node* temp=front;
        if(front==NULL){
            cout<<"Queue is empty : ";
        }
        else if(front==rare&&front!=NULL){
            front=rare=NULL;
        }else
        {
            front=front->next;
            rare->next=front;
        }
        delete temp;
    }
    void print(){
        node* temp =front;
        do
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
        }  
        while (temp!=front);
        cout<<"\n"<<rare->next->data;
    }
    void Front(){
        cout<<front->data;
    }
    void Rare(){
        cout<<rare->data;
    }
};
int main(){
         Queue s;
     int choice;
    cout << "Enter a choice :\n";
    cout << "1. Enqueue an element :\n";
    cout << "2. Dequeue an element :\n";
    cout << "3. Peek or Front :\n";
    cout << "4. rare :\n";
    cout << "5. Print List :\n";
    cout << "0. Exit :\n";
    do
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
               s.Enqueue();
            break;
            case 2:
                s.Dequeue();
                break;
            case 3:
                s.Front();
                break;
            case 4:
                s.Rare();
                break;
            case 5:
                s.print();
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
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void createnode(node** root,int x){
    node* newnode = new node();
    newnode->data=x;
    newnode->next=NULL;
    if(*root==NULL){
        *root=newnode;
    }else
    {
        node* temp=*root;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        
    }
    
}
node * createnode(int x){
    node* newnode = new node();
    newnode->data=x;
    newnode->next = NULL;
    return newnode;
}
void print(node* root){
    while (root!=NULL)
    {
        cout<<root->data<<"->";
        root=root->next;
    }
    cout<<"NULL";
    
}
void insertAtend(node** root,int x){
    node* newnode = createnode(x);
    node* temp=*root;
    if(*root==NULL){
        *root= newnode;
    }else
    {
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        
    }
    
}
void insertAtbeg(node** root,int x){
     node *newnode =createnode(x);
     if(*root==NULL){
         *root=newnode;
     }else
     {
         newnode->next=*root;
         *root=newnode;
     }
     


}
void insertAfter(node** root,int x,int pos){
    int i=1;
    node* temp=*root;
    node* newnode = createnode(x);
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    
}
void deletefrombeg(node** root){
    if(*root==NULL){
        cout<<"List is Empty";
    }else
    {
        node* temp;
        temp=*root;
        *root=(*root)->next;
        delete temp;

    }
    
}
void deletefromend(node** root){
     if(*root==NULL){
        cout<<"List is Empty";
    }else{
        node* temp = *root;
        node* del = *root;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
            del=temp->next;
            temp->next=NULL;
            delete del;
        
    }
}
void deleteAfter(node** root,int pos){
    int i=1;
    node* temp=*root;
    node* del;
    if(*root==NULL){
        cout<<"List is empty";
    }else
    {
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        del=temp->next;
        temp->next=temp->next->next;
        delete del;   
    }
    
}
node* reverse(node* root){
    node* prev;
    node* next;
    node* cur;
    cur=root;
    prev=NULL;
    while (cur!=NULL)
    {
         next=cur->next;
         cur->next=prev;
         prev=cur;
         cur=next;
    }
    return prev;
}
void length(node* root){
    int c=0;
    while (root!=0)
    {
        root=root->next;
        c++;
    }
    cout<<c;
    
}
int main(){
   node* root=NULL;
   createnode(&root,10);
   createnode(&root,20);
   createnode(&root,30);
   createnode(&root,40);
   createnode(&root,50);
   print(root);
   cout<<"\n";
//    insertAtend(&root,100);
//    insertAtend(&root,200);
//    insertAtend(&root,300);
//    insertAtbeg(&root,22);
//    insertAtbeg(&root,11);
//    insertAfter(&root,55,2);  
//    insertAfter(&root,9,3);  
//    insertAfter(&root,7,1);  
//    deletefrombeg(&root);
//    deletefrombeg(&root);
//    deletefrombeg(&root);
//    deletefromend(&root);
//    deletefromend(&root);
    //  deleteAfter(&root,5);
    length(root);
    cout<<"\n";
    root = reverse(root);
   print(root);
}
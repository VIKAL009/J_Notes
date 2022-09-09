#include<bits/stdc++.h>
using namespace std;
class node{
    public:
      int data;
      node* left,*right;
};
node* createnode(int x){
    node* temp = new node();
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp;
}
void insert(node** root,int x){
    node* temp = createnode(x);
    if(*root==NULL){
          *root=temp;
    }else if(x<=(*root)->data)
    {
        insert(&(*root)->left,x);
    }else
    {
        insert(&(*root)->right,x);
    }    
}
void preorder(node** root){
    if(*root!=NULL)
    {
        cout<<(*root)->data<<"  ";
        preorder(&(*root)->left);
        preorder(&(*root)->right);
    }
    
}


int main(){
     node* root=NULL;
     insert(&root,1);
     insert(&root,2);
     insert(&root,4);
     insert(&root,5);
     insert(&root,3);
     preorder(&root);
}
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
}
node* InsertNode(node* root,int x){
    node* temp = createnode(x);
    if(root==NULL){
        root=temp;
    }else if(x<=root->data)
    {
        root->left=InsertNode(root->left,x);
    }else
    {
        root->right=InsertNode(root->right,x);
    }
    
   return root; 
}
bool search(node* root,int x){
    if(root==NULL){
        return false;
    }else if(root->data==x)
    {
        return true;
    }else if(x<root->data)
    {
        return search(root->left,x);
    }else
    {
        return search(root->right,x);
    }  
}
int main(){

}
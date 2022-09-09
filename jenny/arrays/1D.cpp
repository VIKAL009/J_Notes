#include<bits/stdc++.h>
using namespace std;
int * insert(int arr[],int n,int x,int y){
     for(int i=n-1;i>=x-1;i--){
           arr[i+1]=arr[i];
     }
     arr[x-1]=y;
     return arr;
} 
int * Delete(int *arr,int n,int pos){
     for(int i=pos-1;i<n-1;i++){
          arr[i]=arr[i+1];
     }
     return arr;
}
int main(){
    int n,pos,key;
    int * k;
    cin>>n>>pos>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//    k= insert(arr,n,pos,key);
k = Delete(arr,n,pos);
   for(int i=0;i<4;i++){
       cout<<k[i]<<" ";
   }

}
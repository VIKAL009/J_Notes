#include<bits/stdc++.h>
using namespace std;
class Queue{
   int front=-1;
   int rare=-1;
   int arr[5];
   public:
   void enqueue(){
       int x;
       cout<<"enter the element to be entered: ";
       cin>>x;
       if((rare==-1)&&(front==-1)){
           rare=front=0;
           arr[rare]=x;
       }
       else if((rare+1)%5!=front){
           arr[++rare]=x;
       }else
       {
           cout<<"Queue is Full:";
       }  
   }
   void Dequeue(){
       if((rare==-1)&&(front==-1)){
           cout<<"Queue is empty:";
       }else if(rare==front)
       {
          int item=arr[front];
           cout<<item<<" is poped:";
           rare=front=-1;
       }else
       {
          int item=arr[front];
          front=(front+1)%5;
           cout<<item<<" is poped:";  
       }
   }
   void print(){
       int i=front;
    //    for(int i=(front);i!=(rare+1)%5;i=(i+1)%5){
    //         cout<<arr[i]<<"  ";
    //    }
    do
    {
        cout<<arr[i]<<"  ";
        i=(i+1)%5;
    }
    while (i!=(rare+1)%5);
    
   }
   void peek(){
       cout<<arr[front];
   }
   void Rare(){
       cout<<arr[rare];
   }
   void IsFull(){
    if((rare==-1)&&(front==-1)){
           cout<<false;
       }else if((rare+1)%5==front)
       {
           cout<<true;
       }
       else
       {
           cout<<false;
           
       }
       
       
   }
   void Isempty(){
       if((rare==-1)&&(front==-1)){
           cout<<true;
       }else
       {
           cout<<false;
       }
       
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
    cout << "6. Is empty :\n";
    cout << "7. Is Full :\n";
    cout << "0. Exit :\n";
    do
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
               s.enqueue();
            break;
            case 2:
                s.Dequeue();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.Rare();
                break;
            case 5:
                s.print();
                break;
            case 6:
                s.Isempty();
                break;
            case 7:
                s.IsFull();
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
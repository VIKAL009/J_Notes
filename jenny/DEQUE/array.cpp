#include<bits/stdc++.h>
using namespace std;
class Deque{
  int front =-1,rare=-1;
  int arr[5];
  public:
  void Push_Front(){
      int x;
      cout<<"Enter number to be entered : ";
      cin>>x;
      if(rare==-1&&front==-1){
          rare=front=0;
          arr[front]=x;
      }else if(front!=0){
          arr[--front]=x;
      }else
      {
          cout<<"Not empty from front :";
      }  
  }
  void push_rare(){
       int x;
      cout<<"Enter number to be entered : ";
      cin>>x;
      if(rare==-1&&front==-1){
          rare=front=0;
          arr[front]=x;
      }else if(rare<4)
      {
          arr[++rare]=x;
      }else
      {
          cout<<"Not empty from rare: ";
      } 
  }
  void pop_front(){
      if(rare==-1&&front==-1){
          cout<<"DeQue is empty:";
      }else if(rare==front&&front!=0)
      {
          rare=front=0;
      }else
      {
          int item=arr[front++];
           cout<<item <<" is poped ";
      } 
  }
  void pop_rare(){
       if(rare==-1&&front==-1){
          cout<<"DeQue is empty:";
      }else if(rare==front&&front!=0)
      {
          rare=front=0;
      }
  else
  {
     int item = arr[rare--];
     cout<<item <<" is poped ";
  }
  }
  void print(){
      for(int i=front;i<=rare;i++){
          cout<<arr[i]<<"  ";
      }
  }
};
int main(){
         Deque s;
     int choice;
    cout << "Enter a choice :\n";
    cout << "1. push front an element :\n";
    cout << "2. push rare an element :\n";
    cout << "3. Pop front Front :\n";
    cout << "4. pop  rare :\n";
    cout << "5. Print List :\n";
    cout << "0. Exit :\n";
    do
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
               s.Push_Front();
            break;
            case 2:
                s.push_rare();
                break;
            case 3:
                s.pop_front();
                break;
            case 4:
                s.pop_rare();
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
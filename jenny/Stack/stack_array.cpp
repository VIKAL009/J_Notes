#include <bits/stdc++.h>
using namespace std;
class STACK
{
public:
    int arr[5];
    int top = -1;
    void push(){
        int x;
        cout<<"Enter number to be entered:";
        cin>>x;
        arr[++top]=x;
    }
    void pop(){
        int item=arr[top];
        cout<<item<<" is poped :";
        top--;
    }
    void peek(){
        cout<<arr[top];
    }
    void print(){
       for(int i=0;i<=top;i++){
           cout<<arr[i]<<" ";
       }
    }
    void Isempty(){
        if(top==-1){
            cout<<true;
        }else
        {
            cout<<false;
        }
        
    }
    void IsFull(){
        if(top==4){
            cout<<true;
        }else
        {
            cout<<false;
        }
        
    }

};
int main()
{
    STACK s;
    int choice;
    cout << "Enter a choice :\n";
    cout << "1. Add an element :\n";
    cout << "2. Delete an element :\n";
    cout << "3. Peek or Top :\n";
    cout << "4. Print List :\n";
    cout << "5. Is empty :\n";
    cout << "6. Is Full :\n";
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
            case 6:
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
//Stack implimetation using Array in C++
#include<iostream>
using namespace std;
#define n 1000
class Stack
{
    int top;
    int num[n];
    public:
    Stack();
    void Push();
    void Pop();
    void Peek();
    void Show(); 
};
Stack::Stack()
{
    top=-1;
}
void Stack::Push(){
    if(top>=n-1){
        cout<<"\nStack is overflow...\n";
    }
    else{
        int a;
        cout<<"\nEnter value to Push...\n";
        cin>>a;
        top++;
        num[top]=a;
    }
}
void Stack::Pop()
{
    if(top<=-1){
        cout<<"\nStack is empty...\n";
    }
    else{
        cout<<"\nThe Popped element is "<<num[top]<<endl;
        top--;
    }
}
void Stack::Peek()
{
    if(top<=-1){
        cout<<"\nStack is empty...\n";
    }
    else{
        cout<<"\nThe Peek element is "<<num[top]<<endl;
    }
}
void Stack::Show()
{
    if(top>=0){
        cout<<"\nStack elements are..."<<endl;
        for(int i=top;i>=0;i--){
            cout<<num[i]<<"\t";
            cout<<endl;
        }
    }
    else
        cout<<"\nStack is empty...";
}
int main(){
    int ch;
    Stack ob;
    do
    {
        cout<<"----------------------------------------------------";
        cout<<"\nPRESS 1.Push\t2.Pop\t3.Peek\t4.Show\t5.Exit"<<endl;
        cout<<"\nEnter your choice.... ";
        cin>>ch;
    
    switch(ch){
        case 1:{
            ob.Push();
            break;
        }
        case 2:{
            ob.Pop();
            break;
        }
        case 3:{
            ob.Peek();
            break;
        }
        case 4:{
            ob.Show();
            break;
        }
        case 5:break;

        default:cout<<"\nINVALID CHOICE....";
        break;
    }
    }while(ch<5);

    return 0;
}
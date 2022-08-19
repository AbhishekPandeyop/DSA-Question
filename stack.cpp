#include<iostream>
#include<string>
using namespace std;

class Stack{
   private:
   int top;
   int arr[5];

  public:
  Stack(){                             // constructure
     top ==-1;
     for(int i=0;i<5;i++){
      arr[i]=0;
     }
  }
  bool isEmpty()
  {
   if(top==-1){
      return true;
   
   }
   else {
      return false;
   }
  }
  bool isFull(){
   if (top==4){
      return true;

   }
   else{
      return false;
   }

  }
  void push(int val){
    if(isFull()){
      cout<<"Stack overflow\n";
    }
    else {
      top++;
      arr[top]=val;
    }
  }
  int pop(){
   if(isEmpty())
   {
      cout<<"Stack underflow\n";
      return 0;
   }
   else{
    int popvalue = arr[top];
    arr[top]=0;
    top--;
    return popvalue;
   }
  }
  int count(){
   return (top+1);
  }

  int peek(int pos){
   if(isEmpty())
   {
      cout<<"Stack underflow\n";
      return 0;
   }
   else{
      return (pos);
   }

  }
  void change(int pos,int val){
   arr[pos]=val;
   cout<<"change the position\n"<<pos<<endl;
  }
  int display(){
   cout<<"values are in stack as shown below\n";
   for(int i=4;i<5;i--){
     cout<< arr[i]<<endl;
   }
  }
};




int main(){
   Stack s;
  int choice,position,value;
  do{ cout<<"choose any option\n";
  cout<<"1.push()\n";
  cout<<"2.pop()\n";
  cout<<"3.display()\n";
  cout<<"4.change()\n";
  cout<<"5.peek()\n";
  cout<<"6.isEmpty()\n";
  cout<<"7.isFull()\n";
  cout<<"9.clear screan\n";
cin>>choice;
switch(choice){
case1:
  
};

  }while(choice!=0);


   return 0;
}
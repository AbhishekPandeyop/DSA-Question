// Q1 Function over loading using class;
// Q2 call by reference using class;
// Q3 inline function using class;
#include<iostream>
using namespace std;
int swap(int &,int &);
int swap(int &,int &,int &);
class function{
 private :
 int x,y,z;
                                                
 public:
 void sum();
 int swap(int &x,int &y){
    return(x=y,y=x);
 }
 int swap(int&x,int&y,int&z){
   return(x=y,y=z,z=x);
 }  
};
inline void function::sum()
{
  z = x + y;
  cout<<"z is \n"<<z;
}

int main (){
    function v;
   int a,b,c;
   cout<<"Enter the value of A and B\n";
   cin >> a>>b;
   cout<<v.swap(a,b)<<endl;
   cout<<"Enter the value of A,B and C"<<endl;
   cin>>a>>b>>c;
   cout<<v.swap(a,b,c)<<endl;
    v.sum();
    return 0;
}
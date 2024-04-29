#include <iostream>
using namespace std;
int add(int,int);
int dif(int,int);
int multi(int,int);
int quo(int,int);
int rem(int,int);
int main(){
  int option;
  int a,b,s,d,m,q,r;
  cout<<"******************simplecalculator*************"<<endl;
  cout<<"1. press number 1 to add "<<endl;
  cout<<"2.press number 2 to subtract"<<endl;
  cout<<"3. press number 3 to multiply"<<endl;
  cout<<"4. press number 4 to divide"<<endl;
  cout<<"5.press number 5 to find remainder "<<endl;
  cout<<"0. press 0 to exit"<<endl;
  cout<<"****************************************"<<endl;
while(option!=0){
cout <<"enter your option"<<endl;
cin>>option;
switch(option){
  case 1:{ cout<<"enter the first number"<<endl;
  cin>>a;
  cout<<"enter the second number"<<endl;
  cin>>b;
  s = add(a,b);
  cout<<s<<endl;
  }
  break;
  case 2:{ cout<<"enter the first number"<<endl;
   cin>>a;
   cout<<"enter the second number"<<endl;
   cin>>b;
   d = dif(a,b);
   cout<<d<<endl;
   }
   break;
   case 3:{ cout<<"enter the first number"<<endl;
   cin>>a;
   cout<<"enter the second number"<<endl;
   cin>>b;
   m = multi(a,b);
   cout<<m<<endl;
   }
   break;
   case 4:{ cout<<"enter the first number"<<endl;
   cin>>a;
   cout<<"enter the second number"<<endl;
   cin>>b;
   q= quo(a,b);
   cout<<q<<endl;
   }
   break;
   case 5:{ cout<<"enter the first number"<<endl;
   cin>>a;
   cout<<"enter the second number"<<endl;
   cin>>b;
   r = rem(a,b);
   cout<<r<<endl;
   }
   break;
   default: cout<<"wrong option"<<endl;
   }
}
}
int add(int a,int b){
int sum= a+b;
return sum;
}
int dif(int a,int b){
int difference=a-b;
return difference;
}
int multi(int a,int b){
int multi = a*b;
return multi;
}
int quo(int a,int b){
int div = a/b ;
return div;
}
int rem(int a,int b){
int remainder = a%b;
return remainder;
}
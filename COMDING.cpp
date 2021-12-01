#include <iostream>
 using namespace std;

int main ()
{  
   int a,b,temp;

   cout<<"enter two numbers";

   cin>>a;
   cin>>b;

   cout<<"before swapping : a=" <<a<<"and b= "<<b;

   temp=a;
   a=b;
   b=temp;

   cout<<"\n after swapping" <<endl;
   cout<<"a= "<<a<<" b=" << b <<endl;

   return 0;

}
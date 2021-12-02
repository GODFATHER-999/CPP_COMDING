#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter a number\n";
    cin>>a;
    b=a%2;
    if(b==0)
    {
        cout<<a<<" is an even number";
    }
    else
    {
        cout<<a<<" is a odd number";
    }

    return 0;

}
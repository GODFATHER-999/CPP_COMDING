#include <iostream>

using namespace std;

int main()
{   
    char input;
    bool UPPERCASE,LOWERCASE;
    cout<<"Enter a letter : ";
    cin>>input;
     UPPERCASE= (input=='A' ||input=='E' ||input=='I' ||input=='O' ||input=='U');
     LOWERCASE= (input=='a' ||input=='e' ||input=='i' ||input=='o' ||input=='u');    
    if(input=UPPERCASE||LOWERCASE)
    {
        cout<<"It's a vovel !";
    }
    else
    {
        cout<<"It's not a vovel!";
    }
}
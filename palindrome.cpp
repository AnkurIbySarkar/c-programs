#include<iostream>
using namespace std;
int main()
{
    int n,digit,rev=0,num;
    cout<<"enter the number to be checked"<<endl;
    cin>>num;
    n=num;
    while(num!=0)
    {
        digit = num%10;
        rev = (rev*10)+ digit;
        num = num/10;
    }
    if(n==rev)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
    
}
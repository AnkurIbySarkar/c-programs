/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
        int a{0},b{0};
        char n,repeat;
        do
        {
        cout<<"enter the values of a and b"<<endl;
        cin>>a>>b;
        cin>>n;
        switch(n)
        {
            case'+':
                cout<<a+b<<endl;
                break;
            case'-':
                cout<<a-b<<endl;
                break;
            case'*':
                cout<<a*b<<endl;
                break;
            case'/':
                cout<<a/b<<endl;
                break;
            default:
                cout<<"invalid input";
        }
        cout<<"enter y or Y"<<endl;
        cin>>repeat;
        }
        while(repeat=='y'||repeat=='Y');
    return 0;
}

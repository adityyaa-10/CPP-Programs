//If-else vs Switch case

/*Write a program to give "hello" as output in 4 different languages using
if else and switch case*/

//1. using if else
/*#include <iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter any character"<<endl;
    cin>>button;
    if(button=='a'){
        cout<<"Hello"<<endl;
    }
    else if(button=='b'){
        cout<<"Namaste"<<endl;
    }
    else if(button=='c'){
        cout<<"Hola"<<endl;
    }
    else if(button=='d'){
        cout<<"Ciao"<<endl;
    } 
    else{
        cout<<"Error Statement"<<endl;
    }
    return 0;
}*/

//2. using switch case
/*#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter any character"<<endl;
    cin>>button;
    switch(button)
    {
        case 'a':
        cout<<"Hello"<<endl;
        break;
        case 'b':
        cout<<"Namaste"<<endl;
        break;
        case 'c':
        cout<<"Hola"<<endl;
        break;
        case 'd':
        cout<<"Ciao"<<endl;
        break;
        default:
        cout<<"Error Statement"<<endl;
    }
    return 0;
    
}*/

//WAP to implement a simple calculator using switch case

/*#include <iostream>
using namespace std;
int main()
{
    char operation;
    int a,b;
    cout<<"Enter two integers"<<endl;
    cin>>a>>b;
    cout<<"Enter operation to be performed"<<endl;
    cin>>operation;
    switch(operation)
    {
        case '+':
        cout<<a<<"+"<<b<<"= "<<a+b<<endl;
        break;
        case '-':
        cout<<a<<"-"<<b<<"= "<<a-b<<endl;
        break;
        case '*':
        cout<<a<<"*"<<b<<"= "<<a*b<<endl;
        break;
        case '/':
        cout<<a<<"/"<<b<<"= "<<a/b<<endl;
        break;
        default:
        cout<<"Error Statement"<<endl;
        break;
    }
    return 0;
}*/






















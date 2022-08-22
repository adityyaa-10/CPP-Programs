//First Progarm in c++

/*#include<iostream>
using namespace std;
int main(){
    cout<<"Hello World\nHello World";
    return 0;
}*/

//WAP in C++ to take inputs from user and give their sum as output 
/*#include <iostream>
using namespace std;
int main()
{
    int a,b,sum;
    cout<<"Enter the value of a\n";
    cin>>a;
    cout<<"Enter the value of b\n";
    cin>>b;
    sum = a+b;
    cout<<"Sum of a and b is equal to ";
    cout<<sum;
}*/

//Agar hum \n ki jagah <<endl use kre to bhi same baat hi hai, << isko insertion operator bhi bolte hai 
//<<endl ka matlab hota he, insertion end line. isey lagane se wo line whi end hojati he, aur baki ka kam new line se hta h

//Introduction to sizeof function

/*#include <iostream>
using namespace std;
int main()
{
    int a; float b; char c; bool d;
    cout<<"Size of int "<<sizeof(a)<<endl;        //Sizeof function hume byte size required ke bare me batata hai  
    cout<<"Size of float "<<sizeof(b)<<endl;     
    cout<<"Size of char "<<sizeof(c)<<endl;
    cout<<"Size of bool "<<sizeof(d)<<endl;
    return 0;
}*/

//if else function in c++
//Lets's understand this concept with a basic example source code

/*#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks obtained by the student \n";
    cin>>marks;
    if(marks>33)                     //Stating if condition 
    {
        if(marks>75)                // Jab ek if block ke andar dusra if else block dal de to usko nested if else bolte.
        {
            cout<<"Distinction";
        }
        else                       //This is a program based on nested if else 
        {
            cout<<"Pass";
        }
    }
    else                        //We don't have to state else condition here, because of only two possibilities
    {
        cout<<"Fail";
    }
    return 0;
}    */

//WAP in C++ to find greates among 3 numbers using nested if else block

/*#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Enter the value of c"<<endl;
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is greatest"<<endl;
        }
        else{
            cout<<c<<" is greatest"<<endl;
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            cout<<b<<" is greatest"<<endl;
        }
        else
        {
            cout<<c<<" is greatest"<<endl;
        }
    }
    return 0;
}*/

//WAP in C++ to check whether the number is even or odd

/*#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    
    if(a%2==0){                         //% ko modulo operator bolte, it is used to check the remainder
        cout<<a<<" is even";       //a%2 ka matlab jab a ko 2 se divide krenge to kya remainder bachega
    }                            // == is equality operator, = is assignment operator, jese c mein tha.
    
    
    else
    {
        cout<<a<<" is odd";
    }
    return 0;
    
}*/
    
    
    












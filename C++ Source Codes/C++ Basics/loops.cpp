//Loops in C++
//Loops in programming language are used to avoid writing of repetitive code.



/* 1. For Loops
basic Syntax - for(initialisation ; condition ; update)*/


//Basic Program using for loop to find sum of n numbers
/*#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}



/* 2. While Loops
basic syntax - while(condition is true)*/

//Basic program using while loop
/*#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the value of n "<<endl;   //This loop runs as long as the entered number is positive
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}*/




/* 3. Do while Loops
basic syntax -
do
{
    // body
}while(condition)

do while loop pehle ek bar statement execute krega, uske baad condition check krega
and then it will act like a while loop only.

do while loop mein khaas baat ye hoti hai that even if the condition is not satisfied, it executes the task once.*/

//Basic program to understand do while loops in c++

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n "<<endl;  //This program will give output hello world as long as positive
    cin>>n;                                      numbers are being entered, the program will be exited 
    do{                                           when a negative number is entered.
        cout<<"Hello World"<<endl; 
        cin>>n;
    } while(n>0) ;
    return 0;
}*/
















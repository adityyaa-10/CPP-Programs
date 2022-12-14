/*Functions in C++

WAP to calculate a raised to the power b in c++ using Functions*/

/*#include <iostream>
using namespace std;
int power(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int num1,num2;
    cout<<"Enter two numbers "<<endl;
    cin>>num1>>num2;
    int answer= power(num1,num2);
    cout<<num1<<" raised to the power "<<num2<<" is equal to "<<answer<<endl;
    return 0;
}

Write a program in c++ to check whether a number is even or odd using Functions

#include <iostream>
using namespace std;
bool evenodd(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    if(evenodd(num)){
        cout<<num<<" is even"<<endl;
    }
    else{
        cout<<num<<" is odd"<<endl;
    }
    return 0;
}



WAP to calculate nCr of a combination in C++ using Functions

                nCr = n!/r!*(n-r)!

#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int numerator = factorial(n);
    int denominator = factorial(r)*factorial(n-r);
    int ans = numerator/denominator;
    return ans;
}

int main(){
    int n,r;
    cout<<"Enter values of n and r "<<endl;
    cin>>n>>r;
    int combination = nCr(n,r);
    cout<<"nCr = "<<combination;
    return 0;
}


WAP IN C++ to check whether the number is prime or not using Functions

#include <iostream>
using namespace std;
bool primenumber(int n)
{
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
        
    }
    if(n==i){
        return 1;
    }
    else {return 0;
        }
}

int main(){
    int num;
    cout<<"Enter any number "<<endl;
    cin>>num;
    if(primenumber(num)){
        cout<<num<<" is prime";
    }
    else {
        cout<<num<<" is not prime";
    }
    return 0;
}


WAP in C++ to give nth term of a fibonacci series using Functions

#include <iostream>
using namespace std;

int fib(int n)
{   
    int a=0,b=1;
    int c;
    for(int i=3; i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    
    return b;
}

int main(){
    int n;
    cout<<"Which term of fibonacci series is to be printed ";
    cin>>n;
    int ans = fib(n);
    cout<<ans<<endl;
}*/




/*WAP in C++ to find the nth term of an AP using Functions

                AP =>  3*n + 7;

#include  <iostream>
using namespace std;
int AP(int n){
    int termn= 3*n +7;
    return termn;
}

int main()
{
    int n;
    cout<<"Enter the nth term of an AP: ";
    cin>>n;
    int ans = AP(n);
    cout<<ans<<endl;
    return 0;
}

Function Prototype
In C++, the code of function declaration should be before the function call. 
However, if we want to define a function after the function call, we need to
 use the function prototype. For example,

 // function prototype
void add(int, int);

int main() {
    // calling the function before declaration.
    add(5, 3);
    return 0;
}

// function definition
void add(int a, int b) {
    cout << (a + b);
}

The syntax of a function prototype is:
returnType functionName(dataType1, dataType2, ...);

Example Problem
// using function definition after main() function
// function prototype is declared before main()

#include <iostream>

using namespace std;

// function prototype
int add(int, int);

int main() {
    int sum;

    // calling the function and storing
    // the returned value in sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}

// function definition
int add(int a, int b) {
    return (a + b);
}

Program to Find the Square Root of a Number

#include <iostream>
#include <cmath>   //cmath header file contains sqrt() function
using namespace std;

int main() {
    double number, squareRoot;
    
    number = 25.0;

    // sqrt() is a library function to calculate the square root
    squareRoot = sqrt(number);

    cout << "Square root of " << number << " = " << squareRoot;

    return 0;
}*/
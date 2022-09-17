/*Break and continue Statement

Contiue Statement - It is used to skip to the next iteration of the loop
Break Statement - It is used to terminate the loop*/

//WAP to explain continue Statement

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    for(n=0;n<=30;n++)
    {
        if(n%2==0)
        {
            continue;  //continue Statement skips all the even iterations, because it is stated in if condition block
        }
        cout<<n<<endl;
    }
    return 0;
}*/

//WAP to explain break Statement

/*#include <iostream>
using namespace std;
int main ()
{
    int n=500;
    
    for(int i=0;i<=15;i++)
    {
        n = n - 50;
        if(n==0){
            break;              //It will terminate the top as soon as n becomes 0, it will not be followed till 15 iterations
        }
        cout<<i<<endl;
    }
    return 0;
}*/

//WAP to check whether the number is prime or not using break Statement

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if (n%i==0){
            cout<<n<<" is not a prime number"<<endl;
            break;            //jaise hi koi i number n ko divide krdega, for loop break ho jayega
        }
    }
    if(i==n)
    {
        cout<<n<<" is a prime number"<<endl;
    }
return 0;
    
}*/


//WAP to find all the prime numbers between any two numbers using break Statement

/*#include <iostream>
using namespace std;
int main()
{
    int i,n,a,b;
    cout<<"Enter starting number"<<endl;
    cin>>a;
    cout<<"Enter ending number "<<endl;
    cin>>b;
    for(n=a;n<=b;n++){
        for(i=2;i<n;i++)
        {
            if(n%i==0){
                break;
            }
        }
        if(n==i){
        cout<<n<<endl;
        }
    }
    return 0;
    
}*/
































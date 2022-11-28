// SWAP ALTERNATE PROBLEM 

//1. for even
// Input - [1,2,3,4,5,6]
// Output - [2,1,4,3,6,5]

//2. for odd
// Input - [5,9,8,7,2]
// Output - [9,5,7,8,2]



#include <iostream>
using namespace std;

int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {5,9,8,7,2};
    int temp=0;
    
    for(int i=0; i<6; i+=2){
        if(i+1<6)
            {
            temp = even[i+1];
            even[i+1]=even[i];
            even[i]=temp;
            }
        }
    
    cout<<"The alternately swapped array  for even indices is :"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<even[i]<<"    ";
        
    }
    cout<<endl;
    
    for(int i=0; i<5; i+=2){
        if(i+1<5){
    temp = odd[i+1];
    odd[i+1]=odd[i];
    odd[i]=temp;
        }
    }
    
    cout<<"The alternately swapped array  for odd indices is :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<odd[i]<<"     ";
        
    }
    
    return 0;
}

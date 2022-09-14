/*To merge two arrays and find their union
#include <iostream>
using namespace std;
int main(){
    int a[5]={10,20,30,40,50};  //initialising 1st array
    int b[5]={40,50,60};       //initialising 2nd array
    int i,j,flag;
    
    //Print the elements of array a
    
    for(i=0;i<5;i++){
        cout<<a[i]<<"   ";
    }
    
    //print the elements of array b which are not present in array a
    
     for(j=0;j<3;j++)
  {
    flag=0;                 //Comparing if element of array a and array b are equal
    for(i=0;i<5;i++)
    {
      if(a[i]==b[j])
      {
        flag=1;
        break;
      }
    }
    
    if(flag!=1 )              
    {
      cout<<b[j]<<"     ";          //Printing only those elements which are not present in array a(1st array)
    }
    
  }
  return 0;
}*/

//WAP to get union of two sets;



/*#include <iostream>
using namespace std;
int main(){
    int a[10];
    int b[10];
    int i,j,n,m;
    int flag;
    //Reading elements of 1st array 
    cout<<"Enter the number of elements in set 1"<<endl;
    cin>>m;
    cout<<"Enter the elements of first array: "<<endl;
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    //Reading elements of 2nd array 
    cout<<"Enter the number of elements in set 2"<<endl;
    cin>>n;
    cout<<"Enter the elements of first array: "<<endl;
    for(j=0;j<n;j++){
        cin>>b[j];
    }
    
    cout<<"The union of set 1 and 2 is:"<<endl;
    //Print the elements of 1st array
    
    for(i=0;i<m;i++){
        cout<<a[i]<<"   ";
    }
    
    //print the elements of array b which are not present in array a
    
     for(j=0;j<n;j++)
  {
    flag=0;                 //Comparing if element of array a and array b are equal
    for(i=0;i<m;i++)
    {
      if(a[i]==b[j])
      {
        flag=1;
        break;
      }
    }
    
    if(flag!=1 )              
    {
      cout<<b[j]<<"     ";          //Printing only those elements which are not present in array a(1st array)
    }
    
  }
  return 0;
}

//To find ouot intersection of two sets
#include <iostream>
using namespace std;
int main(){
    int a[10];
    int b[10];
    int i,j,n,m;
    int flag;
    //Reading elements of 1st array 
    cout<<"Enter the number of elements in set 1"<<endl;
    cin>>m;
    cout<<"Enter the elements of first array: "<<endl;
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    //Reading elements of 2nd array 
    cout<<"Enter the number of elements in set 2"<<endl;
    cin>>n;
    cout<<"Enter the elements of first array: "<<endl;
    for(j=0;j<n;j++){
        cin>>b[j];
    }
    
    cout<<"The intersection of set 1 and 2 is:"<<endl;


    for(j=0;j<n;j++)
  {
    flag=0;                 //Comparing if element of set 1 and set 2 are equal
    for(i=0;i<m;i++)
    {
      if(a[i]==b[j])
      {
        flag=1;
        break;
      }
    }
    
    if(flag==1 )              //Printing those elements which are present in both set 1 and set 2
    {
      cout<<b[j]<<" ";          
    }
    
  }
  return 0;
}*/

















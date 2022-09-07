//Arrays in c++

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
}

Delete Element from Array in C++

#include<iostream>
using namespace std;
int main()
{
    int arr[10], tot=10, i, elem, j, found=0;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==0)
        cout<<endl<<Element doesn't found in the Array!";
    else
        cout<<endl<<"Element Deleted Successfully!";
    cout<<endl;
    return 0;
}

//Delete Element and Print New Array

#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, i, elem, j, found=0;
    cout<<"Enter the Size: ";
    cin>>n;
    cout<<"Enter "<<n<<" Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<endl<<"Enter Element to Delete: ";
    cin>>elem;
    for(i=0; i<n; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(n-1); j++)
                arr[j] = arr[j+1];
            found=1;
            i--;
            n--;
        }
    }
    if(found==0)
        cout<<endl<<"Element doesn't found in the Array!";
    else
    {
        cout<<endl<<Element Deleted Successfully!";
        cout<<endl<<"The New Array is:\n";
        for(i=0; i<n; i++)
            cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}

//Delete Element from Array using Function

#include<iostream>
using namespace std;
int delElem(int [], int, int);
int main()
{
    int arr[100], n, i, elem, chk;
    cout<<"Enter the Size: ";
    cin>>n;
    if(n>0)
    {
        cout<<"Enter "<<n<<" Array Elements: ";
        for(i=0; i<n; i++)
            cin>>arr[i];
        cout<<endl<<"Enter Element to Delete: ";
        cin>>elem;
        chk = delElem(arr, n, elem);
        if(chk==101)
            cout<<endl<<"Element doesn't found in the Array!";
        else if(chk==102)
        {
            cout<<endl<<"Element Deleted Successfully!";
            cout<<endl<<"The New Array is:"<<endl;
            cout<<"Empty!";
        }
        else
        {
            cout<<"\nElement Deleted Successfully!";
            cout<<endl<<"The New Array is:\n";
            for(i=0; i<chk; i++)
                cout<<arr[i]<<"  ";
        }
    }
    else
        cout<<endl<<"Invalid Input!";
    cout<<endl;
    return 0;
}
int delElem(int arr[], int n, int elem)
{
    int i, j, found=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(n-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            n--;
        }
    }
    if(found==0)
        return 101;
    else if(n==0)
        return 102;
    else
        return n;
}*/
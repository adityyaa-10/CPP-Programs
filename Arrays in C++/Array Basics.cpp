// Array Basics 


/*  1. Accessing Array elements by their indices

#include <iostream>
using namespace std;
int main(){
    int a[5] =  {10,20,30,40,50};
    cout<<"The elements alongwith their indices are:"<<endl;
    for(int i=0;i<5;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}


    2. Accessing the index of element entered by the user
#include <iostream>
using namespace  std;
int main(){
    int n,x, a[10], i;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The array elements along with their indices are:"<<endl;
    for(i=0;i<n;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}*/

 
/*  3.Checking the maximum and minimum value of an array 

#include <iostream>
#include <climits>               //climits is the library that stores the value of maximum and minimum value of a data type
using namespace std;
    
    int getmax(int a[], int n){
        int max= INT_MIN;                   //humne sbse smallest value possible ko max consider krlia;
        for(int i=0;i<n;i++){
            if(a[i]>max){                   //jese jese hme badi value milti gayi wese wese max me update kra
                max=a[i];
            }
        }
        return max;                         //sabse badi value ko return krdia
    }
    int getmin(int a[], int n){
        int min= INT_MAX;                   //humne greatest possible value ko min consider krlia
        for(int i=0;i<n;i++){
            if(a[i]<min){                   //jese jese hme chhoti values milti gyi wese wese min me update kra
                min=a[i];
            }
        }
        return min;                         //sbse chhoti value return kr di
    }
        
int main(){
    int arr[100];
    int size;
    cout <<"Enter the size of array : "<<endl;
    cin>>size;
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"The maximum number in your array is : "<<getmax(arr,size)<<endl;     //calling the getmax function
    cout<<"The minimum number in your array is : "<<getmin(arr,size)<<endl;     //calling the getmin function
    
    return 0;
}*/


/*  4.Printing sum of all array elements
#include <iostream>
using namespace std;
int main(){
    int i,n, a[15],sum=0;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    } 
    for(i=0;i<n;i++){           //Calculating sum
        sum=sum+a[i];
    }
    cout<<endl<<"Sum of all array elements = "<<sum<<endl;
    return 0;
}*/


/*  5.Insertion at the beginning in an array 
#include <iostream>
using namespace std;
int main(){
    int x,i,n,a[10];
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n-1;i++){
        cin>>a[i];
    } 
    cout<<"The original array is :"<<endl;      //Printing the original array
    for(i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    cout<<"Enter new element to be added at the beginning"<<endl;
    cin>>x;
    for(i=n;i>=0;i--){
        a[i+1]=a[i];
    }
    a[0]=x;
    cout<<"The array after insertion is : "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}*/


/*  6.Insertion at the end in an array 
#include <iostream>
using namespace std;
int main(){
    int x,i,n,a[10];
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<n-1;i++){
        cin>>a[i];
    } 
    cout<<"The original array is :"<<endl;      //Printing the original array
    for(i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    cout<<"Enter new element to be added at the end"<<endl;
    cin>>x;
    cout<<"The array after insertion is : "<<endl;
    for(i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }cout<<x;
    return 0;
}*/


/*  7.Insertion at a particular position in an array 
#include <iostream>
using namespace std;
int main(){
    int x,i,n,a[10],pos;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The original array is :"<<endl;      //Printing the original array
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    cout<<"Enter new element to be added"<<endl;
    cin>>x;
    cout<<"Enter the position where the new element is to be added"<<endl;
    cin>>pos;
    for(i=n;i>=pos;i--){                                    //pos count will start from 1 {not 0}
        a[i]=a[i-1];
    }
    a[i]=x;
    n++;
    cout<<"The new array is: "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}*/
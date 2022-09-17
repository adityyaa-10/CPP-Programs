/* Patterns 

1. Rectangle pattern 

    *   *   *   *
    *   *   *   *
    *   *   *   *          //Take number of rows and columns as input from user 
    *   *   *   *
    *   *   *   *
*/

/*#include <iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"Enter number of rows ";
    cin>>r;
    cout<<"Enter number of columns ";
    cin>>c;
    
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cout<<"*    ";
        }
        cout<<endl;
    }
    return 0;
}*/

/* 2. Hollow Rectangle pattern


    *   *   *   *   
    *           *
    *           *
    *           *
    *           *
    *   *   *   *

*/

/*#include <iostream>
using namespace std;
int main(){
    int i,j,r,c;
    cout<<"Enter number of rows ";
    cin>>r;
    cout<<"Enter number of columns ";
    cin>>c;
    
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++){
            if(i==1 || i==r){
                cout<<"*    ";
            }
            else if(j==1 || j==c){
                cout<<"*    ";
            }
            else{
                cout<<"     ";
            }
        }
        cout<<endl;
    }
    return 0;
}*/

/* 3. Inverted half pyramid


    *   *   *   *   *
    *   *   *   *
    *   *   *
    *   *
    *
    

    #include <iostream>
    using namespace std;
    int main()
    {
    int i,j,r;
    cout<<"Enter number of rows ";
    cin>>r;
    for(i=r;i>=1;i--)
    {
        for(j=1;j<=i;j++){        //j 1 se i tk chlega, jitna row number utne star print karne hai 
            cout<<"*    ";
        }
        cout<<endl;
    }
    return 0;
    }*/
    
/* Half Pyramid after 180* rotation 


                    *
                *   * 
            *   *   *
        *   *   *   *
    *   *   *   *   * 
*/    
/*    #include <iostream>
    using namespace std;
    int main()
    {
    int i,j,r;
    cout<<"Enter number of rows ";
    cin>>r;

        for(i=1;i<=r;i++){
            for(j=1;j<=r;j++){
                if(j<=r-i){
                    cout<<"     ";
                }
                else 
                cout<<"*    ";
            }
            cout<<endl;
        }
        
        return 0;
        
}*/
































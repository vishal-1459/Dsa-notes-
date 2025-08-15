#include<iostream>
using namespace std;
int main(){
   /*int n ; 
    cout<< " enter the value of number to print the pattern "<< endl;
    cin>>n;
    int i=1;
    while ( i<=n){
        int j =1;
        while ( j<=n){
            cout<<"*" << " "; 
            j=j+1;
            

        }
          cout << endl;
        i =i+1;
       
    } */


/*int n ; 
    cout<< " enter the value of number to print the pattern "<< endl;
    cin>>n;
    int i=1;
    while ( i<=n){
        int j =1;
        while ( j<=n){
            cout<<i << " "; 
            j=j+1;
            
 
        }
          cout << endl;
        i =i+1;
       
    }   */

    // write  a code to print counting that will change its row in the interval of three 
   /* int n ; 
    cout<<"enter the valur to print "<< endl; 
    cin>>n ; 
    int i =1;
    while (i <=n )
    {
        int j=1; 
        while (j<=3)
        {
            cout<<i; 
            i =i+1;
            j=j+1;

        }
        
        cout<< endl; 
        
    }*/

    // write a code to print a triangular star pattern 

  /* int n ;
    cout<<" enter the number of stars to print ";
    cin>> n;
    int i = 1; 
    while(i<=n)
    {
        int j = 1;
        while (j<=i){
            cout <<"*";
            j = j+1;
           
           

        }
          cout<< endl;
            i=i+1;
    }*/


  // write a  code to print the triangular number coutnting pattern 
    /*int n ; 
    cout << " enter the number to pirnt the number triangle ";
    cin >> n;
    int i =1;
    int count = 1;
    while (i<=n ){
        int j =1 ; 
        while (j<=i){
            cout << count << " "; 
            count = count+1; 
             
            j=j+1;
            
            
          
            
        
        }
        i = i+1;
        
        

        cout<< endl;
         
        
        
        
    }*/

    // make a code to print triangular pattern of number it always start with the starting number of row 

  /*  int n; 
    cout<<" enter the no of rows to print"<< endl; 
    cin >> n ; 
    int i = 1 ; 
    

    while (i<=n )

    {
        int count = i ; 
        int j = 1;
         
        while ( j<=i)
        {
            cout<< count;
            count = count +1; 
            j = j+1;

        }
        cout<< endl;
        i= i + 1;
    } 
    */
   // second type of the solution 
   // the solution dosent work here do it further after the practice

  /* int n; 
   cout<< " enter the value of the n which are the number of the rows to print"<< endl; 
   cin>> n ; 
   int i = 1 ; 
   while(i<=n)
   {
    int j =1 ;
    while ( j<=i )
    {
        cout << i ; 
        j=j+1 ; 
        

    }
    i = i+1;
    
    cout << endl; 

   }*/

   // write a code to print the triangular reverse counting 

  /* int n; 
   cout <<" enter the number of rows to print in reverse counting "<< endl;
   cin>> n; 
   int i = 1; 
   while (i<=n)
   {
    int j = 1 ; 
    while (j<=i )
    {
        cout<< (i-j+1)<< " ";
        j=j+1;
    }
    cout << endl; 
    i=i+1;
   }
*/

// write a code to print the square of the same alphabet 

 /*int  n ; 
cout << " enter the number of rows you want to print " << endl; 
cin >> n ; 
int i  = 1 ; 
while (i<=n )
{
    int j = 1 ;
  
    while ( j<=n)
    {
        char ch = 'A'+ i - 1 ; 
        cout<< ch << " " ;
        j =  j+1 ;


    }
     cout<< endl; 
     i = i + 1 ;

} */

 /* int n ; 
  cout << " enter the number of rows to print "<< endl; 
  cin>> n ; 
  int i = 1;
   char ch =  ('A' )  ;
  while( i <= n )
  {
    int j = 1 ;
   
    while (j <= n )
    { 
        
        cout << ch ;
        
        j = j + 1 ; 
      ch = ch + 1;

    }
    cout << endl ; 
    i = i +1 ;
  }*/


 /* int n ;
  cout << " enter the number of rows you want to print inverted "<< endl; 
  cin>> n; 

  int i = 1; 
  while ( i <=n )
  {
    int j ; 
    while ( j<=n)
    {
        cout << '*'  << " ";
        j = j + 1; 
        

    }
    cout << endl; 
    n = n - 1;
    i = i + 1;
  }*/

 int vishl[10] = { 1 , 3 , 5 , 5 , 2 , 2569 , 33 , 43,33 ,3}; 
    int m= 0;
    int n ;
    for  ( int i = 0 ; i<=9; i++)
    {
        n = vishl[i]+m; 

    }
         cout << " the sum of the array is "<< n << endl; 


         
}
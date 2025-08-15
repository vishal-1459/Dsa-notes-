#include<iostream>
#include<math.h>
using namespace std; 



int main()
{ 
   // NOW we are going to convert a decimal to binary ;


    /* int n; 
    cout<<"enter the number to convert in binary "<< endl;
   
    
    cin>> n; 
    int i = 0;
    int ans = 0; 
    while ( n != 0 )
    { 
      int bit =  n &1; 
      ans = (bit * pow( 10 ,i)) +  ans ; 
      n = n >>1; 
      i++; 

        
    }
    cout << " the number in binary is "<< ans << endl; 
    */

   //NOW we going to convert a binary number to decimal

   int n ; 
   cout << " enter the binary number to convery into decimal "<< endl; 
   cin>> n; 
   int i = 0; 
   int ans = 0 ; 
     while (n != 0 ){
   // if we want to take out the bit then we will and it 
     int digit = n %10; 
        if ( digit == 1 ){ 
    ans = ans + pow( 2,i);

   }
     n = n/10;
    i++;
}
cout << ans << endl ;

}
#include<iostream> 
using namespace std; 
int getmin(int num[], int n )
{
    int mini = INT_MAX; 
    for ( int i = 0 ; i < n;  i++ )
    {
        mini = min(mini, num[i]); 
    }
    // returning the min value 
    return mini ; 
}
void callarry(int arr[] ,  int size )
{ 
    cout << " the arry is "<< endl; 
    for ( int i = 0 ; i <= size ; i++ )
    { 
         cout << arr[i]<< endl; 
    }
    cout << " the printing is done "<< endl; 
}
int main ()

{ 
  /* int vishal [70]; 
    for (int  i=0; i<=70; i++)
    { 
        vishal[i] = {9};

    }
    callarry(vishal,70 );*/ 
    int vishl[10] = { 1 , 3 , 5 , 5 , 2 , 2569 , 33 , 43,33 ,3}; 
    int m= 0;
    int n ;
    for  ( int i = 0 ; i<10 ; i++)
    {
        n = vishl[i]+m; 

    }
         cout << " the sum of the array is "<< n << endl; 
}
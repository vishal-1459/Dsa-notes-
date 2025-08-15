#include <iostream>
using namespace std; 

int fact(int n ){ 
    // first write the base case 
    if ( n== 0 )
    return 1; 

    return n  * fact(n-1); ; 


    
}
int pow ( int n)
{
    if ( n == 0)
    return  1; 
    return 2*pow(n-1); 
}

int main()
{
    cout << " enter the number you want to find factorial "<< endl;
    int n; 
    cin >> n ; 
    cout << " the ans is "<< fact(n)<< endl; 
    cout << " the power of 2 is "<< pow(n)<< endl; 
}
#include <iostream>
using namespace std; 

int linearSeacrch (int arr[], int start ,  int end, int key  ){ 
    for ( int i = start; i <= end ; i++){ 
        if (arr[i]==key ){
            cout << i; 
        
            cout << " the element forund at " << endl; 
            break;
        }
        
    }
    
}
int BinarySearch(int )

int main (){
    int arr[10] = {6, 65, 90, 32 ,5 ,56, 44 ,332 , 245,67 };
    cout << linearSeacrch(arr, 1, 10,56 );
}
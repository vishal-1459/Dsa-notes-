#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int size ; 
    cin>> size ; 
    int *arr = new int[size]; 
    for (int i = 0 ; i< size ; i++ ){
        cin >> arr[i]; 
    }
    map <int , int> mpp; 
    for (int i = 0 ; i< size; i++){
        mpp[arr[i]]++; 
    }
    
    for ( auto it  =  mpp.begin(); it != mpp.end(); it++ ){
        
        cout << it->first << " "<< it->second<< endl;
    }
     
     delete arr; 
	

}

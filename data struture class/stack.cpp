#include <bits/stdc++.h>
using namespace std;

class Stack {
    public:
    
    // main data 
     int top   ; 
     int *arr; 
     int size ;
     
     // making constructor 
      Stack ( int size){
          this -> size = size; 
          arr = new int[size]; 
          top = -1; 
          
      }
    
    // function of stack ;
    
    void push( int data){
        if ( size - top > 1){
            top++; 
            arr[top] = data ; 
            
        }
        else {
            cout<< " stack is overflow" << endl; 
        }
        
    }
    
    
    void pop (){
        if (top > -1) {
            top-- ; 
        }
        else {
            cout<< " stack is underflow " << endl ; 
        }
        
    }
    
    int peek() {
        if(top >= 0 )
         return arr[top]; 
         else
         {
             cout<< " stack is empty " << endl ; 
             return -1; 
         }
        
    }
    bool isempty ( ){
        if (top == -1 ){
            return true; 
        }
        else return false ; 
    }
};

int main() {
    
    Stack st(5); 
    
    st.push(5); 
    st.push(3); 
    st.pop(); 
    cout<<  st.peek(); 
    
    if ( st.isempty()) cout<<" stack no have element "; 
    
    else cout<< " stack have  elemnt "; 
    
    
    
	

}

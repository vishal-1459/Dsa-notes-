#include<bits/stdc++.h>
using namespace std; 

class Node {
    public : 
    int data ; 
    Node* next;
    Node* back ; 
    
    public: 
     Node ( int data1, Node* next1 , Node* back1){
        data = data1; 
        next = next1 ; 
        back = back1; 
     }

     public : 
     Node (int data1){
        data = data1; 
        next = nullptr; 
        back = nullptr ; 

     }

};

Node * convertArrtoLL ( vector<int> &arr){
    Node * head = new Node( arr[0]); 
    Node * prev = head; 
    for ( int i = 1; i<arr.size(); i++) {
        Node * temp = new Node (arr[i], nullptr, prev); 
        prev->next = temp ; 
        prev = temp ; 
    }
    return head; 
}

void pirnt (Node * head){ 
    while ( head != NULL){ 
        cout << head -> data<< " "; 
        head= head->next; 
    }
}




int main ( ){
    vector <int> arr = {12,4,64,21,3,3}; 
    cout << " every thing is working fine "<< endl; 
    Node* head = convertArrtoLL(arr); 
    pirnt( head); 
   
}
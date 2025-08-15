#include<bits/stdc++.h>
using namespace std; 
 class Node {

   public : 
   int data ; // int * ptr = &q;
                         
   Node* next; 

   Node( int data1 ){
      data = data1 ; 
      next = nullptr; 

   }

 };

 Node* ConvertArrtoLL( vector<int> &arr){
   Node* head = new Node(arr[0]); 
   Node * mover = head ; 
   for ( int i = 0 ; i< arr.size(); i++){
      Node * temp = new Node(arr[i]); 
      mover->next = temp ; 
      mover = temp ;
   }



   return head; 
 } 
 int SizeofLL(Node * head){
  int count = 0; 
  Node * temp = head ; 

  while (temp ){
    temp ->data ; 
    temp = temp ->next ; 
    count ++; 

  }
  return count ; 

 }
 Node* RemoveHead(Node * head){
  if (head == NULL ){
    return head;   
  }
  Node *temp = head; 
  head= head-> next; 
  free(temp );
  return head;
 }

 Node* RemoveTail(Node* head){
  if  (head == NULL || head-> next == NULL){
  return head ; 
  }
  Node * temp = head; 
  while (temp ->next->next != NULL  ){
    temp = temp -> next; 
  }
  delete temp ->next; 
  temp -> next = nullptr; 
  return head; 
 }
   
   Node * RemoveK(Node* head , int k)
   {
    if ( head == NULL ){
      return head; 
    }
    if ( k == 1 ){
      Node * temp = head ; 
      head = head->next; 
      free (temp); 
      return head ; 
    }
    int cnt = 0 ; 
    Node * temp = head; 
    Node * prev = NULL; 
    while ( temp != NULL ){
      cnt ++ ; 
      if ( cnt == k ){
        prev -> next = prev->next ->next; 
        free(temp); 
        break ; 
        
      }
      prev = temp ;
      temp = temp -> next ; 
    }
    return head ; 

  }
 

int main (){ 
   
vector<int>arr = {34, 5, 2, 5}; 
Node * head  =ConvertArrtoLL(arr); 
/*cout << head ->data<< endl ; 
cout << (*head).data<< endl;
cout << " yha se sure ah "<< endl; 

cout << endl; 
// int a = 5 ; 
// int *p = &a;
// cout << *p << endl;
// cout << p << endl; 
// cout << &a << endl;  
// cout << a<< endl; 
cout << SizeofLL(head)<< endl; 
cout << RemoveHead(head)<< endl ;

*/
RemoveK(head,3);
Node * temp = head;

while (temp ){
  

  cout << temp -> data<< " " ;  
  temp = temp->next;
  
}




}
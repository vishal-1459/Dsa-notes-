#include<iostream> 
using namespace std; 

bool search (int arr[], int n , int key )
{ 
    int ans = 0 ; 
    for (int i = 0 ; i<=n-1; i++){ 
        if ( arr[i]== key ){ 
           return 1; 
        }
       
    }
    return 0;

}
int  reverse ( int arr[], int n)
{ 
    int start = 0 ; 
    int end = n-1 ; 
    while ( start<= end){
        swap (arr[start],arr[end]);
    start++ ; 
    end--; 
    }
   
   
}
int main ()
{ 
  /*  int kid[5]= { 5, 8, 3 ,6,8 }; 
    bool  answer = search(kid , 5, 10); 

    if (answer){ 
        cout <<"the key is present "<< endl;
    }
    else{ 
        cout<< " the key is not present"<< endl; 
    }
    */
   int arr[10 ]; 
   cout<< " enter the element in the array "<< endl; 
   for ( int i = 0 ; i<10; i++){
    cin>> arr[i]; 

   }
  int final= reverse(arr ,10); 
   
   for ( int j= 0; j<=10; j++)
   { 
    cout << arr[j]<< endl; 
   }

    
}
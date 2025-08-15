#include<iostream>
using namespace std; 

 // we will be showoing here inheritence 
 // first we will make a main class where will be inheriting the data 
 class animal {
    public : 
    int living ; 
    int age ; 
    int gender ; 
     
    public: 
    int getage(){
        return age ; 

    }
    void setage(int a ){
       this-> age = a ; 
    }
 };
 // we have created a main class where we will inherit data ; 
 // now we will create the child class ; 
   class male : public animal{
    public: 
     bool living ; 


   }; 
int main(){

    male m1; 
   
   cout << m1.age<< endl;  
   cout<<  m1.gender<< endl; 
   cout<< m1.living<< endl;  
   m1.setage(21); 
      
      cout<< m1.age<< endl;



}
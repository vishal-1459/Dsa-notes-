#include<iostream>
using namespace std; 


class student {
  private: 
    string name ; 
    int age ; 
    int height; 
    
  public : 

  int getage(){
    return age ; 
  }
  void setage(int some ){
     this->age = some;
  }
    string getname(){
      return name ; 
    }
    void setname(string n){
      n =  name ; 
      
    }
    
};

/*class Hero {
     public:
     Hero(){
        cout << " constructor is called "<< endl;
            }

  int health ; 

  int getHealth(){
   
    return health; 
  }
  void sethealth(int h){
    health = h; 

  }
  
};*/

int main(){

   /* Hero shubham ; 
    shubham.sethealth(34);
    cout<< " health of shubham is "<< shubham.getHealth()<< endl; 
    
    Hero vishal(shubham) ; 
    cout << " the health of vishal is "<< vishal.getHealth()<<endl; 
    
    
    Hero ramesh; 
    ramesh.sethealth(98); 
    cout << "ramesh health is "<< ramesh.getHealth()<< endl;

    Hero *P = new Hero ; 
    (*P).sethealth(75);
    cout << " the health of p is "<< (*P).getHealth()<< endl; */

    student vishal ; 
    vishal.setname("vishal");
    vishal.setage(22);
    cout<<" the name of the student is "<< vishal.getname()<< vishal.getage()<< endl; 


}
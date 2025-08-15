#include<iostream> 
using namespace std; 




int getlenght (char name[]){ 
    
    int value = 0 ; 
    for (int i= 0; name [i]!= 0; i++){
     value++; 

    }
    return value ; 
    


}
 string reverse (string name){ 
    int starting =0; 
    int end = name.size() -1 ;  
    while (starting <= end){
        swap(name[starting], name[end]) ;
        starting++; 
        end--; 

    }
    return name ; 
    
    

}

int main (){
  /*  char ch [25]; 
    cout << " Enter the string you want to find the length "<< endl; 
    cin >> ch;
    string st;
    cout<<"string start "<< endl;  
    cin >> st; 
    cout<<"string is created  "<< endl;
    cout << st<<endl<<  get(st)<<  endl ;
    cout<<"string is ended  "<< endl;


    
    cout << "lenght "<< getlenght(ch)<< endl;  
    cout<< "hii "<< endl ;*/

    string pp; 
    cout<<"enter the element in string"<< endl; 
    cin.getline(); 
    cout<< reverse(pp)<< endl; 
    

    
   
}
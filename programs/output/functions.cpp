#include <iostream>
using namespace std; 

int power( int num1, int num2)
    {
        int ans = 1; 
        for ( int i = 1; i <= num2 ; i++ )
            {
                ans = ans * num1; 
                
            }
            

        return ans; 
    }
    //void update (int a )
      //  { 
        //    a = a / 2 ; 
      //  }



    int update (int a )
        { 
            int ans = a * a ; 
            return ans  ; 
        }

int main ()
    { 
      /*  cout << " Enter the number whose power want to calculate "<< endl; 
        int c, d ; 
        cin >> c >> d; 
         int answer = power(c, d); 
         cout << " the answer is "<< answer << endl; 
         

         return 0; */

         
         // questions of the video 
         
         int a = 1000 ; 
        int answer =  update ( a ) ;
         cout << answer  << endl; 


        
    }
    

    // need to do in fibonacci series in this using functions { need to done }
    // solve the questions which are left in the video end;  ye ho gaya ha upr likhe ha { done }


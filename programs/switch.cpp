#include<iostream> 
using namespace std; 
 
  int main()

  {
   /* int amount ; 
    cout<< " Enter the amoount "<< endl; 
    cin >> amount ; 
    int num  = 1 ; 
    int note = 0; 
      
      switch(num)
      {
        case 1:
            {
                note = amount/100; 
                amount = amount - (note * 100 ); 
                cout << note << " 100 RS note required "<< endl;
            }

        case 2:
             {
                note = amount / 50; 
                amount = amount - (note * 50 ); 
                cout << note << " 50 RS note required "<< endl; 
            }

        case 3: 
            {
                note = amount/20 ; 
                amount = amount - (note * 20 ); 
                cout << note << " 20 RS note required " << endl;
            }
        case 4:
             {
                note = amount / 10 ; 
                amount = amount - ( note * 10 ); 
                cout << note << " 10 RS note required "  << endl; 
            }
        case 5: 
            {
                 note = amount / 1; 
                 amount = amount - ( note * 1); 
                 cout << note << " 1 RS note required "<< endl; 
             } 



      } */


      // code for fibonacce series 

     /*  int n; 
       cout << " enter the value of n;"<< endl;
       cin>> n; 
       int a = 0 ; 
       int b = 1 ;
       cout << a <<" "<< b <<" "; 
       for ( int i = 1; i<=n ; i++ )
         { 
            int nextnumber = a+b; 
            cout << nextnumber<< " ";
            a= b; 
            b= nextnumber ;


         }
       */
      int n = 10 ; 

      int a = 0;
      int b = 1;
      cout << a <<" " << b  <<" "; 
      for (int i =0 ; i<=n; i++ )
      {
        int next_number = a+b;
        cout << next_number<<" "; 
        a= b; 
        b= next_number;
      }







  }

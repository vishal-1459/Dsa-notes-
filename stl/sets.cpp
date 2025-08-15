#include <bits/stdc++.h>
using namespace std;

int main() {
vector <int> arr = {  1, 2,3} ; 
unordered_set<int > s; 
s.insert(1); 
s.insert(2); 
s.insert(1); s.insert(5); 
s.insert(6); 
cout<<s.size()<< endl; 

//printing the sets 
for (auto x : arr ){
    x++; }
    
    for (auto &x : arr){
        cout<< x << " "; 
    }
    cout<< endl ;

if (s.find(1) != s.end()) cout<< "yes"<< endl;
else cout<< " no "<< endl; 


}

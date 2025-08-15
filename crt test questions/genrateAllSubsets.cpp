#include <bits/stdc++.h>
using namespace std;
bool  pal(string str , int i , int j ){
    if (i > j ) return true ; 
    return (str[i] == str[j] &&  pal(str, i+1, j-1));
    
    
}



// genrate all subsets of 
void genall(string str , int i , int n , string temp){
     
    if (i == n ){
        
        cout<< temp << " " <<endl;
        
        return ; 
    }
    genall(str, i+1, n,temp);
    genall(str, i+1, n , temp+str[i]);
}

// its a code to genrate sub sets by reference 
void genallbyref(string &str , int i , int n , string &temp){
     
    if (i == n ){
        
        cout<< temp << " " <<endl;
        
        return ; 
    }
    genall(str, i+1, n,temp);
    temp.push_back(str[i]);
    genall(str, i+1, n , temp);
    // isme jo empty element aa  rhe ha unde hatane ke genallbyre
    temp.pop_back();
}




int main() {
	string str = "abcfoasnfnsajlkd";
// 	bool p ; 
// 	p = pal(str , 0 , str.length()-1); 
// 	if (p == 1)cout<< " the string is palandrom "<< endl; 
// 	else cout<< " the string is not a palandrom "<< endl ; 
	string temp; 
	genall(str,0 , str.length(), temp);

}

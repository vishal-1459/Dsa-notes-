#include <bits/stdc++.h>
using namespace std;

int longestSubwitheZero(vector <int> &arr){
    int n = arr.size(); 
    int sum = 0 ; 
    int ans = 0 ; 
    unordered_map<int,int>mp; 
    for (int i = 0 ; i< n ; i++ ){
        sum = sum + arr[i]; 
        if (sum == 0 ){
            int len = i+1;
            
            ans = max (ans, len ); 
        }
        if (mpp.find(sum) != mpp.end()){
            int len = i-mp[sum]; 
            ans = max(ans, len); 
        }
        else {
            mpp[sum] = i; 
        }
    }
    return ans ; 
}

int main() {
	// your code goes here

}

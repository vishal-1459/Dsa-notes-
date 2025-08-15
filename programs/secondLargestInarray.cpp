#include <bits/stdc++.h>
using namespace std;

// making a program for finding a second maximum elememnt in array 
int secondMax( vector<int> &arr){
    int n = arr.size(); 
    int maxi = arr[0]; 
    for (int i = 0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }
    int sec_lar = INT_MIN; 
    for (int i = 0 ; i<n; i++){
        if (arr[i] != maxi)
        sec_lar = mac (sec_lar, arr[i]);
    }
    return sec_lar; 
}

int main() {


}

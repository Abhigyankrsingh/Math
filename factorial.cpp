#include<bits/stdc++.h>

using namespace std;


int fact(int n){

    int res =1;

    for(int i =2; i<=n;i++){
        res = res * i;
        
    }

    return res;
}


int main(){


int n = 4;

cout << fact(n);
}
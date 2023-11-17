#include<bits/stdc++.h>

using namespace std;



int ccount(int n){
      int res =0;
    while(n>0){
      
      n = n/10;
     res++;
    }

    return res;
}


int main(){

int n = 2342;


cout<<ccount(n);

}
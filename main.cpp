#include <iostream>
#include<cstdio>
#include<math.h>
using namespace std;

bool Prime(int n){
   if(n < 2){
      return false;
   }
   for(int i = 0; i < sqrt(n); i++){
      if(n % i == 0){
         return false;
      }
   }
   return true;
}

int main(){
   int n = 7, k = 3, x = 10;
   int a[7] = {2,3,1,5,8,9,4};
   int b[100];
   for(int i = 0; i < k; i++){
      b[i] = a[i];
   }
   b[k] = x;
   for(int i = k+1; i <= n; i++){
      b[i] = a[i-1];
   }
   for(int i = 0; i <= n; i++){
      cout << b[i] << " ";
       
   }
}
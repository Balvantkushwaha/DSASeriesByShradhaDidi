#include <iostream>
using namespace std;
int main(){
   int n=10, sum=0;
   for(int i =1;i<=n;i++){
        if(i%2!=0){
            sum = sum+i;
        }

      
   }
   cout<<"sum  = " <<sum;
   
    return 0; 
  
}
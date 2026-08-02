#include<iostream>
using namespace std;

int isPrimeOrNot(int num){
   if(num<=1){
       return 0;
   }
   for(int i=2;i<num;i++){
         if(num%i==0){
              return 0;
         }
   }
   return 1;
}

int main(){
 int num ;
 cout<<"Enter a number to check whether it is prime or not : ";
 cin>>num;

   bool result = isPrimeOrNot(num);
   if(result == 1){
       cout<<num<<" is a prime number"<<endl;
   }
   else{
       cout<<num<<" is not a prime number"<<endl;
   }

}

#include<iostream>
using namespace std;

int main(){
    int num =234567;
    int reverse = 0;
    cout<<"num="<<num<<endl;
    int i =0;

    while(num>0){
        int digit = num%10;
        reverse = reverse*10 + digit;
        num =num/10;
    }
    cout<<"reverse="<<reverse<<endl;

}
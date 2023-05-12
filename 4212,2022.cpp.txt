#include <iostream>
using namespace std;

int addDigits(int n){

   while(n/10!=0){

        int temp = n;
        int sum = 0;

        while(temp>0){
            sum += temp%10;
            temp = temp/10;
        }
        n = sum;
    }
    return n;
}

int main() {
   int n;
   cin>>n;
  cout<< addDigits(n);
}
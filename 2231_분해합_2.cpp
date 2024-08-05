#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int getDigitSum(int number){

  int sum=0;

  while(number>0){
    sum+=number%10;
    number/=10;
  }
  return sum;
}

int main(){

  int n;
  cin >>n;
int result=0;

  for(int i=n;i>0;i--){
    if(i+getDigitSum(i)==n){
      result=i;
    }

  }

  cout<<result;



  return 0;
}
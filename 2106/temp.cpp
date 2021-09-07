#include<iostream>
using namespace std;
int main(){
  int i,count=0,x;
  cin>>x;
  for(i=1;i<=x;i++){
    if(x%i==0){
      count++;
    }
  }
  if(count==2){
    cout<<"Number is prime.\n";
  }
  else{
    cout<<"Number is not prime\n";
  }

}

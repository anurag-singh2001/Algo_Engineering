#include<iostream>
using namespace std;
int main(){

int i=1,j=2,k=3,l;


   //1 //2  //1   //2   //3   //4   //3
l= i  +  j + i++ + j++ + ++i + ++j + k;
cout<<l;

return 0;

}

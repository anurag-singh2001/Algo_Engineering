#include<bits/stdc++.h>
using namespace std;

int countNum(int n){
int t=0;
while (n!=0){
    n=n/2;
    t++;
}
return t;
}



int main(void){
int n;
cout<<"Enter the number to Reverse"<<endl;
cin>>n;
cout<<"The Reversed Number is: ";
int i=0;
for(i=countNum(n);i>0;i--){
    int rev;
    rev=n%2;
    cout<<rev;
    n=n/2;
}
cout<<endl;
return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=13;
    int temp;
    while(n>0){
        temp=n;
        n=(n&(n-1));
    }
    if(n==0)  cout<<temp; //power of 2 that is just lesser than given N
    cout<<2*temp; //power of 2 that is just greater than given N
}


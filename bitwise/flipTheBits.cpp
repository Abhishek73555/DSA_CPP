#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=13;
    int num=n;
    //for flipping use the technique of 1's complement
    //ans=((just greater power of 2)-1)-n
    int temp;
    while(n>0){
        temp=n;
        n=n&(n-1);
    }
    temp=(temp<<1)-1;
    temp=temp-num;
    cout<<temp;
}


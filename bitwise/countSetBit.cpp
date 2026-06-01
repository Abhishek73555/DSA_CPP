#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    //Brian Kernighan’s Algorithm
    int n=123;
    int count=0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    cout<<count;
}


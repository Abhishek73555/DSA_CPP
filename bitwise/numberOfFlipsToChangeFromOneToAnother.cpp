#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    //anyhow get that how many bits are same on both->>> best sollution is XOR
    int n=13;
    int m=24;
    int ans=__builtin_popcount(n^m);//this will turn off the same bits
    cout<<ans;
    
}


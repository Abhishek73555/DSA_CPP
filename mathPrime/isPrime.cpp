#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1) {
        cout<<"not a prime";
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i!=0){
            cout<<"prime";
            break;
        }
        else{
            cout<<"not a prime";
            break;
        }
    }
}
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    //find the XOR of all with each othr same would become zero ,XORing with unique will be unique
    int arr[]={1,4,6,5,4,1,8,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=0;
    for(int i=0;i<n;i++){
        res^=arr[i];
    }
    cout<<res;
}


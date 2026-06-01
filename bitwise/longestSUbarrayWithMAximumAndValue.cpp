#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    //for maximum and value we have to find the maximum element in the array and count its frequency and that will be our answer
    int arr[]={12,12,3,5,9,9,9,9,13,13,13,13,13,13,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int c=0;
    int max_ele=INT_MIN;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max_ele){
            max_ele=arr[i];
            c=1;
        }else if(arr[i]==max_ele){
            c++;
        }
        ans=max(ans,c);
    }
    cout<<ans;
}
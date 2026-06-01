#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
// int main(){
//     int n=49;
//     vector<int>v;
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0){
//             v.push_back(i);
//             v.push_back(n/i);
//         }
//     }
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     } 
// }
//Upper code print the square root twice

int main(){
    int n=49;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
    //first loop in clude the square root and second loop exclude the square root
}
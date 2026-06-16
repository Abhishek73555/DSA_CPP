#include<iostream>
#include<stack>
using namespace std;

int main(){

    int arr[]={100,80,60,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<pair<int,int>> st;
    for(int i=0;i<n;i++){
        int span=1;
        while( !st.empty() && st.top().first<=arr[i]){
            span+=st.top().second;
            st.pop();
        }
        st.push({arr[i],span});
        cout<<span<<" ";
    }

    return 0;
}

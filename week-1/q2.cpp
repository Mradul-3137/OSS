//Program to find the non repeating number in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        vec.push_back(val);
    }

    int ans = vec[0];

    for(int i=1;i<n;i++){
        ans ^= vec[i];
    }

    cout<<"Non-repeating number is : "<<ans<<endl;

    return 0;
}

//Rotate array by K elements 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        ans[(i+k)%n]=arr[i];
    }
    
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
}
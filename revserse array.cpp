//Reverse a given array 
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
    reverse(arr.begin(),arr.end());
    for(auto i:arr)
    {
        cout<<i;
    }
}
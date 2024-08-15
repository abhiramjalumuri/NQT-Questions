//Average of all elements in an array 
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
    int sum=0;
    for(auto i:arr)
    {
        sum=sum+i;
    }
    
    cout<<sum/n;
}
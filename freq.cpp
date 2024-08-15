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
    map<int,int>map;
    for(auto i:arr)
    {
        map[i]++;
    }
    for(auto i:map)
    {
        cout<<i.first<<" : "<<i.second<<endl;
    }
    cout<<endl;
}
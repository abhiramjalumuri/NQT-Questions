//Second Smallest and Second Largest element in an array 
#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //max heap
    priority_queue<int>pq1;
    priority_queue<int,vector<int>,greater<int>>pq2;
    for(auto i:arr)
    {
        pq1.push(i);
    }
    for(auto i:arr)
    {
        pq2.push(i);
    }
    
    pq1.pop();
    pq2.pop();
    
    cout<<"Second Largest :"<<pq1.top()<<endl;
    cout<<"Second Smallest :"<<pq2.top();
}
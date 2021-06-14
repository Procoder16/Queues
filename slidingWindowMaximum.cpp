#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    
    // for(int i = 0; i<=n-k; i++){
    //     int maxEle = arr[i];
    //     for(int j = i; j <= i+2; j++){          THIS IS THE BRUTE FORCE APPROACH USING NORMAL ARRAY
    //         maxEle = max(maxEle, arr[j]);
    //     }
    //     cout<<maxEle<<" ";
    // }

    deque<int> q;
    vector<int> ans;

    for(int i = 0; i< k; i++){
        while(!q.empty() && arr[q.back()] < arr[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(arr[q.front()]);
    
    for(int i = k; i< n; i++){
        if(q.front() == i - k){
            q.pop_front();
        }

        while(!q.empty() && arr[q.back()] < arr[i]){
            q.pop_back();
        }
        q.push_back(i);

        ans.push_back(arr[q.front()]);
    }

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
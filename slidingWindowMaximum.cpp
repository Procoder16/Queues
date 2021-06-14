#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
                                                //THIS IS THE BRUTE FORCE APPROACH USING NORMAL ARRAY
    int k;
    cin>>k;
    
    for(int i = 0; i<=n-k; i++){
        int maxEle = arr[i];
        for(int j = i; j <= i+2; j++){
            maxEle = max(maxEle, arr[j]);
        }
        cout<<maxEle<<" ";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<int> leftRotate(int arr[], int n, int d){
    vector<int> result;

    for(int i = d;i<n;i++){
        result.push_back(arr[i]);
    }

    for(int i = 0;i<d;i++){
        result.push_back(arr[i]);
    }

    return result;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    vector<int>result = leftRotate(arr, 10, 2);

    for(auto i : result){
        cout<<i<<" ";
    }

    return 0;
}
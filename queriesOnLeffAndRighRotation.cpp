#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d){
    vector<int>result;

    for(int i = d;i<n;i++){
        result.push_back(arr[i]);
    }

    for(int i = 0;i<d;i++){
        result.push_back(arr[i]);
    }

    for(auto i : result){
        cout<<i<<" ";
    }

    return;
}

void rightRotate(int arr[], int n, int d){
    vector<int>result;

    for(int i = n - d;i<n;i++){
        result.push_back(arr[i]);
    }

    for(int i = 0;i<n - d;i++){
        result.push_back(arr[i]);
    }

    for(auto i : result){
        cout<<i<<" ";
    }

    return;
}

void solveQueries(int arr[], int n, int rank){
    int l = 0;
    int r = 0;
    if(rank == 3){
        cout<<"enter l and r"<<endl;
        cin>>l>>r;
        for(int i = l;i<=r;i++){
            cout<<arr[i]<<" ";
        }
    }

    else if(rank == 2){
        int d;
        cout<<"enter d"<<endl;
        cin>>d;
        leftRotate(arr, n, d);
    }

    else if(rank == 1){
        int d;
        cout<<"enter d"<<endl;
        cin>>d;
        rightRotate(arr, n, d);
    }

    return ;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int n = 5;

    int rank = 3;

    solveQueries(arr, n, rank);
    return 0;
}
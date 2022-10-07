#include<bits/stdc++.h>
using namespace std;

vector<int> leftRotate(int arr[], int n, int d){
    vector<int>result;

    for(int i = d;i<n;i++){
        result.push_back(arr[i]);
    }

    for(int i = 0;i<d;i++){
        result.push_back(arr[i]);
    }

    return result;
}

int findElement(vector<int> rotated, int arr[], int n, int index, int d){
    int i = index + d;
    if(i >= n){
        i = (index + d) % n;
    }
    cout<<arr[i]<<endl;
    cout<<rotated[index]<<endl;
    return arr[i];
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int d = 2;
    int n = 5;

    vector<int> result = leftRotate(arr, n, d);

    for(auto i : result){
        cout<<i<<" ";
    }
    cout<<endl;

    int index = 3;

    int value = findElement(result, arr, n, index, d);
    cout<<value<<endl;

    return 0;
}
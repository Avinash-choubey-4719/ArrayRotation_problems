#include<bits/stdc++.h>
using namespace std;

int findRotationNumber(int arr[], int n){
    for(int i = 0;i<n - 1;i++){
        if(arr[i] > arr[i + 1]){
            return i + 1;
        }
    }
}

int main(){
    int arr[] = {4, 5, 1, 2, 3};

    int n = 5;

    int k = findRotationNumber(arr, n);
    cout<<k<<endl;
    return 0;
}
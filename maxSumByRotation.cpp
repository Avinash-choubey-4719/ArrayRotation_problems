#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n){
    sort(arr, arr + n);
    int sum = 0;

    for(int i = 0;i<n;i++){
        sum += i * arr[i];
    }

    return sum;
}

int main(){
    int arr[] = {1, 20, 2, 10};

    int n = 4;

    int sum = maxSum(arr, n);
    cout<<sum<<endl;
    return 0;
}
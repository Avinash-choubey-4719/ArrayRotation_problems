#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n){
    int arr_sum = 0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        arr_sum += arr[i];
        sum += i * arr[i];
    }

    int max_sum = sum;
    int curr_sum = sum;

    for(int i = 1;i<n;i++){
        curr_sum = curr_sum + arr_sum  - n * arr[n - i];

        if(curr_sum > max_sum){
            max_sum = curr_sum;
        }
    }
    return max_sum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n = 10;

    int max_sum = maxSum(arr, n);
    cout<<max_sum<<endl;
    return 0;
}
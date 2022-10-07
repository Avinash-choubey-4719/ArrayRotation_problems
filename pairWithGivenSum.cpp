#include<bits/stdc++.h>
using namespace std;

void findPair(int arr[], int n, int sum){
    int i = 0;
    int j = n - 1;

    while(i < j){
        int curr_sum = arr[i] + arr[j];

        if(curr_sum < sum){
            i++;
        }

        else if(curr_sum > sum){
            j--;
        }

        else{
            cout<<arr[i]<<" "<<arr[j]<<endl;
            return;
        }
    }
    cout<<"No pair available"<<endl;
    return;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int sum = 7;

    int n = 5;

    findPair(arr, n, sum);
    return 0;
}
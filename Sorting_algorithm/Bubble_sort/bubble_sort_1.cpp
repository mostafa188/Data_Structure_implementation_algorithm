#include<bits/stdc++.h>
#define nl endl
using namespace std;

int main(){
    int size;       cin>>size;
    int arr[size+1];

    for(int i=0;i<size;i++) cin>> arr[i];

    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j] > arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
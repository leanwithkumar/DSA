#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1222,322,3233,42,52,66};
    int size = sizeof(arr)/sizeof(arr[0]);
    int small = arr[0];
    for(int i =1; i<size; i++){
        if(arr[i]<small){
            small = arr[i];
        }
    }
    cout<<small;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,11,7,-3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n;i++){
         cout<<arr[i]<<" ";
    }//insertion sort
    for(int i=0;i<n;i++){
        int j= i;
        // while(j>=1){
        //     if(arr[j]>=arr[j-1]) break;
        //     else  swap(arr[j],arr[j-1]);
        //         j--;
        // }
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
  

}
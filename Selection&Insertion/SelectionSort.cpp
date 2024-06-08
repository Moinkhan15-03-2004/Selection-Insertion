#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,3,0,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    // insertion sort
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min) {
                min = arr[j];
                mindx = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[mindx];
        arr[mindx]=arr[i];
    }
        for(int i=0;i<=n;i++){
         cout<<arr[i]<<" ";
    }

}
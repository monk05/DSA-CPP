#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int size;
    cout<<"Enter the Size of array\n";
    cin>>size;
    // taking array as an input from user 
    cout<<"Enter the elements\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    // performing Insertion sort using for loop 

    for(int i=1;i<size;i++){
        int temp= arr[i];
        int j= i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }arr[j+1]=temp;
    }


// printing sorted array 
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
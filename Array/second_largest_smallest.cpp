#include<iostream>
using namespace std;
int main(){
    int size,i,j;

    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(i=0;i<size;i++){
        cout<<"Enter "<<i+1<<"th element: ";
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"The Second Largest number is: "<<arr[size-2]<<endl;
    cout<<"The Second Smallest number is: "<<arr[1];
}
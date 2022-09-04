#include<iostream>
using namespace std;

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void merge(int arr[],int low,int mid,int high){
    int n1 = mid-low+1;
    int n2 = high-mid;
    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i] = arr[low+i];
    }

    for(int i=0;i<n2;i++){
        b[i] = arr[mid+i+1];
    }

    int i = 0, j = 0;
    int k = low;
    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        arr[k]= a[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = b[j];
        k++;
        j++;
    }

}

void mergeSort(int a[],int low,int high){
    if(low >= high) return;
    int mid = (low+high)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}

int main(){
    int a[] = {4,7,1,9,0,3};
    mergeSort(a,0,6);
    display(a,6);
}
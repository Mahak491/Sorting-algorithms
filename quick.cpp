#include<iostream>
using namespace std;

void swap(int a[],int i,int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}


int partition(int a[],int low,int high){
    int pivot = a[high];
    int pindex = low;;
    for(int i=low;i<=high-1;i++){
        if(a[i] <= pivot){
            swap(a,i,pindex);
            pindex++;
        }
    }
    swap(a,pindex,high);
    return pindex;
}



void quickSort(int a[],int low,int high){
    if(low >= high) return;
    int pivot = partition(a,low,high);
    quickSort(a,low,pivot-1);
    quickSort(a,pivot+1,high);
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[] = {9,7,3,1,7,4};
    quickSort(a,0,5);
    display(a,6);
}
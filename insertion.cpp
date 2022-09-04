#include<iostream>
using namespace std;

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void insertionSort(int a[],int n){
    for(int i=0;i<n;i++){
        int temp = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

int main(){
    int a[] = {5,3,4,1,2};
    insertionSort(a,5);
    display(a,5);
}
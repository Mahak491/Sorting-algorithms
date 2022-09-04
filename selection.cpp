#include<iostream>
using namespace std;

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void selectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main(){
    int a[] = {9,7,3,2,3,1};
    selectionSort(a,6);
    display(a,6);
}
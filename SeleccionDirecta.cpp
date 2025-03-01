#include<iostream>
using namespace std;
void ordenar(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int menor=arr[i];
        int k=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<menor){
                menor=arr[j];
                k=j;
            }
        }
        arr[k]=arr[i];
        arr[i]=menor;
    }
    //datos ordenados
    for(int i=0; i<n; i++){       
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arreglo[]={1,7,4,9,0};
    int tam=sizeof(arreglo)/sizeof(arreglo[0]);
    ordenar(arreglo,tam);
    return 0;
}

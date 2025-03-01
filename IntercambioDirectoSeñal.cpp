#include<iostream>
using namespace std;
void ordenar(int arr[], int n){
    int cen=1;
    int i=1;
    while(i<=n-1 && cen==1){
        cen=0;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
                cen=1;
            }
        }
        i++;
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

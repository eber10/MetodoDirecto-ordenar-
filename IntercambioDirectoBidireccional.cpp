#include<iostream>
using namespace std;
void ordenar(int arr[], int n){
    int izq=0;
    int der=n-1;
    while(izq<=der){
        for(int i=der; i>izq; i--){
            if(arr[i-1]>arr[i]){
                int aux=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=aux;
            }
        }
        izq++;
        for(int i=izq; i<der; i++){
            if(arr[i]>arr[i+1]){
                int aux=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=aux;
            }
        }
        der--;
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

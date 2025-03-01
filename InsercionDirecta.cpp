#include<iostream>
using namespace std;
void ordenar(int arr[], int n){
    for(int i=1; i<n; i++)
    {
        int aux=arr[i];
        int k=i-1;
        while(k>=0 && aux<arr[k])
        {
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=aux;
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

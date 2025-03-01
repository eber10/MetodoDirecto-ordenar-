#include<iostream>
using namespace std;
void ordenar(int arr[], int n){
    for(int i=1; i<n; i++)
    {
        int aux=arr[i];
        int izq=0;
        int der=i-1;
        while(izq<=der)
        {
            int m=(izq+der)/2;
            if(aux<arr[m])
            {
                der=m-1;
            }
            else
            {
                izq=m+1;
            }
        }
        int j=i-1;
        while(j>=izq)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[izq]=aux;
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

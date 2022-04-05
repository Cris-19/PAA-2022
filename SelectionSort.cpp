// Implementacao do algoritmo de ordenacao SelectionSort em C++
#include <iostream>
#include <float.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(){
    int arr[] = {9, 5, 2,7,1}; // Array exemplo para a ordenacao dos dados
    int n = sizeof(arr)/sizeof(arr[0]);
    int min;
    cout << "Array original :" <<" " ;
    for (int i = 0; i < n; i++){ // contar quantas vezes faz isso
          cout << arr[i] << " ";
    }
    cout<<" "<<endl; 
    for (int i=0; i<n; i++){ 
        min = i;
        for (int j=i+1; j<n; j++){    // faz a varedura de array não verificados ainda 
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i){   //
            swap(arr[i],arr[min]); // Funcao swap para realizar a troca os elementos de lugares
        }
    }
    cout<< "Array ordenado :" <<" ";
    for (int i = 0; i < n; i++){
          cout << arr[i] << " ";
    }
    return (0);
}


//
//  Algorithm inspired by Kanban's algorithm to 'Largest subarray sum problem'
//  This solution consists of an O(n) complexity algorithm
//
//  Giuliano Crespe
//  743543
//

#include <stdio.h>
#include <stdlib.h>

int subsequenciaSomaMaxima(int arr[], int tam){

    int i = 0, maximoLocal = 0, maximoTotal = 0;

    for (i; i < tam; i++) {

        if (arr[i] <= maximoLocal + arr[i]) {
            maximoLocal += arr[i];
        }
       
        else {
            maximoLocal = arr[i];
        }
        if (maximoLocal > maximoTotal)
            maximoTotal = maximoLocal;

    }

    printf("%d\n", maximoTotal);

} 

int main() {

    int size;

    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    int array[size];

    for(int i = 0; i<size; i++) scanf("%d",&array[i]);

    subsequenciaSomaMaxima(array, size);

    return 0;
    
}
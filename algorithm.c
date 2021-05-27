//
//  Algorithm inspired by Kanban's algorithm to 'Largest subarray sum problem'
//  This solution consists of an O(n) complexity algorithm
//
//  Giuliano Crespe
//  743543
//

int subsequenciaSomaMaxima(int arr[], int size){

    int maximoLocal = 0, maximoGeral = 0;

    for (int i = 0; i < size; i++) {

        // include current element to previous subarray only
        // when it can add to a bigger number than itself.
        if (arr[i] <= maximoLocal + arr[i]) {
            maximoLocal += arr[i];
        }
       
        // Else start the max subarry from current element
        else {
            maximoLocal = arr[i];
        }
        if (maximoLocal > maximoGeral)
            maximoGeral = maximoLocal;

    }

    return maximoGeral;

} 

int main() {

    int size;

    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));

    for(int i = 0; i<size; i++) scanf(&array[i]);

    printf("%d", subsequenciaSomaMaxima(array, size));

    return 0;
    
}
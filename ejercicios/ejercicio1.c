#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    
    int *arr=(int*)malloc(n*sizeof(int));
    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Ingrese %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d\n", &arr[i]);
    }

    printf("El arreglo es: ");
    for (int i = 0; i < n; i++) {
        printf("\nElemento[%d]: %d\n",i, arr[i]);
        
    }
    printf("\n");
    
    printf("Liberando el espacio reservado\n");
    free(arr);
    arr=NULL;
    return 0;
}

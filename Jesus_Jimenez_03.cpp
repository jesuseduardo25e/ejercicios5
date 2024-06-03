#include <stdio.h>

int main() {
    int n = 4; // Tamaño de la matriz (4x4)
    int matriz[n][n]; // Matriz identidad

    // Inicializamos la matriz como una matriz identidad
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matriz[i][j] = 1; // Diagonal principal
            } else {
                matriz[i][j] = 0; // Resto de elementos
            }
        }
    }

    // Mostramos la matriz identidad en pantalla
    printf("Matriz Identidad de %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Nueva línea para cada fila
    }

    return 0;
}

#include <stdio.h>

int main() {
    int filas = 6;
    int columnas = 7;
    int matriz[filas][columnas];
    int matrizTraspuesta[columnas][filas];

    // Llenar la matriz con valores (puedes hacerlo manualmente o de manera aleatoria)
    // Por ejemplo, aquí lo llenamos con valores fijos:
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el elemento (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular la matriz traspuesta
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            matrizTraspuesta[i][j] = matriz[j][i];
        }
    }

    // Mostrar la matriz traspuesta en pantalla
    printf("Matriz Traspuesta:\n");
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            printf("%d ", matrizTraspuesta[i][j]);
        }
        printf("\n"); // Nueva línea para cada fila
    }

    return 0;
}

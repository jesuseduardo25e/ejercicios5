#include <stdio.h>

// Función para verificar si una matriz es un cuadrado mágico
int esCuadradoMagico(int matriz[3][3]) {
    int sumaFila = 0;
    int sumaColumna = 0;
    int sumaDiagonal1 = 0;
    int sumaDiagonal2 = 0;

    // Calcular la suma de la primera fila (para comparar con las demás)
    for (int j = 0; j < 3; j++) {
        sumaFila += matriz[0][j];
    }

    // Verificar las filas, columnas y diagonales
    for (int i = 0; i < 3; i++) {
        sumaColumna = 0;
        for (int j = 0; j < 3; j++) {
            sumaColumna += matriz[i][j];
            if (i == j) {
                sumaDiagonal1 += matriz[i][j];
            }
            if (i + j == 2) {
                sumaDiagonal2 += matriz[i][j];
            }
        }
        if (sumaColumna != sumaFila) {
            return 0; // No es cuadrado mágico
        }
    }

    // Verificar las diagonales
    if (sumaDiagonal1 != sumaFila || sumaDiagonal2 != sumaFila) {
        return 0; // No es cuadrado mágico
    }

    return 1; // Es cuadrado mágico
}

int main() {
    int matriz[3][3];

    // Leer los valores de la matriz desde el teclado
    printf("Ingrese los valores de la matriz (fila por fila):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificar si es un cuadrado mágico
    if (esCuadradoMagico(matriz)) {
        printf("¡Es un cuadrado mágico!\n");
    } else {
        printf("No es un cuadrado mágico.\n");
    }

    return 0;
}

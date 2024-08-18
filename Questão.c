#include <stdio.h>

// Os números de 1 a 100 (separados por vírgula)
void MostrarNumeros() {
    for (int i = 1; i <= 100; i++) {
        if (i < 100)
            printf("%d, ", i);
        else
            printf("%d\n", i);
    }
}

// O somatório de todos os números ímpares entre 10 e 1000
void SomaImpar() {
    int soma = 0;
    for (int i = 11; i <= 1000; i += 2) {
        soma += i;
    }
    printf("Resultado: %d\n", soma);
}

// Todos os números múltiplos de 3 que não terminem em 3 entre 1 e 200 (separados por vírgula)
void MultiplosSem3() {
    for (int i = 3; i <= 200; i += 3) {
        if (i % 10 != 3) {
            if (i < 200)
                printf("%d, ", i);
            else
                printf("%d\n", i);
        }
    }
}

int main() {
    MostrarNumeros();
    SomarImpar();
    MultiplosSem3();

    return 0;
}
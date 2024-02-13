#include <stdio.h>

int main() {
    // Parte 1: Média de notas
    float notas[5];
    float somaNotas = 0.0;
    float media;
    float maiorNota = -1.0;  // Inicializado com um valor menor possível
    float menorNota = 101.0; // Inicializado com um valor maior possível

    // Leia as notas de 5 alunos e armazene-as no array.
    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        // Atualize a soma das notas, a maior e a menor nota.
        somaNotas += notas[i];
        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }
    }

    // Calcule a média das notas.
    media = somaNotas / 5;

    // Exiba a média, a maior e a menor nota.
    printf("\nMédia das notas: %.2f\n", media);
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n\n", menorNota);

    // Parte 2: Encontre o maior e o menor elemento do array 'numeros'
    int numeros[10];
    int maiorElemento = numeros[0]; // Inicializado com o primeiro elemento
    int menorElemento = numeros[0]; // Inicializado com o primeiro elemento

    // Leia os valores para os elementos do array 'numeros'.
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Atualize o maior e o menor elemento.
        if (numeros[i] > maiorElemento) {
            maiorElemento = numeros[i];
        }
        if (numeros[i] < menorElemento) {
            menorElemento = numeros[i];
        }
    }

    // Exiba o valor do maior e do menor elemento.
    printf("Maior elemento: %d\n", maiorElemento);
    printf("Menor elemento: %d\n", menorElemento);

    return 0;
}

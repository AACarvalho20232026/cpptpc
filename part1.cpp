#include <stdio.h>

// Defina uma constante PI com o valor de 3.14159.
#define PI 3.14159

int main() {
    // Declare variáveis do tipo int para armazenar dois números, a e b.
    int a, b;

    // Leia os valores de a e b do utilizador.
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Realize as operações matemáticas.
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    
    // Verifique se b é diferente de zero para evitar a divisão por zero.
    if (b != 0) {
        int quociente = a / b;
        int resto = a % b;

        // Exiba os resultados de cada operação em linhas separadas.
        printf("Soma: %d\n", soma);
        printf("Diferença: %d\n", diferenca);
        printf("Produto: %d\n", produto);
        printf("Quociente: %d\n", quociente);
        printf("Resto da divisão: %d\n", resto);
    } else {
        printf("Erro: divisão por zero não permitida.\n");
    }

    // Declare uma variável para armazenar o raio do círculo.
    float raio;

    // Leia o valor de r do utilizador.
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcule a área do círculo usando a fórmula area = PI * r^2.
    float area = PI * raio * raio;

    // Exiba a área do círculo.
    printf("Área do círculo: %f\n", area);

    return 0;
}

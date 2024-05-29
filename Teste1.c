#include <stdio.h>

// Função para somar dois números

float somar(float a, float b) {
    return a + b;
}
// Função para multiplicar dois números
float multiplicar(float a, float b) {
    return a * b;
}

int main() {
    float num1, num2, resultado;

    // Solicita os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Realiza a soma dos números
    resultado = somar(num1, num2);

    // Exibe o resultado da soma
    printf("O resultado da soma é: %.2f\n", resultado);

    // Realiza a multiplicação dos números
    resultado = multiplicar(num1, num2);

    // Exibe o resultado da multiplicação
    printf("O resultado da multiplicação é: %.2f\n", resultado);

    return 0;
}

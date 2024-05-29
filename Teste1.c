#include <stdio.h>

// Função para somar dois números
float somar(float a, float b) {
    return a + b;
}

// Função para multiplicar dois números
float multiplicar(float a, float b) {
    return a * b;
}

// Função para dividir dois números
float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0;  // Retorna 0 para indicar erro
    }
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

    // Realiza a divisão dos números
    resultado = dividir(num1, num2);
    // Exibe o resultado da divisão
    if (num2 != 0) {
        printf("O resultado da divisão é: %.2f\n", resultado);
    }

    return 0;
}

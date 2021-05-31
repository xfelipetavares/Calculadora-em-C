#include <stdio.h>

int result, operador = 0;
float num1, num2;
char continuar;

int main (void){
    
    printf("Digite um numero:");
    scanf("%f", &num1);
    printf("Digite outro numero:");
    scanf("%f", &num2);
    
    printf("Digite 1 para + (Somar os numeros digitados)");
    printf("Digite 2 para - (Subtrair os numeros digitados)");
    printf("Digite 3 para * (Multiplicar os numeros digitados)");
    printf("Digite 4 para / (Dividir os numeros digitados)");
    scanf("%i", &operador);
    
    if (operador = 1) {
        result = num1 + num2;
    } else if (operador = 2) {
        result = num1 - num2;
    } else if (operador = 3) {
        result = num1 * num2;
    } else if (operador = 4) {
        result = num1 / num2;
    }
    
    printf("%i", result);
    
    
    
    return 0;
}

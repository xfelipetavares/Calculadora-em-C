// por Felipe Tavares
// aprendendo C

#include <stdio.h>
#include <math.h>

char continuar;
int operador = 0;
float result, num1, num2;

int main (void){
        
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número: ");
    scanf("%f", &num2);
    
    printf("\nDigite 1 para + (Somar os numeros digitados)\n");
    printf("Digite 2 para - (Subtrair os numeros digitados)\n");
    printf("Digite 3 para * (Multiplicar os numeros digitados)\n");
    printf("Digite 4 para / (Dividir os numeros digitados)\n");
    printf("\nEu escolho... ");
    scanf("%i", &operador);
        
        switch (operador) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                result = num1 / num2;
                break;
                
            default: printf("voce nao escolheu um numero valido");
                break;
        }
    
    printf("\nO resultado é: %.2f\n\n", result);
    
    
    
    return 0;
}

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    printf("\nValores originais:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    // Troca dos valores usando operações aritméticas
    a = a + b;  // a agora contém a soma
    b = a - b;  // b agora contém o valor original de a
    a = a - b;  // a agora contém o valor original de b
    
    printf("\nValores trocados:\n"); 
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}

#include <stdio.h>
#include "pag.h"
int main(){
    
int opcao;
do{
    printf("Digite 1 para recursiva\n");
    printf("Digite 2 para Conversao Decimal\n");
    printf("Digite 3 para Encontrar o maior numero\n");
    printf("Digite 4 para Potencia\n");
    printf("Digite 5 para Vetor Par\n");
    printf("Digite 0 para sair\n");
    
    scanf("%d", &opcao);
    
    switch(opcao){
    
    case 1:
    int n;
    printf("\nDigite o numero que deseja: ");
    scanf("%d", &n);
    printf("O resultado ficou em %d\n\n", soma(n));
    break;
    
    case 2:
    int dec;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &dec);
    DecBin(dec);
    break;
    
    case 3: 
    int num[] = {5, 12, 4, -1, 2, -7, 9};
    int maior;
    
    maior = Maximo(7, num);
    printf("O maior é %d", maior);
    break;
    
    case 4:
    int base, ex;
    printf("\nDigte a Base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &ex);
    int a = Pot(base, ex);
    printf("Resultado é: %d\n\n", a);
    break;
    
    case 5:
    int vet[] = {5, 6, 8, 10, 15, 67, 56};
    a = Par(vet,0,7);
    printf("\nNo vetor tem %d numeros pares\n\n", a);
    
    break;
    
    }
    
}while (opcao != 0);

    return 0;
}

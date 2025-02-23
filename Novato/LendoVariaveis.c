#include <stdio.h>
int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];
    printf("Digite sua Idade: ");
    scanf("%d", &idade);
    printf("A idade digitada é: %d \n", idade);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("O valor da altura é: %.2f \n", altura);
    printf("Digite o nome: %s", nome);
    scanf("%s", &nome);
    printf("O nome é: %s \n", nome);
    printf("Digite a opção:");
    scanf(" %c",&opcao);
    printf("A opção é: %c", opcao);



    return 0;
}

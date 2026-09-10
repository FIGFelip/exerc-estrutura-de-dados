#include <stdio.h>
#include "funcionario.h"
void exibirFuncionario(Funcionario funcionario){
    printf("=== Funcionario ===\n");
    printf("nome: %s\n", funcionario.nome);
    printf("matricula: %d\n", funcionario.matricula);
    printf("salario: %.2f\n", funcionario.salario);
}

float calcularSalarioComAumento(Funcionario funcionario, float percentual){
    printf("Informe o percentual: ");
    scanf("%f", &percentual);
    float novoSalario = funcionario.salario+(funcionario.salario*(percentual/100));
    return novoSalario;
}
void getInfos(Funcionario *funcionario){
    char nome [255];
    printf("Informe a matricula:");
    scanf("%d", &funcionario->matricula);
    printf("Informe o nome:");
    scanf("%s", nome);
    strcpy(funcionario->nome, nome);
    printf("Informe o salario:");
    scanf(" %f", &funcionario->salario);
    printf("\n");
}

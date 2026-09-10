#include <stdio.h>
#include <string.h>
typedef struct {
    int matricula;
    char nome[100];
    float salario;
} Funcionario;

void exibirFuncionario(Funcionario funcionario);
float calcularSalarioComAumento(Funcionario funcionario, float percentual);
void getInfos(Funcionario *funcionario);

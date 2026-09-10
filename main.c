#include <stdio.h>
#include <stdlib.h>
#include "funcionario.h"
#include <string.h>

int main()
{
    Funcionario funcionario;
    getInfos(&funcionario);

    exibirFuncionario(funcionario);
    float salarioAumento = calcularSalarioComAumento(funcionario, 50.0);
    printf("Salario com aumento: %.2f", salarioAumento);
}

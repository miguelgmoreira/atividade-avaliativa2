#include <stdio.h>

int validaQuantidade(int quantidade) {
  if (quantidade < 0) {
    printf("Quantidade de peças inválida.\n");
    return -1;
  } else if (quantidade <= 50) {
    return 0;
  } else if (quantidade <= 80) {
    return quantidade - 50;
  } else {
    return (quantidade - 50) * 0.5 + (quantidade - 80) * 0.75;
  }
}

float calculaSalario(int quantidade, float salarioBase) {
  int adicional = validaQuantidade(quantidade);
  return salarioBase + (additional * 0.5);
}

void mostraFinal(float salario) {
  printf("Salário: R$ %.2f\n", salario);
}

int main() {
  int quantidade;
  float salarioBase = 600;

  while (1) {
    printf("Quantidade de peças fabricadas: ");
    scanf("%d", &quantidade);

    if (quantidade == 0) {
      break;
    } else if (validaQuantidade(quantidade) == -1) {
      continue;
    }

    float salario = calculaSalario(quantidade, salarioBase);

    mostraFinal(salario);
  }

  return 0;
}
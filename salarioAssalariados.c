#include <stdio.h>

float validaSalario(float salario) {
  if (salario < 1) {
    printf("Salário inválido.\n");
    return -1;
  } else {
    return salario;
  }
}

char *classificaSalario(float salario, float salarioMinimo) {
  if (salario >= salarioMinimo) {
    return "Acima";
  } else if (salario == salarioMinimo) {
    return "Igual";
  } else {
    return "Abaixo";
  }
}

void mostraClassifica(float salario, char *classificacao, char *sexo) {
  printf("Salário: R$ %.2f\n", salario);
  printf("Classificação: %s\n", classificacao);
  printf("Sexo: %s\n\n", sexo);
}

int main() {
  float salario;
  char sexo;

  int qtdAbaixo = 0;
  int qtdAcima = 0;

  while (1) {
    printf("Salário: ");
    scanf("%f", &salario);

    salario = validaSalario(salario);

    if (salario == -1) {
      break;
    }

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo != 'M' && sexo != 'F') {
      printf("Sexo inválido.\n");
      continue;
    }

    char *classificacao = classificaSalario(salario, 1400);

    mostraClassifica(salario, classificacao, sexo);

    if (classificacao == "Abaixo") {
      qtdAbaixo++;
    } else {
      qtdAcima++;
    }
  }

  printf("Quantidade de assalariados com salário abaixo do salário mínimo: %d\n", qtdAbaixo);
  printf("Quantidade de assalariados com salário acima do salário mínimo: %d\n", qtdAcima);

  return 0;
}
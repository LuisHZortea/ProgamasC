#include <stdio.h>
#define size 5

int main(void) {
  int opcao, i, abaixo = 0, acima = 0;
  float m[size], soma = 0, media;
  printf(" --------------MENU----------------- \n");
  printf("|                                   |\n");
  printf("|[1] Iniciar o programa.            |\n");
  printf("|[ ] Qualquer outra tecla para sair.|\n");
  printf("|                                   |\n");
  printf(" ----------------------------------- \n");
  printf("Sua escolha: \n");
  scanf("%i", &opcao);
  if (opcao != 1) {
    printf("Fim do programa.\n");
  } else {
    for (i = 0; i < size; i++) {
      printf("Insira a média semestral [0-10]: \n");
      scanf("%f", &m[i]);
      if (m[i] > 10) {
        printf("Erro: Valor inválido.\n");
      }
      soma = soma + m[i];
      media = soma / size;
      if (m[i] < media) {
        abaixo++;
      } else if (m[i] > media) {
        acima++;
      }
    }
  }
  printf("Média geral da turma: %.1f\n", media);
  printf("Alunos abaixo da média: %i\n", abaixo);
  printf("Alunos acima da média: %i\n", acima);
  return 0;
}

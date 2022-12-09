#include <stdio.h>
#define SIZE 50

void funcao1(float *An, float *Sn, float a1, float q, float n);

int main(void) {
  float An, Sn, a1, q, n;
  int i, opcao;

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
    for (i = 0; i < SIZE; i++) {
      printf("\nVamos calcular o enésimo termo de uma PG, e a soma de seus "
             "termos. Entre com o primeiro termo da PG: \n");
      scanf("%f", &a1);
      printf("Agora indique a razão da PG: \n");
      scanf("%f", &q);
      printf("Por último, a quantidade de termos da PG: \n");
      scanf("%f", &n);
      funcao1(&An, &Sn, a1, q, n);
      printf("O enésimo termo da PG é: %.1f \n", An);
      printf("A soma dos termos da PG é: %.1f \n", Sn);
    }
  }
  return 0;
}

void funcao1(float *An, float *Sn, float a1, float q, float n) {
  *An = a1 * pow(q, n - 1);
  *Sn = a1 * (pow(q, n) - 1) / q - 1;
}

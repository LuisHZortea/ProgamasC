#include <stdio.h>
#define size 100

void funcao1(float *imcf, float *imcm, float *massa, float *altura);

int main(void) {
  float imcf, imcm, massa, altura;
  int opcao, escolha, i;
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
      printf("Escolha seu sexo: \n");
      printf("[1] Masculino\n");
      printf("[2] Feminino\n");
      printf("Sua escolha: ");
      scanf("%i", &escolha);
      if (escolha == 1) {
        printf("Entre com a massa corpórea: \n");
        scanf("%f", &massa);
        printf("Entre com a altura: \n");
        scanf("%f", &altura);
        funcao1(&imcf, &imcm, &massa, &altura);
        printf("Seu IMC é: %1.f", imcm);
      } else if (escolha == 2)
        printf("Entre com a massa corpórea: \n");
      scanf("%f", &massa);
      printf("Entre com a altura: \n");
      scanf("%f", &altura);
      funcao1(&imcf, &imcm, &massa, &altura);
      printf("Seu IMC é: %.1f", imcf);
    }
  }
  return 0;
}

void funcao1(float *imcf, float *imcm, float *massa, float *altura) {
  *imcm = (0.95 * *massa) / pow(*altura, 2);
  *imcf = (1.05 * *massa) / pow(*altura, 2);
}

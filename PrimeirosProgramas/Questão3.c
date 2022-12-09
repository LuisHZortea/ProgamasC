#include <math.h>
#include <stdio.h>
#define size 50

void funcao1(float R, float pi, float *Area, float *Volume);

int main(void) {
  int i, opcao;
  float R, Area, Volume, pi = 3.14;
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
  }else{
  for (i = 0; i < size; i++){
    printf("Valor do Raio (R>0): ");
    scanf("%f", &R);
    if (R <= 0)
      printf("ERRO: Valor inválido.\n");
    else {
      funcao1(R, pi, &Area, &Volume);
      printf("Área: %.1f\n", Area);
      printf("Volume: %.1f\n", Volume);
      }
    }
  }
    return 0;
}

void funcao1(float R, float pi, float *Area, float *Volume) {
  *Area = (4 * pi) * pow(R, 2);
  *Volume = (4 * pi) * pow(R, 3) / 3;
}

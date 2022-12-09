#include <stdio.h>

int main(void) {
  int opcao;
  float B1, B2, media;

  printf(" ----------------MENU--------------- \n");
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
    printf("Entre com a nota [0-10] do 1º Bimestre: \n");
    scanf("%f", &B1);
    printf("Entre com a nota [0-10] do 2º Bimestre: \n");
    scanf("%f", &B2);

    if ((B1 < 0 || B1 > 10) || (B2 < 0 || B2 > 10)) {
      printf("ERRO: Entrada dos dados.\n");
    } else {
      media = (B1 + B2) / 2;
      printf("Média Final: %.1f\n", media);
      if (media >= 5)
        printf("STATUS: APROVAÇÃO.\n");
      else
        printf("STATUS: REPROVAÇÃO.\n");
    }
  }

  return 0;
}

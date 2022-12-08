#include <stdio.h>

int main(void) {
  int contador, opcao;
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
  printf("Os números PARES entre [0, 10] são: ");
  for(contador=0; contador <= 10; contador++)
  {
    if (contador  % 2 == 0)
      printf("Número PAR: %i\n", contador);
  }
  /*printf("\nSOLUCAO 2: Os números PARES entre [0,10] são: \n");
  for (contador = 0; contador <= 10; contador += 2)
      printf("Número PAR: %i\n", contador);

  printf("\nSOLUCAO 3: Os números PARES entre [10,0] são: \n");
  for (contador = 10; contador >= 0; contador -= 2)
    printf("Número par: %i\n", contador);*/
  }
  return 0;
}

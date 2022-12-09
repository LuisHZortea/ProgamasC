#include <stdio.h>
#include <time.h>
#define size 10
#define max 99
#define min 10

int main(void) {
  int opcao, indice, n[indice];
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
    srand(time(NULL));
    for (indice = 0; indice < size; indice++){
      n[indice] = rand() % (max - min + 1) + min;
      printf("Array [%i]: %i\n", indice, n[indice]);    
      }
      for (indice = 0; indice < size; indice++){
      n[indice] = rand() % (max - min + 1) + min;
      if (n[indice] % 2 != 0 && n[indice] % 7 == 0){
      printf("Os números ÍMPARES e multiplos de 7 são: %i\n", n[indice]);
       }
    }
  }
  return 0;
}

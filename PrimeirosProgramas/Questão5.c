#include <stdio.h>
#include <time.h>
#define size 100
#define max 999
#define min 100

int main(void) {
  int opcao, indice, s[size], imparesen = 0;
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
    for(indice = 0; indice < size; indice++){
      s[indice] = rand() % (max - min + 1) + min;
      printf("Array [%i]: %i \n", indice, s[indice]);

      if (s[indice] % 2 != 0 && s[indice] % 17 != 0){
      imparesen = imparesen + 1;}
    }
    printf("%i senhas são ímpares e não múltiplas de 17", imparesen);
  }
  return 0;
}

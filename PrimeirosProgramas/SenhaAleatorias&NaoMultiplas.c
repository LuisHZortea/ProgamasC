#include <stdio.h>
#include <time.h>
#define size 100
#define max 999
#define min 100

int main(void) {
  int opcao, indice, s[size], impares = 0, nmultiplos = 0;
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

      if (s[indice] % 2 != 0){
      impares = impares + 1;}
      else if(s[indice] % 17 != 0){
      nmultiplos = nmultiplos + 1;}
    }
    printf("%i senhas são ímpares e %i não múltiplas de 17", impares, nmultiplos);
  }
  return 0;
}

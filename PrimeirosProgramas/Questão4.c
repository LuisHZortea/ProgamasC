#include <stdio.h>
#define size 10

int main(void) {
  int opcao, mercadoria, indice, maior = 0, menor = 0;
  float m[size], pmg, soma = 0;
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
    for(indice = 0; indice < size; indice++){
      printf("Insira o valor da mercadoria %i: ", indice + 1);
      scanf("%f", &m[indice]);
      
      soma = soma + m[indice];
      pmg = soma / size;
      if (m[indice] < pmg){
        menor = menor + 1;
      }else if (m[indice] > pmg){
        maior = maior + 1;
      }
    }
    printf("Preço Médio geral das mercadorias é: %.1f\n", pmg);
    printf("%i mercadorias estão abaixo do preço médio.\n", menor);
    printf("%i mercadorias estão acima do preço médio.\n", maior);
  }
  return 0;
}

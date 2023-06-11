#include <stdio.h>

int main() 
{
    int matriz[2][3];
    int i, j;
    int soma = 0;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("Digite o elemento da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j]; 
        }
    }

    printf("A soma dos elementos é: %d\n", soma);

    return 0;
}

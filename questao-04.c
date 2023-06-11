#include <stdio.h>

int main() 
{
    int matriz[4][4];
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            printf("Digite o elemento da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Os elementos da diagonal principal são:\n");
    for (i = 0; i < 4; i++) 
    {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}

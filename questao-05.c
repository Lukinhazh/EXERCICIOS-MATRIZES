#include <stdio.h>

int main() 
{
    int matriz[3][3];
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("Digite o elemento da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos da matriz sem a diagonal principal:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            if (i != j) 
            {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}

#include <stdio.h>

void mul(const int ma[2][3], const int mb[3][2], int mc[2][2])
{
    int i, j, k;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++)
                mc[i][j] += ma[i][k] * mb[k][j]; 
        }
}

int main(void)
{
    int i, j;
    const int ma[2][3] = {{1, 2, 3}, {4, 5, 6}};
    const int mb[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    int mc[2][2] = {0};

    mul(ma, mb, mc);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) 
            printf("%d ", mc[i][j]);
            putchar('\n');
    }
        

    return (0);
}
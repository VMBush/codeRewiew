#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int** m1 = (int**)malloc(sizeof(int*) * n);
    int** m2 = (int**)malloc(sizeof(int*) * n);
    int** res = (int**)malloc(sizeof(int*) * n);

    for (int i = 0; i < n; i++) {
        m1[i] = malloc(sizeof(int) * n);
        m2[i] = malloc(sizeof(int) * n);
        res[i] = malloc(sizeof(int) * n);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &(m1[i][j]));
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &(m2[i][j]));
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int resfield = 0;
            for (int k = 0; k < n; k++) {
                resfield += m1[i][k] * m2[k][j];
            }
            res[i][j] = resfield;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", res[i][j]);
            if (j < n -1) printf(" ");
        }
        if (i < n -1) printf("\n");
    }
    return 0;
}
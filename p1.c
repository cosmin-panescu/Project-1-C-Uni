#include <stdio.h>
#include <stdlib.h>

int citire_nr_linii()
{
    int nr;

    printf("Introduceti numarul de linii al matricei: ");
    scanf("%d", &nr);

    if (nr > 50)
    {
        printf("Ati introdus o valoare eronata!\n");
        printf("Introduceti din nou numarul de linii al matricei: ");
        scanf("%d", &nr);
    }
    return nr;
}

int citire_nr_coloane()
{
    int nr;

    printf("Introduceti numarul de coloane al matricei: ");
    scanf("%d", &nr);

    if (nr > 50)
    {
        printf("Ati introdus o valoare eronata!\n");
        printf("Introduceti din nou numarul de coloane al matricei: ");
        scanf("%d", &nr);
    }

    printf("\n");

    return nr;
}

int citire_nr_elem_nenule(int m)
{
    int k;

    printf("Introduceti numarul de elemente nenule: ");
    scanf("%d", &k);

    while (k > m || k < 0)
    {
        printf("Ati introdus o valoare eronata!\n");
        printf("Introduceti din nou numarul de elemente nenule: ");
        scanf("%d", &k);
        printf("\n");
    }

    return k;
}

void citire_elemente(int a[50][50], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

void afisare_linii(int a[50][50], int n, int m, int k)
{
    int elem_nenul = 0, i, j, c;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] != 0)
                elem_nenul++;
        }

        if (elem_nenul >= k)
        {
            for (c = 0; c < m; c++)
                printf("%3d", a[i][c]);
            printf("\n");
        }
        printf("\n");

        elem_nenul = 0;
    }
}

int main()
{
    int a[50][50], n, m, k;

    n = citire_nr_linii();
    m = citire_nr_coloane();
    k = citire_nr_elem_nenule(m);

    citire_elemente(a, n, m);

    printf("Liniile care contin cel putin %d elemente nenule sunt: \n", k);
    afisare_linii(a, n, m, k);

    return 0;
}
#include <stdio.h>

int main()
{
    int i, n, nr, suma_nr_poz = 0, suma_nr_neg = 0, nr_poz = 0, nr_neg = 0;

    printf("Introduceti dimensiunea sirului: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nr);

        if (nr > 0)
        {
            suma_nr_poz += nr;
            nr_poz++;
        }
        else if (nr < 0)
        {
            suma_nr_neg += nr;
            nr_neg++;
        }
    }

    printf("\n");

    // Am tratat separat cazul in care toate nr. sirului sunt 0 deoarece nu l-am inclus pe 0 nici in multimea nr. pozitive, dar nici in multimea nr. negative.
    if (nr_poz == 0 && nr_neg == 0)
    {
        printf("Toate numerele sirului sunt 0.\n");
    }
    else if (nr_poz == 0)
    {
        printf("Sirul contine doar numere negative.\n");
        printf("Media aritmetica a numerelor negative din sir este: %.2f.\n", (float)suma_nr_neg / nr_neg);
    }
    else if (nr_neg == 0)
    {
        printf("Sirul contine doar numere pozitive.\n");
        printf("Media aritmetica a numerelor pozitive din sir este: %.2f.\n", (float)suma_nr_poz / nr_poz);
    }
    else
    {
        printf("Media aritmetica a numerelor pozitive din sir este: %.2f.\n", (float)suma_nr_poz / nr_poz);
        printf("Media aritmetica a numerelor negative din sir este: %.2f.\n", (float)suma_nr_neg / nr_neg);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h> // pentru a putea utiliza functia "pow()"

int citire_valoare_n()
{
    int n;

    printf("Introduceti valoarea pentru n: ");
    scanf("%d", &n);

    while (n < 1 || n > 100)
    {
        printf("Valoarea introdusa este eronata! (valoarea trebuie sa fie cuprinsa intre 1 si 100)\n");
        printf("Introduceti din nou valoarea pentru n: ");
        scanf("%d", &n);
    }

    return n;
}

float varianta_while(int n)
{
    int i = 2;
    float produs = 1;

    while (i <= n)
    {
        produs *= (1 - 1 / pow(i, 2));
        i++;
    }

    return produs;
}

float varianta_for(int n)
{
    int i;
    float produs = 1;

    for (i = 2; i <= n; i++)
    {
        produs *= (1 - 1 / pow(i, 2));
    }

    return produs;
}

float varianta_doWhile(int n)
{
    int i = 2;
    float produs = 1;

    do
    {
        produs *= (1 - 1 / pow(i, 2));
        i++;
    } while (i <= n);

    return produs;
}

int main()
{
    int n;

    n = citire_valoare_n();

    // Cele 3 structuri repetitive sunt: while, for si do while
    printf("Folosind WHILE, valoarea produsului este: %.4f\n", varianta_while(n));
    printf("Folosind FOR, valoarea produsului este: %.4f\n", varianta_for(n));
    printf("Folosind DO WHILE, valoarea produsului este: %.4f\n", varianta_doWhile(n));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int suma=0;
    printf("Podaj nieujemna liczbe calkowita\n");
    scanf("%d", &n);
    if (n<0)
        printf("liczba jest ujemna  >:(");
    else
        for(i=1;i<n+1;i++){
            suma+=i*i;
        }
    printf("%d", suma);
    return 0;
}

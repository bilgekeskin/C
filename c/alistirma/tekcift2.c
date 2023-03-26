#include <stdio.h>
int main()
{
    int number;

    printf("Bir tamsayi girin: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("%d cifttir.", number) : printf("%d tektir.", number);

    return 0;
}

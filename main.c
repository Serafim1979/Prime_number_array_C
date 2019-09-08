#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main()
{
    int arr[SIZE] = {2};
    int amount, n, i, j;
    printf("Specify the number of primes you want: ");
    scanf("%d", &n);

    for(amount = 1, i = 3; amount < n; i += 2)
    {
        arr[amount] = i;
        for(j = 0; i % arr[j] != 0; j++);
            if(j == amount)
                ++amount;
    }

    for(i = 0; i < amount; i++)
        printf("%d, ", arr[i]);
    printf("\b\b \n");
    return 0;
}

#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N); // N을 입력받음

    for (int i = N; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

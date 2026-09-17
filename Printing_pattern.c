#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
  	int center = n-1;
    for (int i = 0; i < 2*n-1; i++) {
        for (int j = 0; j < 2*n-1; j++){
            int x = abs(i - center);
            int y = abs(j - center);
            int value = (x > y ? x : y) + 1;
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}

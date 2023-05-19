#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dice(int a, int b){
    int x = rand() % (6 + 1 - 1) + 1;
    int y = rand() % (6 + 1 - 1) + 1;
}
int main()
{   int target, a, b, count; 
    scanf("%d", &target);
    printf("Dice Thrower\n============\n");
    printf("Total sought: %d", target);
    dice(a, b);
    return 0;
}

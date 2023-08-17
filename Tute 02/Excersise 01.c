//This program calculate sevaral formatting Styles

#include <stdio.h>

int main(void)
{
    int x=2;
    int y=3;

    printf("*\n**\n***\n****\n*****\n");
    printf("%d",x+x);
    printf("x =",x);
    printf("x = %d",x);
    printf("%d = %d",x+y,y+x);
    /* printf( “%d”, x+y ); */
    printf("\n");
    float z = 45.567;
    printf("value is %.2f",z);

    return 0;
}


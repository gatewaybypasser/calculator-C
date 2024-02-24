#include <stdio.h>
#include <string.h>

int main()
{
    int a,b; 
    char operator[2];

    printf("--First number:\n>> ");
    scanf("%d", &a);
    
    printf("--Operator:\n>> ");
    scanf("%s", &operator);

    printf("--Second number:\n>> ");
    scanf("%d", &b);

    if(strcmp(operator,"*")==0)
    {
    printf("--Result:\n>> %d <<\n", a*b);
    }

    else if(strcmp(operator,"/")==0)
    {
    printf("--Result:\n>> %d <<\n", a/b);
    }

    return 0;

}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char s[50],sen[100],ch;
    scanf("%c", &ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    
    printf("%c\n", ch);
    printf("%s\n",s);
    printf("%s",sen);
   
    return 0;
}

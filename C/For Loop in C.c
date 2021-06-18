#include<stdio.h>
int main() 
{
    int a, b;
    scanf("%d%d",&a,&b);
    char str[][100]={"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
   
    for(int i = a; i <= b; i++) 
    {   
        if(i > 9) 
        {
            if(i % 2 == 0)
                printf("even\n");
            else 
                printf("odd\n");
        }
        else 
        {
            printf("%s\n",str[i]);
        }
    }
    return 0;
}
     

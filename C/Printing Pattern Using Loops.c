#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define min(a,b) ((a)<(b)?(a):(b))

int main()
{

int n;
scanf("%d", &n);
// Complete the code to print the pattern.
int k=2*n-1;
//for row
for(int row=0;row<k;row++)
{
//for col
for(int col=0;col<k;col++)
{
int m=min(row,col) ;
m=min(m,k-row-1);
m=min(m,k-col-1);
printf("%d ",n-m);
}
printf("\n");
}
return 0;
}

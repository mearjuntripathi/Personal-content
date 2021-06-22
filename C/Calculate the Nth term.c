#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n, a, b, c, d, ans;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    d=c+b+a;
    ans=d+c+b;    
    printf("%d", ans); 
    return 0;
}

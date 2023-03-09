/*
    Mai Arjun Tripathi aur mai es program me Dynamic programming samghaunga
    to chliye suru karate hain
    sabase pahale ham es standard header file ko include karana hoga 
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    // pahale ham samghenge malloc kya hota hai

    int *ptr;
    int n;
    printf("Enter a no. to allote a memory through malloc\n");
    scanf("%d",&n);
    //ye malloc hai jo hme memory allot karta hai  
    ptr = (int*)malloc(sizeof(int)*n);
    //agar hme memory allot nhi hoti hai to hamre pointer me null store rahata hai to program k accuracy k liye esaka use kr sakate hain
    if(ptr == NULL){
        printf("Memory is alocated to you sorry !");
        exit(0);
    }
    for(int i=0;i<n;i++)
        scanf("%d",ptr+i); //or scanf("%d",&ptr[i]); 
    
    printf("\nStored element is this:\n");

    for(int i=0;i<n;i++)
        printf("%d, ",ptr[i]); // or printf("%d, ",*ptr+i);

    // ye rha malloc ka concept
    
    //free ko ry karae hain 
    //to free ek esa function jo pointer variable ko allote memory ko free kr deta hai in pointer variable 
    //fir se renew ho jata hai aur hm use fir se pointer ki trh use kr sakate hain
    free(ptr);

    //ab dekhenge calloc function
    //calloc v malloc ki tarah hota hai lakin ye bulk me memory allocate nhi karata hai multiple block me memory allote karata hai single variable ko
    printf("\n Enter a no. to memory through calloc\n");
    scanf("%d",&n);
    ptr= (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        printf("%d, ",ptr[i]);

    free(ptr);
    //aur calloc se jo maemory allote hoti hai un sabhi element me by default 0 intilize hota hai
    //to ye rha calloc ka concept

    // ab dekhenge realloc function ko ye important v ahi aur tricy v
    // to realloc function allocated memory ko enhance kr deta hai chahe vo malloc se alloted ho ya calloc se 
    // un sab me ye alag se memory ko add kr deta hai aur usme default garbage value hota hai 
    // aur hamare memory ki size ko increse kr deta hai

    // pahle ham malloc se try try karate hain
    printf("\n Enter a no to allote a memory with the help of melloc\n");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        ptr[i] = i+1;
    //yaha pe hamara alloted memory me value assign ho gya hai
    for(int i=0;i<n;i++)
        printf("%d, ",ptr[i]);
    printf("\n to inhance the enter the next enter the length of new array size\n");
    scanf("%d",&n);
    ptr = realloc(ptr, n*sizeof(int));

    for(int i=5;i<n;i++)
        ptr[i] = i+1;
    
    printf("\nYour old variable whit enhance size\n");
    for(int i=0;i<n;i++)
        printf("%d, ",ptr[i]);
    
    free(ptr);

    //ab ham es program ko calloc se krenge
    printf("\n Enter a no to allote a memory with the help of calloc\n");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",ptr+i);
    //yaha pe hamara alloted memory me value assign ho gya hai
    for(int i=0;i<n;i++)
        printf("%d, ",ptr[i]);
    printf("\n to inhance the enter the next enter the length of new array size\n");
    scanf("%d",&n);
    ptr = realloc(ptr, n*sizeof(int));

    for(int i=5;i<n;i++)
        scanf("%d",ptr+i);
    
    printf("\nYour old variable whit enhance size\n");
    for(int i=0;i<n;i++)
        printf("%d, ",ptr[i]);
    
    free(ptr);
    //ye rhi puri program jo dynamic programming ko samgha rhe hai 
    //it is so easy

}
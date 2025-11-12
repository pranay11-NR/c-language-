#include<stdio.h>

int main(){

int a[5] = {1,3,5,7,9};

int n ,t, b[6];

printf("the orignal array is :");
for (int i =0 ; i<5 ; i++)
{printf("%d\t",a[i]);}

printf(" \nthe no want to inesrt in begening is :");
scanf("%d", &n) ;

b[0] = n ;

printf("\nthe array now is :");
for (int i = 0 ; i< 5 ; i ++)
{b[i+1]=a[i];}
for (int i = 0 ; i< 6 ; i ++){
printf("%d\t",b[i]);
}

return 0;
}

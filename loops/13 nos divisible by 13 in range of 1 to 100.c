#include<stdio.h>
int main(){
int sum=0;
for(int i=1;i<101;i++)
{
    if(i%13==0)
    sum=sum+i;
}
printf("the sum is %d",sum);

}

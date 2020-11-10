#include <stdio.h>

int main() {
 int sum , num , div;
 printf("enter number");
 scanf("%d", &num);
 int count = num-1;
 int x;
 for(x=1 ; x<=count ; x++){
   div = num%x;
   if(div==0)
{
  sum=sum+x;
}
 }
 if(sum == num){
   printf("number is perfect");
 }else{
    printf("not perfect");
 }
 return 0;
}
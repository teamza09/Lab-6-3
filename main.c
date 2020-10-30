#include<stdio.h>  
int main()
{
    int x,num;
    re:
    printf("\n\nEnter  Number  : ");
    scanf("%d",&num);
    if(num>=0)
    if((num==1||num%2==0||num%3==0||num%5==0||num%5==0||num%7==0)&&(num!=2&&num!=3&&num!=5&&num!=7))
    {
      printf("Not prime number !!!");
      printf("\n--------------------------------");
      goto re;
    }
    else 
    {
    for(x=1; x<13;x++)
      printf(" %d * %d = %d\n",num,x,num*x);
      printf("--------------------------------");
      goto re;
    }
    return 0;
}
  
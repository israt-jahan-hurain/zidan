#include<stdio.h>
int main ()  {
 int a,i,num=0;
  scanf("%d" ,&a);
  if (a==0 || a==1)
      num=1;
      for(i=2;i<=a/2;++i)
  {
    if(a%i==0) {
      num=1;
      break;
    }
  }
    if(num==0);
    printf("%d prime",a);
    else
      printf("%d compound",a);
      return 0;
 }



}

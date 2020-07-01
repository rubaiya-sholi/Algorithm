#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
  int ara[1001],x;
  ara[0]=0;
  ara[1]=1;
  int n,rem;
   for(int i=2;i<1000;i++){
      ara[i]= (ara[i-1] +ara[i-2] )%10;
  }
  scanf("%d",&n);
  printf("%d",ara[n]);
}

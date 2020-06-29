#include<stdio.h>

void  main()
{
       int i,j,temp,n,sum=0;
       printf("Enter array size:");
       scanf("%d", &n);
       int a[n];
       printf("Enter Data\n");

      for(i=0; i<n; i++)
      scanf("%d", &a[i]);
      for (i = 0; i < n; ++i){
       for(j=0; j<n-i-1; j++){
           if(a[j]>a[j+1]){
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
     }
       printf("Ascending order\n");
       for (i = 0; i < n; i++){
           printf("%d\n", a[i]);
       }
       for(i=0; i< n; i++){
        sum=sum+a[i];
       }
        printf("Sum is = %d\n",sum);
       return 0;
}

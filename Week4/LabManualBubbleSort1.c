#include <stdio.h>

void main ()
   {
       int i, j, temp, n;
       printf("Enter array size:");
       scanf("%d", &n);
       int a[n];
       printf("Enter Data\n");
       for (i = 0; i < n; ++i)
	        scanf("%d", &a[i]);
       for (i = 0; i < n; ++i){
           for (j = i + 1; j < n; ++j){
               if (a[i] < a[j]){
                   temp= a[i];
                   a[i] = a[j];
                   a[j] = temp;
               }
           }
       }

      printf("Descending order\n");
       for (i = 0; i < n; ++i){
           printf("%d\n", a[i]);
       }
       return 0;
   }


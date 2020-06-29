#include<stdio.h>

int main()
{
    int i,j,n,k;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Data: ");

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=1; i<n; i++){
        int x=a[i];
        j=i;
        while(j>0 && a[j-1]>x){
            a[j]=a[j-1];
            j--;
        }
        a[j]=x;
    }
    printf("Ascending Order: ");
    for(i=0; i<n; i++)
    printf("%d ",a[i]);
    printf("\n");
    printf("Difference btwn max-min= %d\n",a[n-1]-a[0]);

    return 0;
}

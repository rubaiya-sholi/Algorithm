#include<stdio.h>

int n;
void Sort(int ara[])
{
    for(int i=0; i<n; i++)
        for(int j=0; j<(n-i-1); j++)
        {
            if(ara[j]>ara[j+1])
            {
                int p=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=p;
            }
        }

}


int main()
{
    int ara[]= {5,4,1,3,2,7};
    n=6;
    printf("Array before swap: ");
    for(int i=0; i<n; i++)
        printf("%d ",ara[i]);
    printf("\n");
    Sort(ara);
    printf("Array after swap: ");
    for(int i=0; i<n; i++)
        printf("%d ",ara[i]);
    printf("\n");
}

#include<stdio.h>
int main()
{
    int a[20];
    int i,j,t,n;
    printf("How many number you want to sort:\a\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        for(i=0;i<n;i++)
            printf("%d ",a[i]);

}

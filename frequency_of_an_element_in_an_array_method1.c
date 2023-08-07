#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    int arr[n];
    int visited[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            int count=1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==arr[i])
                {
                    count++;
                    visited[i]=1;
                }
            }
            printf("%d occurs %d times\n",arr[i],count);
        }
    }
}

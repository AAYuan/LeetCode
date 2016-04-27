#include<stdio.h>
#include<stdlib.h>
//#include <algorithm>
#define MAXN 1001
//O(nlogn)
int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
void main()
{
    int n,sum;
    int Array[MAXN];
    scanf("%d,%d",&n,&sum);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&Array[i]);
    }
    //quickly sort
    qsort(Array,n,sizeof(int),compare);
    for (int j=0; j<n; j++)
        printf("%d ",Array[j]);
    printf(" \n");
    //two oppsite pos
    int i=0,j=n-1;
    while(i<j)
    {
        int plus=Array[i]+Array[j];
        if(plus==sum)
        {
            printf("%d%d",i+1,j+1);
            break;
        }
        else if(plus<sum)
            i++;
        else
            j--;
    }
}

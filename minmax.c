#include<stdio.h>
int main()
{
    int n,i;
    int arr[5];
    int minElement = arr[0];  
    int maxElement = minElement;  
    unsigned long int sum1 =0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
       sum1=sum1+arr[i];
       if(arr[i]<minElement)
       minElement=arr[i];
       if(arr[i]>minElement)
       maxElement=arr[i];
       
           
       
    }
    printf("%lu %lu",sum1-maxElement,sum1-minElement);
}

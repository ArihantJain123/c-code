#include<stdio.h>

int main()
{
    int i,avg,sum=0;
    int marks[30]; /*array declaration*/

    for(i=0;i<=29;i++)
    {
        printf("enter marks ");
        scanf("%d",&marks[i]);  /* store data in array*/

    }
    for(i=0;i<=29;i++)
        sum = sum + marks[i];   /*read data in array */
      avg = sum/30;
       printf(" average marks = %d",avg);

       return 0;



}

#include <stdio.h>
int main()
{
     int process[20], burst[20],i,j, n,temp, sum = 0, average;
     printf("Enter the no of process: ");
     scanf("%d", &n);
     printf("Enter the burst of the processes \n ");
     for(i=0; i<n; ++i)
     {
          printf("Enter burst for process%d: ",i+1);
          scanf("%d", &burst[i]);
          printf(" The burst is  \n pid%d =%d \n ", i+1,burst[i]);
     }
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(burst[i]>burst[j])
                {
            temp=burst[i];
            burst[i]=burst[j];
            burst[j]=temp;
                }
         }
     }
      printf("Arranged in the order of the least CPU burst\n ");
      for(i=0; i<n; ++i)
     {
          printf("p%d =%d \n ",i+1,burst[i]);
     }


}

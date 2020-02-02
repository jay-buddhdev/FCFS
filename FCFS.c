#include<stdio.h>

int main()
{
	int p[10],a[10],b[10],f[10],t[10],w[10],i,n;
	float avgt=0,avgw=0;
	
	printf("Enter no of process \n");
	scanf("%d",&n);
	
	printf("Enter Arrival Time \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]\n",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter Burst Time \n");
	for(i=0;i<n;i++)
	{
		printf("b[%d]\n",i);
		scanf("%d",&b[i]);
	}
	
	printf("Finish time is \n");
	for(i=0;i<n;i++)
	{
      if(i==0)
      {
      	f[i]=b[i]+a[i];
      	printf("Finish time for P[%d] is %d \n",i,f[i]);
	  }
	  else
	  {
	  	f[i]=b[i]+f[i-1];
	  		printf("Finish time for P[%d] is %d\n",i,f[i]);
	  	
	  }
	  
	}
		printf("Turn Around Time is \n");
	for(i=0;i<n;i++)
	{
	   t[i]=f[i]-a[i];
	   printf(" Turn Around Time for P[%d] is %d\n",i,t[i]);
	}
	
		printf("Waiting  Time is \n");
	for(i=0;i<n;i++)
	{
	   w[i]=t[i]-b[i];
	   printf(" Waiting  Time for P[%d] is %d\n",i,w[i]);
	}

	for(i=0;i<n;i++)
	{
	   avgt=avgt+t[i];
	   
	}
	avgt=avgt/n;
	printf("Average Turn Around time is %.2f\n",avgt);
		
	for(i=0;i<n;i++)
	{
	   avgw=avgw+w[i];
	}
	avgw=avgw/n;
	 printf("Average Waiting time is %.2f\n",avgw);
}
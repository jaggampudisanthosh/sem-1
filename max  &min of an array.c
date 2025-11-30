#include<stdio.h>
int main()
{
	int arr[100],max,size,i,min;
	printf("enter array size:");
	scanf("%d",&size);
	printf("enter elements in an array %d:\n",i);
	for(i=0;i<size;i++){
	scanf("%d\n",&arr[i]);}
	for(i=0;i<size;i++)
printf("%d\n",arr[i]);
max=arr[0];
for(i=0;i<size;i++)
{
	if(arr[i]>max)
	{max=arr[i];
	
	}
}printf("max of  %d is %d\n\n",i,max);
min =arr[0];
if(arr[i]>min)
{min=arr[i];
}printf("min of %d is %d",i,min);

}

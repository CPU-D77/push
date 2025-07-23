#include<stdio.h>
int main()
{
	int no;
	printf("enter the length of array \n");
	scanf("%d",&no);
	int arr[no];
	int sum=0;
	printf("enter array element\n");
	for(int i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<no;i++)
	{
		if(arr[i]%2==0)
		{
			printf("\neven=%d",arr[i]);
		}
		else
		{
			printf("\n odd=%d",arr[i]);
		}
	}

}
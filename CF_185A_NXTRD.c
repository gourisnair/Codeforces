#include<stdio.h>
int main()
{
	int n,k,i;
	scanf("%d%d",&n,&k);
	int a[n];
	int count= 0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>=a[k-1] && a[i]>0){
			count++;
		}
	}
	printf("%d",count);
}
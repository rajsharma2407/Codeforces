#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);//3
	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);//3
		int arr[n];
		for(int j=0;j<n;j++){
			scanf("%d",&arr[j]);//3 2 2
		}
		int min = 200;
		int max = -1;
		for(int j=0;j<n;j++){
			if(arr[j] > max){
				max=arr[j];
			}
			if(arr[j] < min){
				min=arr[j];
			}
		}
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[j] > min && arr[j]<=max)
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
}
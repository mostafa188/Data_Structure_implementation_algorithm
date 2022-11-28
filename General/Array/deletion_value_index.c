#include<cstdio>

void deletion(int *arr,int &size,int position){
	for(int i=position-1;i<size-1;i++){
		arr[i]=arr[i+1];
	}
	size--;
}
void print(int arr[],int &size){
	for(int i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[]={1,2,4,6,9};
	int size =5;

	int position;
	input:
		printf("Enter position where will be delete : ");
		scanf("%d",&position);
	int length = *(&arr+1)-arr;
	if(position >= length){
		printf("Error deletion !!\n");
		goto input;
	}
	print(arr,size);
	deletion(arr,size,position);
	print(arr,size);

	return 0;
}

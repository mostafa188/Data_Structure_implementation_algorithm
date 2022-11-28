#include<cstdio>

void insertion(int *arr,int &size,int position ,int value){
	size+=1;
	for(int i=size-1;i>=position-1;i--){
		arr[i+1]=arr[i];
	}
	arr[position-1]=value;
}
void print(int arr[],int &size){
	for(int i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[10]={1,2,4,6,9};
	int size =5;

	int value,position;
  input:
    printf("Enter position and value for insertion :");
	  scanf("%d%d",&position,&value);
  if(posution>=capacity){
    printf("Error insertion");
    goto input;
  }
	print(arr,size);
	insertion(arr,size,position,value);
	print(arr,size);

	return 0;
}

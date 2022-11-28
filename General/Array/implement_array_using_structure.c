#include <cstdio>
#include <cstdlib>
typedef struct array{
	int total_size;
	int used_size;
	int *arr;
}array;

void create_array(array *a,int t_size,int need_size){
	a->total_size = t_size;
	a->used_size = need_size;
	a->arr = (int*)malloc(t_size*sizeof(int));

}
void set_up(array *a,int size){
	for(int i=0,n;i<size;i++){
		scanf("%d",&n);
		a->arr[i] = n;
	}
}
void print(array *a,int size){
	for(int i=0;i<size;i++){
		printf("%d\n",a->arr[i]);
	}
}
int main(){
	array arr;
	int t_size,need_size;
	scanf("%d%d",&t_size,&need_size);
	create_array(&arr,t_size,need_size);

	set_up(&arr,need_size);
	print(&arr,need_size);
	return 0;
}

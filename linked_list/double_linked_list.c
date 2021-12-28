#include<stdio.h>
#include<stdlib.h>
struct dbl_item{
	int data;
	struct dbl_item *prev, *next;	
};
struct dbl_item* create_list(const int *arr, int len){
	struct dbl_item *first = NULL;
	struct dbl_item *end = NULL;
	struct dbl_item *new;
	if(len>0){
		new = malloc(sizeof(struct dbl_item));
		new -> data = *arr;
		new -> prev = first;
		first = new;
		end = new;
	}
	for(int i = 1; i<len;i++){
		new = malloc(sizeof(struct dbl_item));
		new -> data = arr[i];
		new -> prev = end;
		new -> next = NULL;
		
		end -> next = new;
		end = new;
	}
	return first;
}
void print_list(const struct dbl_item *first){
	const struct dbl_item *item = first;
	while(item -> next != NULL){
		printf("%d ", item ->data);
		item = item -> next;
	}
}
int main(void){
	int arr[500];
	for(int i = 0; i<500;i++){
		arr[i] = 250-i;
	}

	struct dbl_item *first = NULL;
	first = create_list(arr, 500);
	print_list(first);
	return 0;
}


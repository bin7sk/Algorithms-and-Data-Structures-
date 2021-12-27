#include<stdio.h>
#include<stdlib.h>
/*
 Functions that can:
 	- Create linked list;
 	- Sum all elements in list;
 	- Count elements;
	- delete negatives from list;
	- delete list.
*/
struct item{
	int data;
	struct item *next;
};
struct item* array_to_list(int *arr, int len){
//list grows in the end
	struct item *first = NULL, *last = NULL, *tmp;
	for(int i=0; i < len; i++){
		tmp = malloc(sizeof(struct item));
		tmp -> data = arr[i];
		tmp -> next = NULL;
		if(last){
			last -> next = tmp;
			last = last -> next;
		} 
		else{
			first = last = tmp;
		}
	}
	return first;
}
struct item* array_to_rlist(int *arr, int len){
//recursion
	if(!len) 
		return NULL;
	struct item *tmp;
	tmp = malloc(sizeof(struct item));
	tmp -> data = *arr;
	tmp -> next = array_to_rlist(arr + 1, len - 1);
	return tmp;
}
int sum_list(const struct item *list){
	int sum = 0;
	const struct item *tmp;
	for(tmp = list; tmp; tmp = tmp -> next){
		sum += (tmp -> data);
	}
	return sum;
}
void delete_list(struct item * list){
	while(list){
		struct item *tmp = list -> next;
		free(list);
		list = tmp;
	}
}
void delete_negatives_from_list(struct item **pcur){
	while(*pcur){
		if((*pcur) -> data < 0){
			struct item *tmp = *pcur;
			*pcur = (*pcur)->next;
			free(tmp);
		}
		else{
			pcur = &(*pcur) -> next;
		}
	}
}
int count_list(const struct item *first){
	int counter = 0;
	const struct item *tmp = first;
	while(tmp){
		counter++;
		tmp = tmp -> next;
	}
	return counter;
}
int main(void){
	int arr1[] = {0,1,2,3,-1,4,5,-5};
	struct item *str;
	str = array_to_list(arr1,sizeof(arr1)/sizeof(*arr1));
	printf("sum of linked list = %d\nwith size %d\n", sum_list(str), count_list(str));
	delete_negatives_from_list(&str);
	printf("sum of linked list = %d\nwith size %d\n", sum_list(str), count_list(str));
	return 0;
}

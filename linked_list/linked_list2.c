#include <stdio.h>
#include <stdlib.h>

struct element{
	int data;
	struct element *next;
};

struct element* create_list(FILE *file){
	if(file==NULL) return NULL;
	struct element *first=NULL, *last=NULL;
	int data = 0;
	if(fscanf(file, "%d", &data)!=EOF){
		first = last = malloc(sizeof(struct element));
		first->data = data;
	}
	else{return NULL;}
	while(fscanf(file, "%d", &data)!=EOF){
		last->next = malloc(sizeof(struct element));
		last = last->next;
		last->data = data;
	}
	if(first==NULL) return NULL;
	last->next = NULL;
	return first;
}
void print_list(struct element* list){
	int i = 0;
	while(list){
		if(i==10){
			printf("\n");
			i = 0;
		}
		i++;
		printf("%d-->", list->data);
		list = list->next;
	}
	putchar('\n');
}
void delete_list(struct element *list){
	struct element *prev;
	while(list){
		prev = list;
		list = list->next;
		free(prev);
	}
}
struct element* reverse_list(struct element* first){
	struct element *prev = NULL;
	while(first){
		struct element *tmp = first->next;
		first->next = prev;
		prev = first;
		first = tmp;
	}	
	return prev;
}
int main(void){
	FILE *file = fopen("numbers.txt", "r");
	if(!file){
		perror("numbers.txt");
		return 1;
	}
	struct element *list = NULL;
	while(1){
		int c = getchar();
		switch(c){
			case 'c':
			//create list
				if(!list){
					list = create_list(file);	
				}
				else{
					printf("list already exists!\n");
				}
				break;
			case 'd':
			//delete list
				delete_list(list);
				break;
			case 'p':
			//print list
				print_list(list);
				break;
			case 'r':
				list = reverse_list(list);
				break;
			default:
			//do nothing
				break;
		}
	}
	return 0;
}

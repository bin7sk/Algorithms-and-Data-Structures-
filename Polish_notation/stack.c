#include<stdlib.h>
struct stack{
	int i; // free element
	unsigned int capacity;
	int *arr;
};
struct stack* createStack(unsigned int capacity){
	struct stack* s;
	s = (struct stack*) malloc(sizeof(struct stack));
	if(!s) return NULL;
	s->capacity=capacity;
	s->arr = (int*) malloc(sizeof(int) * capacity);
	if(!s->arr){
		free(s);
		return NULL;
	}
	s->i = 0;
	return s;
}
int destroyStack(struct stack* s){
	free(s->arr);
	free(s);
	return 0;
}
int push(int in, struct stack *s){
	if((s->i)<(s->capacity)){
		s->arr[s->i] = in;
		(s->i)++;
		return 0;	
	}
	else{
		return 1;
	}
}
int isempty(struct stack *s){
	return (s->i)==0;
}
int pop(struct stack *s){
	if(s->i>0) (s->i)--;
	return (s->arr)[s->i];
}



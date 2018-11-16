#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	void* data_ptr;
	struct node* link;
} STACK_NODE;

typedef struct stack {
	int count;
	STACK_NODE* top;
} STACK;

STACK* create_stack();
int push(STACK* stack, void* in);
void* pop(STACK* stack);

int main(){
	STACK* s1 = create_stack();
	printf("stack s1's size = %d\n",s1->count);
	
	int a = 10;
	int b = 20;
	char c = "c";

	push(s1,&a);
	printf("stack s1's size = %d\n",s1->count);
	push(s1,&b);
	printf("stack s1's size = %d\n",s1->count);
	push(s1,&c);
	printf("stack s1's size = %d\n",s1->count);
	
	int* temp1 = (int*)pop(s1);
	printf("pop: %d\n",*temp1);
	int* temp2 = (int*)pop(s1);
	printf("pop: %d\n",*temp2);
}

STACK* create_stack(){
	STACK* stack = (STACK*)malloc(sizeof(STACK));
	if( !stack )// need check!
		return 0;
	stack->count = 0;
	stack->top = 0;
	return stack;
}
int push(STACK* stack, void* in){
	printf("pushing data into stack...");
	STACK_NODE* node = (STACK_NODE*)malloc(sizeof(STACK_NODE));
	if( !node )
		return 0;

	node->data_ptr = in;
	node->link = stack->top; 
	stack->top = node;
	stack->count++;
}
void* pop(STACK* stack){
	printf("poping data from stack...");
	if(stack->count == 0)
		return 0;
	else{
		STACK_NODE* temp = stack->top;
		void* data_out = stack->top->data_ptr;
		stack->top = stack->top->link;
		free(temp);
		(stack->count)--;
		return data_out;
	}
}


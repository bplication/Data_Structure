# Data_Structure
about data structure

## stack.c
	* STACK* create_stack()
  	- stack을 생성
  
	* int push(STACK* stack, void* in)
  	- stack에 데이터 in을 입력 해줌

	* void* pop(STACK* stack)
  	- stack에 맨위(top)의 데이터를 출력해옴
 --- 
 
## queue.c
	* QUEUE* create_queue()
  	- queue를 생성
  
	* bool enqueue(QUEUE* queue,void* in)
  	- queue 의 rear 에 data in을 입력하고 성공결과를 bool type으로 받아옴
  
	* void* dequeue(QUEUE* queue)
  	- queue 의 front 에서 data를 받아오고 front node를 삭제함
  ---
  
## llist.c
	* LLIST* create_list()
  	- linked list를 생성
  
	* bool add_node_at(
				LLIST* list,
				unsigned int index,
				void* data)
  	- list에 index 지점에 data를 가진 node를 추가 해 줌
  
	* bool del_node_at(
				LLIST* list,
				unsigned int index)
  	- list에서 index 부분의 노드를 지워줌
  ---

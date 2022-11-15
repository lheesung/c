#include <stdio.h>
#include <stdlib.h>
typedef int element;
//1. 연결리스트 구조체 정의
typedef struct Node{
	element data;
	struct Node* link;
}Node;
Node* insertFirst(Node* head, element data){
	//2. 첫위치 삽입 코드 작성 link = next
	Node *p = (Node *)malloc(sizeof(Node));
	p -> data = data;
	p -> link = head;
	head = p;
	return head;
}
Node* insert(Node* head, Node* pre, element data){
	//3. 중간위치(pre 다음 위치 )삽입
	Node* p = (Node*)malloc(sizeof(Node));
	p -> data = data;
	p -> link = pre -> link;
	pre -> link = p;
	return head;
}
Node* deleteFirst(Node* head){
	//4. 첫위치 삭제 코드 작성
	Node* removed = head;
	head = head -> link;
	free(removed);
	removed = NULL; // 안해주면 쓰레기값
	return head;
}
Node* delete(Node* head, Node* pre){
	//5.프리가 가리키는 다음 노드를 삭제
	Node* removed = pre -> link; // Node* removed = (*pre).next
	pre -> link = removed -> link;
	free(removed);
	removed = NULL;
	return head;
}
void printList(Node* head){
	Node* p = head;
	while (p!=NULL){
		printf("%d->",p->data);
		p = p -> link; // 중 요 중 요 중 요 중 요 중 요 중 요 중 요 중 요 중 요 중 요 시 험 시 험 다음 노드를 구해라 문제
	}
	//6.head가 널이 아니면 노드데이터 출력
	printf("NULL\n");
		
}
int main(){
	Node* head = NULL;
	Node* temp = NULL;
	printf("[첫 위치 삽입]\n");
	for(int i = 0;i<5;i++){
		head = insertFirst(head, i); //7. 첫위치에 i 삽입
		printList(head);
		if (i==2) temp = head; //데이터가 2인 노드 주소 저장

	}
	printf("[중간위치 삽입]\n");
	//8. temp 다음 위치에 100 저장
	head = insert(head, temp, 100);
	
	printList(head);
	printf("[중간위치 삭제]\n");
	head = delete(head, temp);
	
	//9. temp 다음위치 노드 삭제
	printList(head);
	printf("[첫 위치 삭제]\n");
	for(int i=0;i<5;i++){
		//10. 첫위치 노드 삭제
		head = deleteFirst(head);
		printList(head);
	}
	return 0;
}
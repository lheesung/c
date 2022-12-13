#include <stdio.h>
#define MAX_VERTEX 30

//그래프노드 구조체 정의
typedef struct GraphNode{
	int vertex; // vertex == 꼭짓점
	struct GraphNode* link; // next / node 하나
}GraphNode;

//그래프타입 구조체 정의
typedef struct GraphType{
	int n; // 점 개수
	GraphNode* adjList[MAX_VERTEX]; // 인접리스트
} GraphType;

void createGraph(GraphType* g)
{
	int v;
	g->n = 0;//정점 개수 0
	for(v=0; v< MAX_VERTEX; v++) 
		g->adjList[v] = NULL; //인접리스트 배열 주소값 초기화
}

void insertVertex(GraphType* g, int v)
{
	if(((g->n)+1)>MAX_VERTEX){
		printf("\n 그래프 정점의 개수를 초과하였습니다!");
		return;
	}
	g->n++;//정점 개수 1증가
}

void insertEdge(GraphType* g, int u, int v)
{
	GraphNode* node;
	if(u >= MAX_VERTEX || v == MAX_VERTEX) {
		printf("\n 그래프에 없는 정점입니다!");
		return;
	}
	node = (GraphNode*)malloc(sizeof(GraphNode)); //노드타입 동적 할당 / 시작주소 저장
	node->vertex = v; //정점 저장
	/*
	if(g->adjList[u] == NULL){
		g->adjList[u] = node;
		node -> link = NULL;
	}
	else{
		GraphNode* p =  (GraphNode*)(sizeof(GraphNode));
		for(p = g->adjList[u]; p->link !NULL이면; p -> link); // p의 값을 맨 끝 노드주소로 저장
		p->link = node;// head는 바뀌지 않음 //배열에 저장된 정점 리스트의 처음 주소를 저장
		//현재 추가된 노드의 주소를 리스트의 주소값으로 저장;
	}*/
	
	node->link = g->adjList[u];
	g->adjList[u]=node;
	
	
}

void print_adjList(GraphType* g)
{
	int i;
	GraphNode* p;
	for(i=0; i<g->n; i++){
		printf("\n정점 %C의 인접리스트 ", i+65);
		p= g->adjList[i]; //i번째 정점의 시작주소 저장
		while(p!=NULL){
			printf(" -> %c", p -> vertex+ 'A');  //정점 0~4를 A~D로 출력
			p = p-> link;//다음 링크로 이동	
		}
	}
}

int main()
{
	int i;
	GraphType *G;
	G = (GraphType *)malloc(sizeof(GraphType));

	createGraph(G); 
	for(i=0; i<4; i++)
		insertVertex(G, i);
	insertEdge(G, 0, 1);
	insertEdge(G, 1, 3);
	insertEdge(G, 1, 2);
	insertEdge(G, 1, 0);
	insertEdge(G, 2, 3);
	insertEdge(G, 2, 1);
	insertEdge(G, 3, 2);
	insertEdge(G, 3, 1);
	
	printf("<G의 인접 리스트>");
	print_adjList(G);
		
  return 0;
} 
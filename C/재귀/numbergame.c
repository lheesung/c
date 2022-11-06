#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a, b, x, y, cnt, chance,command,help; // 선언

void randomNum(int k, int q) {
  printf("무슨 수일까요? : ");
  scanf("%d", &y); // 답 입력
  puts("");
  cnt++; //입력횟수 + 1
  if (y != k) { // 입력이 틀렸을 때
    if (y > k) // 입력이 정답보다 클 때
      printf("조금 더 작은 수에요(남은 횟수 : %d/%d)\n", cnt, q); //남은 횟수와 대소관계 출력
    if (y < k) // 입력이 정답보다 작을 때
      printf("조금 더 큰 수에요(남은 횟수 : %d/%d)\n", cnt, q); // 남은 횟수와 대소관계 출력
  }
  else if (y == k) { // 입력이 정답과 같을 때 
    printf("정답!\n%d번만에 맞췄어요!\n", cnt); // 정답과 몇번만에 맞췄는지 출력
    return; // 몇 번만에 맞췄는지 출력 한 뒤 함수를 종료
  } 
  if (cnt == q) {  // 입력횟수가 바닥났을때
    printf("게임오버!");
    return; // 게임오버를 출력한 뒤 함수 종료
  }
  randomNum(k, q); // 위 조건을 통과한 뒤 다시 재귀 자신 호출
}

void game(){
  cnt=0;
  printf("입력횟수를 입력해주세요 : ");
  scanf("%d", &chance); // 입력 기회의 횟수를 입력
  puts("");
  srand(time(NULL));
  x = rand() % (b - a + 1) + a; // 범위가 a~b 인 난수
  randomNum(x, chance); // 함수 호출
  // 게임 종료 시 호출 한 곳으로 돌아옴
  printf("다시 플레이 하실건가요? yes=1 / no=0 : ");
  scanf("%d", &command); // 리플레이 여부 입력
  
  if(command)
    game(); // 커맨드가 참이라면 자기자신을 호출하여 다시 게임 플레이
  else if(!command){
    printf("게임 끝!"); // 커맨드가 호출된 메인함수로 돌아가 종료
    return;
  }
}

int main(){

  printf("게임방법을 보실건가요? yes = 1\n");
  printf("시작하려면 아무 숫자나 누르세요(1 제외)\n");
  scanf("%d",&help);
  if(help == 1){
    printf("----------------------------------------------------------------------\n");
    printf("                             <도움말>\n");
    printf("1. 먼저 난수의 범위를 n m 형식으로 입력해주세요\n");
    printf("2. 몇 번만에 맞출건지 도전 횟수를 입력해주세요\n");
    printf("3. 입력 횟수가 바닥나기 전에 무슨 수 인지 맞춰보세요\n");
    printf("4. 게임오버가 되면 다시시작할지 1 or 0 을 입력해주세요\n");
    printf("----------------------------------------------------------------------\n");
  }
  
  printf("범위를 입력해주세요(n~m) : ");
  scanf("%d %d", &a, &b); // 랜덤으로 뽑을 수의 범위를 입력
  if (b < a){ // a~b 이기에 b가a보다 작으면 프로그램을 종료
    printf("잘못된 범위입니다. 프로그램을 다시 시작해주세요.");
    return 0; // 종료
  }

  game(); // 재귀 호출
  
}
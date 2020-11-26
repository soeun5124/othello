#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gameboard[N][N];

void init_otheelo() { //게임초기화 함수 
	int i,j;
	for (i=0;i<N;i++) {
		for(j=0;j<n;j++){
			gameboard[i][j]=0;
		}
	}
}

void print_othello() { //배치상태 출력함수
	int i,j=0;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%2d",gameboard[i][j]);
		}
		printf("\n");
	}
}

int isGameEnd(int gameboard[N][N]){ //게임종료 함수 
	return 0;
}

void check_result(int gameboard[N][N]){
	int count_1=0,count_2=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(gameboard[i][j] == 1){
				count_1++;
			}
			else if(gamedboard[i][j] == 2){
				count_2++;
			}
		}
	}
	if (count_1<count_2){
		printf("player2의 승리");
	}
	else if(count_1>count_2){
		printf("player1의 승리");
	}
	else
	 printf("비겼습니다"); 
}

int main(int argc, char *argv[]) {
	
	int row_1, col_1;
	int row_2, col_2;
	init_othello();
	
	while(isGameend(gameboard) == 0) {
		print_otheelo(gameboard);
		
		printf("player_1 배치할칸의 행을 입력하시오:");
		scanf("%d",&row_1);
		printf("player_1 배치할 칸의 열을 입력하시오:");
		scanf("%d",&col_1); 
		
		printf("player_2 배치할칸의 행을 입력하시오:");
		scanf("%d",&row_2);
		printf("player_2 배치할 칸의 열을 입력하시오:");
		scanf("%d",&col_2);
		
		
	} 
	
	check_result(); //결과출력 
	
}

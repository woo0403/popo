#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void gambang();
void desk();	//1.책상 
void bathroom();		//2. 화장실 
void pawoo();	//3. 파우치 
void zapan();	//4. 자판기 
void daemoon();	//5. 대문 
void gogobang;	//6. 교도관의 방 
void door();	//7. 감방 문 
void door_password();
void out_side();
void hallway();
void human();

int binilopen = FALSE;	//비닐봉투 확인여부 
int red = FALSE; //교도관의방 확인 여부 
int main() {
	int menu;
	
	while(1) {
		printf("감옥탈출\n\n"); 
		printf("1. 입장\n");
		printf("0. 종료\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				intro();
				gambang();
				break;
			case 0:
				return 0;
			default:
				printf("입력 오류\n\n");
				break;
		}
	}
	
}

void intro()
{


printf("그가 눈을 떠보니 그는 아무도 없는 감방 안이였다\n");
printf("사용 안한지 오래되어보였고 벽 곳곳에 금이 가 있었다.\n");
printf("그는 밖의 상황을 알기위해서 일단 감방 안에서 나가기로 했다.\n");


}

void gambang() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("[감방]\n\n");
		printf("방 안에서 할 수 있는 것들을 찾아보자.\n\n");
		printf("1. 화장실   2. 파우치 \n");
		printf("3. 책상     4. 문     \n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		
		void bathroom() {//1. 화장실 
	int menu;
	
	while(1) {
		system("cls");
		printf("[감방]-[화장실]\n\n");
		printf("정화조안쪽에 무언가 있다.\n\n");
		printf("1. 찾아본다.\n");
		printf("2. 찾아보지않는다.\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(binilpoen)  {
					printf("\n이미 찾아보았다.\n\n");
				} else {
					printf("비닐봉투가 있다.\n") 
					printf("\n1. 열어본다.\n");
					printf("2. 열어보지 않는다.\n\n");
					printf(">> ");
					scanf("%d", &menu);
						switch(menu) {
					
				}
				system("pause");
				break;
						default:
							printf("\n결정을 못했다. 돌아가자.\n\n");
							break;
					}	
				}
				system("pause");
				break;		





		void pawwo() {//1. 화장실 
	int menu;
	
	while(2) {
		system("cls");
		printf("[감방]-[파우치]\n\n");
		printf("파우치 안에 무언가가 있다.\n\n");
		printf("1. 찾아본다.\n");
		printf("2. 찾아보지않는다.\n");
		printf(">> ");
		scanf("%d", &menu);
		
		
		
		
		
		
		
				void desk() {//1. 화장실 
	int menu;
	
	while(3) {
		system("cls");
		printf("[감방]-[책상]\n\n");
		printf("책상이다.\n\n");
		printf("1. 찾아본다.\n");
		printf("2. 찾아보지않는다.\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		
		
		
				void door()//1. 화장실 
	int menu;
	
	while(4) {
		system("cls");
		printf("[감방]-[문]\n\n");
		printf("문이 열려있다.\n\n");
		printf("1. 감방안을 더 찾아본다.\n");
		printf("2. 문을 열고 나가본다.\n");
			printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 2:
				
					printf("복도로 나왔다.\n") 
					printf("1. 교도관의 방.\n\n");
					printf("2. 자판기.\n\n");
					printf("3. 정문.\n\n");
					printf("4. 감방 안으로 돌아간다.\n\n");
					printf(">> ");
					scanf("%d", &menu);
						switch(menu) {
							switch(menu) {
			case 1:
				printf("\n방이 어질러져 있다?\n");
				printf("\n사물함이 있다. 확인 해볼까?\n\n");
					printf("1.확인해본다.\n\n"); 
					printf("2.확인하지 않는다.\n\n"); 
					printf(">> ");
					scanf("%d", &menu);
				if(red)  {
					printf("\n빨간약과 파란약이 있다.\n\n");
				} else {
					printf("\n이미 찾아본 곳 이다.\n");
				}
				system("pause");
				break;
				break;
			case 2:
				printf("\n자판기가 있다. 아직 사용할 수 있을 것 같다.\n\n");
				printf("\n사용해보자.\n\n");
				
				printf("\n1.터미네이터 포스터.\n\n");
				printf("\n2.매트릭스 포스터.\n\n");
				printf("\n3.아이로봇 포스터.\n\n");
							printf(">> ");
							scanf("%d", &menu);
							
							switch(menu) {
								case 1: 
									printf("\n1.터미네이터 포스터를 얻었다.\n");
									break;
								case 2:
									printf("\n2.매트릭스 포스터를 얻었다.\n\n");
									printf("\n뒤에 무언가 적혀있다.\n\n");
									printf("\n8@3=27 7@4=34 3@5=25 1200@5=?.\n\n");
									break;
								case 3:
									printf("\n3.아이로봇 포스터를 얻었다.\n")
									break; 
							default:
								printf("\n결정을 못했다. 돌아가자.\n\n");
								break;
							}
							break;
						default:
							printf("\n결정을 못했다. 돌아가자.\n\n");
							break;
					
				break;
				
			case 3:
				printf("\n정문이 있다. 밖으로 나갈려면 저기로 가야할까?\n\n");
				void door(){//6. 출입문 
					int menu;
	
					while(1) {
						system("cls");
						printf("이 교도서를 나갈 수 있는 유일한 문인 것 같다.\n");
						printf("문 밖에서 무언가가 느껴진다.\n\n");
		
						printf("1. 비밀번호를 입력한다\n");
						printf("0. 돌아가기\n");
		
						printf(">> ");
						scanf("%d", &menu);
		
						switch(menu) {
							case 1:
								door_password();
								break;
							case 0:
								return;
							default:
								printf("\n# ERROR # 입력값 오류\n\n");
								break;
					}
						system("pause");
	}	
}	

					void door_password() {
						char pass[5] = "6010", temp[5];
	
						system("cls");
						printf("\n\n      [ PASSWORD ]\n\n");
						printf(">> ");
						scanf("%s", &temp);
						
						if(!strcmp(pass, temp)) {
							system("cls");
							printf("\n\n문이 열린다.\n\n");
							printf("드디어 밖에 나갈 수 있게 되었다 문 열리는 틈새로 빛이 들어오고 있다.\n");
							printf("그리고 그 빛의 중심에는 한 노인이 있었다.\n");
							printf("이제 선택을 해야 하지 않겠나? 라고 노인이 말한 후 주인공은 의식을 잃었다.\n\n");
							printf("# -다음 이야기에- #\n\n");
							system("pause");
							exit(0);
						} else {
							printf("\n\n# ERROR # PASSWORD FAIL\n\n");
							return;	
						}
					}	
						break;
				}
				system("pause");
				break

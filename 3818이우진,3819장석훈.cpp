#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void gambang();
void desk();	//1.å�� 
void bathroom();		//2. ȭ��� 
void pawoo();	//3. �Ŀ�ġ 
void zapan();	//4. ���Ǳ� 
void daemoon();	//5. �빮 
void gogobang;	//6. �������� �� 
void door();	//7. ���� �� 
void door_password();
void out_side();
void hallway();
void human();

int binilopen = FALSE;	//��Һ��� Ȯ�ο��� 
int red = FALSE; //�������ǹ� Ȯ�� ���� 
int main() {
	int menu;
	
	while(1) {
		printf("����Ż��\n\n"); 
		printf("1. ����\n");
		printf("0. ����\n");
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
				printf("�Է� ����\n\n");
				break;
		}
	}
	
}

void intro()
{


printf("�װ� ���� ������ �״� �ƹ��� ���� ���� ���̿���\n");
printf("��� ������ �����Ǿ���� �� ������ ���� �� �־���.\n");
printf("�״� ���� ��Ȳ�� �˱����ؼ� �ϴ� ���� �ȿ��� ������� �ߴ�.\n");


}

void gambang() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("[����]\n\n");
		printf("�� �ȿ��� �� �� �ִ� �͵��� ã�ƺ���.\n\n");
		printf("1. ȭ���   2. �Ŀ�ġ \n");
		printf("3. å��     4. ��     \n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		
		void bathroom() {//1. ȭ��� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[ȭ���]\n\n");
		printf("��ȭ�����ʿ� ���� �ִ�.\n\n");
		printf("1. ã�ƺ���.\n");
		printf("2. ã�ƺ����ʴ´�.\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(binilpoen)  {
					printf("\n�̹� ã�ƺ��Ҵ�.\n\n");
				} else {
					printf("��Һ����� �ִ�.\n") 
					printf("\n1. �����.\n");
					printf("2. ����� �ʴ´�.\n\n");
					printf(">> ");
					scanf("%d", &menu);
						switch(menu) {
					
				}
				system("pause");
				break;
						default:
							printf("\n������ ���ߴ�. ���ư���.\n\n");
							break;
					}	
				}
				system("pause");
				break;		





		void pawwo() {//1. ȭ��� 
	int menu;
	
	while(2) {
		system("cls");
		printf("[����]-[�Ŀ�ġ]\n\n");
		printf("�Ŀ�ġ �ȿ� ���𰡰� �ִ�.\n\n");
		printf("1. ã�ƺ���.\n");
		printf("2. ã�ƺ����ʴ´�.\n");
		printf(">> ");
		scanf("%d", &menu);
		
		
		
		
		
		
		
				void desk() {//1. ȭ��� 
	int menu;
	
	while(3) {
		system("cls");
		printf("[����]-[å��]\n\n");
		printf("å���̴�.\n\n");
		printf("1. ã�ƺ���.\n");
		printf("2. ã�ƺ����ʴ´�.\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		
		
		
				void door()//1. ȭ��� 
	int menu;
	
	while(4) {
		system("cls");
		printf("[����]-[��]\n\n");
		printf("���� �����ִ�.\n\n");
		printf("1. ������� �� ã�ƺ���.\n");
		printf("2. ���� ���� ��������.\n");
			printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 2:
				
					printf("������ ���Դ�.\n") 
					printf("1. �������� ��.\n\n");
					printf("2. ���Ǳ�.\n\n");
					printf("3. ����.\n\n");
					printf("4. ���� ������ ���ư���.\n\n");
					printf(">> ");
					scanf("%d", &menu);
						switch(menu) {
							switch(menu) {
			case 1:
				printf("\n���� �������� �ִ�?\n");
				printf("\n�繰���� �ִ�. Ȯ�� �غ���?\n\n");
					printf("1.Ȯ���غ���.\n\n"); 
					printf("2.Ȯ������ �ʴ´�.\n\n"); 
					printf(">> ");
					scanf("%d", &menu);
				if(red)  {
					printf("\n������� �Ķ����� �ִ�.\n\n");
				} else {
					printf("\n�̹� ã�ƺ� �� �̴�.\n");
				}
				system("pause");
				break;
				break;
			case 2:
				printf("\n���ǱⰡ �ִ�. ���� ����� �� ���� �� ����.\n\n");
				printf("\n����غ���.\n\n");
				
				printf("\n1.�͹̳����� ������.\n\n");
				printf("\n2.��Ʈ���� ������.\n\n");
				printf("\n3.���̷κ� ������.\n\n");
							printf(">> ");
							scanf("%d", &menu);
							
							switch(menu) {
								case 1: 
									printf("\n1.�͹̳����� �����͸� �����.\n");
									break;
								case 2:
									printf("\n2.��Ʈ���� �����͸� �����.\n\n");
									printf("\n�ڿ� ���� �����ִ�.\n\n");
									printf("\n8@3=27 7@4=34 3@5=25 1200@5=?.\n\n");
									break;
								case 3:
									printf("\n3.���̷κ� �����͸� �����.\n")
									break; 
							default:
								printf("\n������ ���ߴ�. ���ư���.\n\n");
								break;
							}
							break;
						default:
							printf("\n������ ���ߴ�. ���ư���.\n\n");
							break;
					
				break;
				
			case 3:
				printf("\n������ �ִ�. ������ �������� ����� �����ұ�?\n\n");
				void door(){//6. ���Թ� 
					int menu;
	
					while(1) {
						system("cls");
						printf("�� �������� ���� �� �ִ� ������ ���� �� ����.\n");
						printf("�� �ۿ��� ���𰡰� ��������.\n\n");
		
						printf("1. ��й�ȣ�� �Է��Ѵ�\n");
						printf("0. ���ư���\n");
		
						printf(">> ");
						scanf("%d", &menu);
		
						switch(menu) {
							case 1:
								door_password();
								break;
							case 0:
								return;
							default:
								printf("\n# ERROR # �Է°� ����\n\n");
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
							printf("\n\n���� ������.\n\n");
							printf("���� �ۿ� ���� �� �ְ� �Ǿ��� �� ������ ƴ���� ���� ������ �ִ�.\n");
							printf("�׸��� �� ���� �߽ɿ��� �� ������ �־���.\n");
							printf("���� ������ �ؾ� ���� �ʰڳ�? ��� ������ ���� �� ���ΰ��� �ǽ��� �Ҿ���.\n\n");
							printf("# -���� �̾߱⿡- #\n\n");
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

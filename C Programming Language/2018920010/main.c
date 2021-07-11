#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "book.h"
#include <string.h>

void search_book(char *book_name, int *book_year, char *writ_name, char *publ_name, int *book_numb, char *borr);
void add_book(char *book_name, int book_year, char *writ_name, char *publ_name, int book_numb, char(borr));
int borrow_book(char borr);
int return_book(char *borr);
void search(int k, char *user_search, char *book_name, int book_year, char *writ_name, char *publ_name, int book_numb, int borr);

int main()
{
	int choice;
	char book_name[100], writ_name[100], publ_name[100], borr[100];
	int book_numb[100], resu[100], book_year[100];
	FILE *fp = NULL;
	if ((fp = fopen("a.txt", "r+")) == NULL)
	{
		printf("���Ͽ��½���\n");
		exit(1);
	}
	printf("������������ �湮�Ͻ� ���� ȯ���մϴ�. \n");
	while (1)
	{
		printf("���Ͻô� �۾��� ��ȣ�� �������ּ���. \n");
		printf("1. ���� �˻� \n");
		printf("2. ���� �߰� \n");
		printf("3. ���� ���� \n");
		printf("4. ���� �ݳ� \n");
		printf("5. ���� \n");
		scanf("%d", &choice);
		printf("\n");

		if (choice == 1)
			search_book(book_name, book_year, writ_name, publ_name, book_numb, resu, borr);
		else if (choice == 2)
			add_book(book_name, book_year, writ_name, publ_name, book_numb, borr);
		else if (choice == 3)
			borrow_book(borr);
		else if (choice == 4)
			return_book(borr);
		else if (choice == 5)
		{
			printf("�������� ���α׷��� �̿����ּż� �����մϴ�.");
			break;
		}
		else
		{
			printf("�ٽ� �Է����ּ���.\n");
		}
	}
	system("pause");
	return 0;
}

void search_book(char *book_name, int *book_year, char *writ_name, char *publ_name, int *book_numb, char *borr)
{
	int search_choice;
	int i;
	int k = 0;
	char user_search[100];
	printf("� �׸��� �˻��Ͻðڽ��ϱ�?\n");
	printf("1. ����\n2. �۰�\n3.���ǻ�\n4.���ǳ⵵\n5.������ȣ\n6.����\n");
	scanf("%d", &search_choice);
	if (search_choice == 1)
	{
		printf("������ �Է����ֽʽÿ�.\n");
		scanf("%s", user_search);
		printf("�˻��Ͻ� �����Դϴ�.\n");
		for (i = 0; i < 100; i++)
		{
			search(k, user_search, book_name, book_year, writ_name, publ_name, book_numb, borr);
		}
	}
	else if (search_choice == 2)
	{
		printf("�۰��� �Է����ֽʽÿ�.\n");
		scanf("%s", user_search);
		printf("�˻��Ͻ� �����Դϴ�.\n");
		for (i = 0; i < 100; i++)
		{
			search(k, user_search, book_name, book_year, writ_name, publ_name, book_numb, borr);
		}
	}
	else if (search_choice == 3)
	{
		printf("���ǻ縦 �Է����ֽʽÿ�.\n");
		scanf("%s", user_search);
		printf("�˻��Ͻ� �����Դϴ�.\n");
		for (i = 0; i < 100; i++)
		{
			search(k, user_search, book_name, book_year, writ_name, publ_name, book_numb, borr);
		}
	}
	else if (search_choice == 4)
	{
		printf("���ǳ⵵�� �Է����ֽʽÿ�.\n");
		scanf("%d", user_search);
		printf("�˻��Ͻ� �����Դϴ�.\n");
		for (i = 0; i < 100; i++)
		{
			search(k, user_search, book_name, book_year, writ_name, publ_name, book_numb, borr);
		}
	}
	else if (search_choice == 5)
	{
		printf("������ȣ�� �Է����ֽʽÿ�.\n");
		scanf("%d", user_search);
		printf("�˻��Ͻ� �����Դϴ�.\n");
		for (i = 0; i < 100; i++)
		{
			search(k, user_search, book_name, book_year, writ_name, publ_name, book_numb, borr);
		}
	}
	else if (search_choice == 6)
	{
		printf("�ٽ� �Է����ּ���.");
	}
}

void add_book(char(*book_name), int(*book_year), char(*writ_name), char(*publ_name), int(*book_numb), char(*borr))
	{
		printf("������ �߰��մϴ�.\n");
		printf("���� ���� : ");
		scanf("%s", book_name);
		printf("\n");

		printf("���ǳ⵵ : ");
		scanf("%d", book_year);
		printf("\n");

		printf("�۰� �̸� : ");
		scanf("%s", writ_name);
		printf("\n");

		printf("���ǻ� �̸� : ");
		scanf("%s", publ_name);
		printf("\n");

		printf("���� ��ȣ : ");
		scanf("%d", book_numb);
		printf("\n");

		printf("���� �߰��� �Ϸ�Ǿ����ϴ�.");
}

int borrow_book(char *borr)
	{
		int book_numb;
		printf("������ �����մϴ�.\n");
		printf("������ ���ϴ� ������ ��ȣ�� �Է����ּ���.\n");
		printf("���� ��ȣ : ");
		scanf("%d", &book_numb);
		if (*borr == 'y')
		{
			*borr = 'n';
			printf("������ ���������� ����Ǿ����ϴ�.\n");
		}
		else
		{
			printf("�̹� ����� �����Դϴ�.\n");
		}
		return 0;
}

int return_book(char *borr)
	{
		int book_numb;
		printf("������ �ݳ��Ѵϴ�.\n");
		printf("�ݳ��� ���ϴ� ������ ��ȣ�� �Է����ּ���.\n");
		printf("���� ��ȣ : ");
		scanf("%d", &book_numb);
		if (*borr == 'n')
		{
			*borr = 'y';
			printf("������ ���������� �ݳ��Ǿ����ϴ�.\n");
		}
		else
		{
			printf("�̹� �ݳ��� �����Դϴ�.\n");
		}
		return 0;
}

void search(int k, char *user_search, char *book_name, int book_year, char *writ_name, char *publ_name, int book_numb, int borr)
	{
		for (k = 0; k < 100; k++) {
			if (!strcmp(user_search, book_name[k])) {
				printf("å ���� : %s\n���ǳ⵵ : %d\n������ : %s\n���ǻ� : %s\n������ȣ : %d\n���Ⱑ�ɿ��� : %d\n", book_name, book_year, writ_name, publ_name, book_numb, borr);
			}
			else {
				printf("å�� �����ϴ�.");
			}
		}
}
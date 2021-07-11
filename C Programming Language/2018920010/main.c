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
		printf("파일오픈실패\n");
		exit(1);
	}
	printf("수현도서관에 방문하신 것을 환영합니다. \n");
	while (1)
	{
		printf("원하시는 작업의 번호를 선택해주세요. \n");
		printf("1. 도서 검색 \n");
		printf("2. 도서 추가 \n");
		printf("3. 도서 대출 \n");
		printf("4. 도서 반납 \n");
		printf("5. 종료 \n");
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
			printf("도서관리 프로그램을 이용해주셔서 감사합니다.");
			break;
		}
		else
		{
			printf("다시 입력해주세요.\n");
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
	printf("어떤 항목을 검색하시겠습니까?\n");
	printf("1. 제목\n2. 작가\n3.출판사\n4.출판년도\n5.도서번호\n6.종료\n");
	scanf("%d", &search_choice);
	if (search_choice == 1)
	{
		printf("제목을 입력해주십시오.\n");
		scanf("%s", user_search);
		printf("검색하신 내용입니다.\n");
		for (i = 0; i < 100; i++)
		{
			search(k, user_search, book_name, book_year, writ_name, publ_name, book_numb, borr);
		}
	}
	else if (search_choice == 2)
	{
		printf("작가를 입력해주십시오.\n");
		scanf("%s", user_search);
		printf("검색하신 내용입니다.\n");
		for (i = 0; i < 100; i++)
		{
			search(k, user_search, book_name, book_year, writ_name, publ_name, book_numb, borr);
		}
	}
	else if (search_choice == 3)
	{
		printf("출판사를 입력해주십시오.\n");
		scanf("%s", user_search);
		printf("검색하신 내용입니다.\n");
		for (i = 0; i < 100; i++)
		{
			search(k, user_search, book_name, book_year, writ_name, publ_name, book_numb, borr);
		}
	}
	else if (search_choice == 4)
	{
		printf("출판년도를 입력해주십시오.\n");
		scanf("%d", user_search);
		printf("검색하신 내용입니다.\n");
		for (i = 0; i < 100; i++)
		{
			search(k, user_search, book_name, book_year, writ_name, publ_name, book_numb, borr);
		}
	}
	else if (search_choice == 5)
	{
		printf("도서번호를 입력해주십시오.\n");
		scanf("%d", user_search);
		printf("검색하신 내용입니다.\n");
		for (i = 0; i < 100; i++)
		{
			search(k, user_search, book_name, book_year, writ_name, publ_name, book_numb, borr);
		}
	}
	else if (search_choice == 6)
	{
		printf("다시 입력해주세요.");
	}
}

void add_book(char(*book_name), int(*book_year), char(*writ_name), char(*publ_name), int(*book_numb), char(*borr))
	{
		printf("도서를 추가합니다.\n");
		printf("도서 제목 : ");
		scanf("%s", book_name);
		printf("\n");

		printf("출판년도 : ");
		scanf("%d", book_year);
		printf("\n");

		printf("작가 이름 : ");
		scanf("%s", writ_name);
		printf("\n");

		printf("출판사 이름 : ");
		scanf("%s", publ_name);
		printf("\n");

		printf("도서 번호 : ");
		scanf("%d", book_numb);
		printf("\n");

		printf("도서 추가가 완료되었습니다.");
}

int borrow_book(char *borr)
	{
		int book_numb;
		printf("도서를 대출합니다.\n");
		printf("대출을 원하는 도서의 번호를 입력해주세요.\n");
		printf("도서 번호 : ");
		scanf("%d", &book_numb);
		if (*borr == 'y')
		{
			*borr = 'n';
			printf("도서가 정상적으로 대출되었습니다.\n");
		}
		else
		{
			printf("이미 대출된 도서입니다.\n");
		}
		return 0;
}

int return_book(char *borr)
	{
		int book_numb;
		printf("도서를 반납한니다.\n");
		printf("반납을 원하는 도서의 번호를 입력해주세요.\n");
		printf("도서 번호 : ");
		scanf("%d", &book_numb);
		if (*borr == 'n')
		{
			*borr = 'y';
			printf("도서가 정상적으로 반납되었습니다.\n");
		}
		else
		{
			printf("이미 반납된 도서입니다.\n");
		}
		return 0;
}

void search(int k, char *user_search, char *book_name, int book_year, char *writ_name, char *publ_name, int book_numb, int borr)
	{
		for (k = 0; k < 100; k++) {
			if (!strcmp(user_search, book_name[k])) {
				printf("책 제목 : %s\n출판년도 : %d\n지은이 : %s\n출판사 : %s\n도서번호 : %d\n대출가능여부 : %d\n", book_name, book_year, writ_name, publ_name, book_numb, borr);
			}
			else {
				printf("책이 없습니다.");
			}
		}
}
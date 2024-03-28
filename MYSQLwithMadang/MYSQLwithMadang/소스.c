#include <stdio.h>
#include <string.h>

typedef struct {
	int bookid[5];
	char bookname[20];
	char publisher[20];
	int price;
}Book;

int main()
{
	/*��ȯ�� ���� ��*/
	int num_ret;

	/*DBMS�� ����*/
	EXEC SQL CONNECT : username IDENTIFIED BY : password;

	/*SQL �� ����*/
	EXEC SQL DECLARE c1 CURSOR FOR
		SELECT bookname, publisher, price FROM BOOK;
	EXEC SQL OPEN c1;

	/*��� �������� ���α׷� ȣ��*/
	search_all();

	/*SQL �� ���� ��� ���*/
	for (;;) {
		EXEC SQL FETCH c1 INTO : BOOK_rec;
		print_rows(num_ret);
	}
	EXEC SQL CLOSE c1;

	/*���� ����*/
	EXEC SQL COMMIT WORK RELEASE;

}
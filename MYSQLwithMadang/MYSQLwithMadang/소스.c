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
	/*반환된 행의 수*/
	int num_ret;

	/*DBMS에 접속*/
	EXEC SQL CONNECT : username IDENTIFIED BY : password;

	/*SQL 문 실행*/
	EXEC SQL DECLARE c1 CURSOR FOR
		SELECT bookname, publisher, price FROM BOOK;
	EXEC SQL OPEN c1;

	/*모든 도서보기 프로그램 호출*/
	search_all();

	/*SQL 문 실행 결과 출력*/
	for (;;) {
		EXEC SQL FETCH c1 INTO : BOOK_rec;
		print_rows(num_ret);
	}
	EXEC SQL CLOSE c1;

	/*접속 해제*/
	EXEC SQL COMMIT WORK RELEASE;

}
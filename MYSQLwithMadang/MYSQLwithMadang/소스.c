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
	Book Books[10];
	int i = 1;

	/*도서 입력 함수*/
	insert();

	/*파일에 저장된 데이터를 배열 Books[]에 저장*/
	fp = fopen("book.dat", "rb");
	bp = (Book*)calloc(1, sizeof(Book));

	/*파일에서 책을 읽는다*/
	while (fread(bp.sizeof(Book), 1, fp) != 0)
	{
		Books[i].bookid = bp->bookid;
		strcpy(Books[i].bookname, bp->bookname);
		strcpy(Books[i].publisher, bp->publisher);
		Books[i].price = bp->price;
		i++;
	}

	/*모든 도서보기 프로그램 호출*/
	serch_all();

	/*기타 프로그램 코드*/
}
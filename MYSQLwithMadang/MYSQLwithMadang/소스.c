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

	/*���� �Է� �Լ�*/
	insert();

	/*���Ͽ� ����� �����͸� �迭 Books[]�� ����*/
	fp = fopen("book.dat", "rb");
	bp = (Book*)calloc(1, sizeof(Book));

	/*���Ͽ��� å�� �д´�*/
	while (fread(bp.sizeof(Book), 1, fp) != 0)
	{
		Books[i].bookid = bp->bookid;
		strcpy(Books[i].bookname, bp->bookname);
		strcpy(Books[i].publisher, bp->publisher);
		Books[i].price = bp->price;
		i++;
	}

	/*��� �������� ���α׷� ȣ��*/
	serch_all();

	/*��Ÿ ���α׷� �ڵ�*/
}
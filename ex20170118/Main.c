#include<stdio.h>
#include<stdlib.h> //malloc
//void main(){
//
//	//cahr n =255;
//	unsigned char n = 255;
//
//	printf("%d \n", n);
//}

//
//void main() {
//
//	char n =128;
//	//unsigned char n = 255;
//
//	printf("%d \n", n);//-128 �� ���� ! 10000000�̱� ������
//}
//
//void main() {
//	float f = 0.1f, sum = 0;
//	int i;
//	for (i = 0; i < 10; ++i) {
//		sum += f;
//		printf("%g\n", sum);
//	}
//}
//
//void main() {
//	float f = 0.1f, sum = 0;
//	int i;
//	for (i = 0; i < 10; ++i) {
//		sum += f;
//		printf("%.15g\n", sum); //�Ҽ��� �� �ټ���°¥�� ���� ����ض�
//	}
//	if (1 == sum) {// 1�̾ƴϱ⶧���� ��¾ȵ�
//		printf("true\n");
//	}
//}
//
//void main() {
//	float f = 0.1f, sum = 0;
//	int i;
//	for (i = 0; i < 10; ++i) {
//		sum += f;
//		printf("%.15g\n", sum); //�Ҽ��� �� �ټ���°¥�� ���� ����ض�
//	}
//	if (1 == (int) sum) { // ��� ���� ��µ� 
//		printf("true\n");
//	}
//}
//
//void main() {
//	double d = 0.1, sum = 0; //double�� ���е��� ũ��!
//	int i;
//	for (i = 0; i < 10; ++i) {
//		sum += d;
//		printf("%.20g\n", sum); //
//	}
//	if (1 == sum) { // �׷��� 1�� �ƴ�
//		printf("true\n");
//	}
//}
//
//void main() {
//	float f = 1.123456789f;
//	double d = 1.123456789;
//
//	printf("%.10f\n",f);
//	printf("%.10f\n",d);
//}

//
///* void pointer */
//void main() {
//	int n = 10;
//	double d = 2.3;
//	void* pv;
//	pv = &n;
//	printf("%d\n", *(int*)pv);
//	pv = &d;
//	printf("%g\n", *(double*)pv);
//}

//
///* �Լ� pointer */
//int add(int a, int b) {
//	return  a + b;
//}
//int sub(int a, int b) {
//	return a - b;
//}
//
//void main() {
//	printf("%d\n", add(2, 3));
//	printf("%d\n", sub(2, 3));
//
//}
//
///* �Լ� pointer */
//int Add(int a, int b) {
//	return  a + b;
//}
//int Sub(int a, int b) {
//	return a - b;
//}
//
//void main() {
//	printf("%p\n", main); //�Լ��� �ּ�
//	printf("%p\n", Sub);// �ּ� 
//	printf("%p\n", Add);
//
//
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", Sub(2, 3));
//
//}

//
///* �Լ� pointer */
//int Add(int a, int b) {
//	return  a + b;
//}
//int Sub(int a, int b) {
//	return a - b;
//}
//
//void main() {
//	printf("%p\n", main);
//	printf("%p\n", Sub);
//	printf("%p\n", Add);
//
//	int(*pf)(int, int);
//	pf = Add;
//	printf("%d\n", pf(2, 3));
//	pf = Sub;
//	printf("%d\n", pf(2, 3));
//
//}
//
///* �Լ� pointer */
//void PrintString(char*  s) {
//	printf("%s\n", s);
//}
//void main() {
//	char* s = "Hello!";
//	PrintString(s);
//	PrintString("Hello!");
//
//}

//
///* �Լ� pointer */
//void PrintString(char*  s) {
//	printf("%s\n", s);
//}
//void main() {
//	char* s = "Hello!";
//	void(*pfun)(char*s); //�Լ� �ñ״��Ķ� �Ȱ��� ������
//	pfun = PrintString;
//	pfun(s);
//	PrintString("Hello!");
//
//	printf("%p %p \n", pfun, PrintString);
//}
//
///* �Լ� pointer �ºҰ��� */
///////////server //////////
//void Server() {
//	printf("Server() \n");
//	Client(); //callback 
//}
///////client//////////
//void Client() {//callback function
//	printf("Client() \n");
//}
//void main() {
//	Server();
//}

//
///* �Լ� pointer ���� ����� ��� */
///////////server //////////
//void Server(void (*pf)(void)) {
//	printf("Server() \n");
//	pf(); //callback 
//}
///////client//////////
//void Client() {//callback function
//	printf("Client() \n");
//}
//void main() {
//	Server(Client);
//}

//
///* �Լ� pointer ���� ����� ��� */
///////////server //////////
//void Server(void(*pf)(void)) {
//	printf("Server() \n");
//	pf(); //callback 
//}
//int Find(int list[], int size, int key) { //int list[] �� int* list �� ������ 
///	int i;
//for (i = 0; i < size; ++i) {
//	if (list[i] == key)
//		return i;
//}
//return -1;
//}
///////client//////////
//void Client() {//callback function
//	printf("Client() \n");
//}
//void main() {
//	int list[] = { 90,25,84,30,12,54 };
//	int index = Find(list, 6, 90);//list���� 6���߿� ���� ã�°� 90
//		if (index >= 0)
//			printf("%d => %d index", 90, index);
//}
//
///* �Լ� pointer  cmp */
///////////server //////////
//
//int Find(int list[], int size, int (*pred)(int)) {
//	int i;
//	for (i = 0; i < size; ++i) {
//		if (cmp(list[i]))
//			return i;
//	}
//	return -1;
//}
///////client//////////
//int cmp(int key) {
//	return 90 == key;
//}
//
//void main() {
//	int list[] = { 84,25,90,30,12,54 };
//	int index = Find(list, 6, cmp);//list���� 6���߿� ���� ã�°� 90
//	if (index >= 0)
//		printf("%d => %d index", 90, index);
//}



//
///* �Լ� pointer cmp */
///////////server //////////
//int Find(int list[], int size,  int(*pred)(int)) {
//	int i;
//	for (i = 0; i < size; ++i) {
//		if (pred(list[i]))
//			return i;
//	}
//	return -1;
//}
///////client////////// �̷��� ��������Լ� 
//int cmp(int key) {
//	return key > 50 && key % 3 == 0;
//}
//
//void main() {
//	int list[] = { 85,25,90,30,12,54 };
//	int index = Find(list, 6, cmp);//list���� 6���߿� ���� ã�°� 90
//	if (index >= 0)
//		printf("%d => %d index", 90, index);
//}

//
///* �Լ� pointer */
//void PrintArray(int(*pa)[2], int row, int col) {
//	int i, j;
//	for (i = 0; i < row; ++i) {
//		for (j = 0; j < col; ++j)
//			printf("%5d", pa[i][j]);
//		printf("\n");
//	}
//}
//
//void main() {
//	int arr[2][2] = { 10,20,30,40 };
//	PrintArray(arr, 2, 2);
//}
//
///* �Լ� pointer */
//void PrintArray(int(*pa)[2], int row, int col) {
//	int i, j;
//	for (i = 0; i < row; ++i) {
//		for (j = 0; j < col; ++j)
//			printf("%5d", pa[i][j]);
//		printf("\n");
//	}
//}
//
//void main() {
//	int arr[5][5] = { 10,20,30,40 }; // �̰� [5][5] �������� �ذ����غ���

//	PrintArray(arr, 2, 2);
//}


///* �Լ� pointer */
//void PrintArray(int(*pa)[2], int row, int col) {
//	int i, j;
//	for (i = 0; i < row; ++i) {
//		for (j = 0; j < col; ++j)
//			printf("%5d", pa[i][j]);
//		printf("\n");
//	}
//}
//
//void main() {
//	int row, col,i,j;
//	int** pa;
//
//
//	printf("�迭�� ��� �� �Է�:");
//	scanf_s("%d %d", &row, &col);
//	//InitArray();
//	pa = (int**)malloc(sizeof(int*)*row);
//	for (i = 0; i < row; ++i)
//		pa[i] = (int*)malloc(sizeof(int)*col);
//
//	for (i = 0; i < row; ++i) {
//		for (j = 0; j < col; ++j) {
//			pa[i][j] = i*col +j+ 1;
//		}
//	}
//	for (i = 0; i < row; ++i) {
//		for (j = 0; j < col; ++j) {
//			printf("%5d", pa[i][j]);
//		}printf("\n");
//	}
//	for (i = 0; i < row; ++i) {
//			free(pa[i]);
//	}free(pa);
//}

//
///* �Լ� pointer */
///*void PrintArray(int(*pa)[2], int row, int col) {
//	int i, j;
//	for (i = 0; i < row; ++i) {
//		for (j = 0; j < col; ++j)
//			printf("%5d", pa[i][j]);
//		printf("\n");
//	}
//}*/
//void AllocArray(int *** ppa,int row, int col) {
//	int i;
//	(*ppa) = (int**)malloc(sizeof(int*)*row);
//	for (i = 0; i < row; ++i)
//		(*ppa)[i] = (int*)malloc(sizeof(int)*col);
//
//}
//void FreeArray(int **pa, int row, int col) {
//	int i;
//	for (i = 0; i < row; ++i) {
//		free(pa[i]);
//	}free(pa);
//}
//void PrintArray(int **pa, int row, int col) {
//	int i,j;
//	for (i = 0; i < row; ++i) {
//		for (j = 0; j < col; ++j) {
//			printf("%5d", pa[i][j]);
//		}printf("\n");
//	}
//}
//void InitArray(int**pa, int row, int col) {
//	int i,j;
//	for (i = 0; i < row; ++i) {
//		for (j = 0; j < col; ++j) {
//			pa[i][j] = i*col + j + 1;
//		}
//	}
//}
//
//void main() {
//	int row, col, i, j;
//	int** pa;
//
//
//	printf("�迭�� ��� �� �Է�:");
//	scanf_s("%d %d", &row, &col);
//	AllocArray(&pa, row,col);
//
//
//	InitArray(pa,row,col);
//	PrintArray(pa, row, col);
//	FreeArray(pa, row, col);
//	
//}

//
///* �Լ� pointer */
///*void PrintArray(int(*pa)[2], int row, int col) {
//int i, j;
//for (i = 0; i < row; ++i) {
//for (j = 0; j < col; ++j)
//printf("%5d", pa[i][j]);
//printf("\n");
//}
//}*/
//void AllocArray(int *** ppa, int row, int col) {
//	int i;
//	(*ppa) = (int**)malloc(sizeof(int*)*row);
//	for (i = 0; i < row; ++i)
//		(*ppa)[i] = (int*)malloc(sizeof(int)*col);
//
//}
//void FreeArray(int **pa, int row, int col) {
//	int i;
//	for (i = 0; i < row; ++i) {
//		free(pa[i]);
//	}free(pa);
//}
//void PrintArray(int **pa, int row, int col) {
//	int i, j;
//	for (i = 0; i < row; ++i) {
//		for (j = 0; j < col; ++j) {
//			printf("%5d", pa[i][j]);
//		}printf("\n");
//	}
//}
//void InitArray(int**pa, int row, int col) {
//	int i, j;
//	for (i = 0; i < row; ++i) {
//		for (j = 0; j < col; ++j) {
//			pa[i][j] = i*col + j + 1;
//		}
//	}
//}
//
//void main() {
//	int row, col, i, j;
//	int** pa;
//
//
//	printf("�迭�� ��� �� �Է�:");
//	scanf_s("%d %d", &row, &col);
//	AllocArray(&pa, row, col);
//
//
//	InitArray(pa, row, col);
//	PrintArray(pa, row, col);
//	FreeArray(pa, row, col);
//
//}

//
///*  scanf */
//void main() {
//	int data;
//
//	scanf_s("%d", &data);
//	printf("data : %d\n", data);
//	scanf_s("%d", &data);
//	printf("data : %d\n", data);
//
//}
//
///* scanf */
//void main() {
//	int data;
//	char buf[100];
//	scanf_s("%d", &data);
//	printf("data : %d\n", data);
//
//	gets_s(buf, 100); //���鵵 ������ 
//	printf("String :%s\n", buf);
//}

//
///* scanf */
//void main() {
//	int data;
//	char buf[100];
//	scanf_s("%d", &data);
//	printf("data : %d\n", data);
//	//fflush ��¹��۸�  �����
//	fflush(stdin); // ǥ�� �Է���ġ  .. flush �� ��� ���۸� ����� �� ��ǥ�� ����̶� ������.
//	gets_s(buf, 100); //���鵵 ������ 
//	printf("String :%s\n", buf);
//}

//
///* scanf */
//void main() {
//	int data;
//	char buf[100];
//	scanf_s("%d", &data);
//	printf("data : %d\n", data);
//	while (getchar() != '\n');
//	;
//	gets_s(buf, 100); //���鵵 ������ 
//	printf("String :%s\n", buf);
//}

//
///* scanf */
//void Flush() {
//	while (getchar() != '\n');
//	;
//}
//void main() {
//	int data;
//	char buf[100];
//	scanf_s("%d", &data);
//	Flush(); //�Է¹��ۿ� ����Ȱ��� ����� 
//	printf("data : %d\n", data);
//
//
//	gets_s(buf, 100); //���鵵 ������ 
//	printf("String :%s\n", buf);
//}

//
///*  */
//void Flush() {
//	while (getchar() != '\n');
//	;
//}
//void main() {
//	int data;
//	char buf[100];
//	scanf_s("%d", &data);
//	Flush(); //�Է¹��ۿ� ����Ȱ��� ����� 
//	printf("data : %d\n", data);
//
//
//	gets_s(buf, 100); //���鵵 ������ 
//	printf("String :%s\n", buf);
//}

//
///* ���� ����ü - ������Ʈ ������ ���� ����  */
//void main() {
//	FILE* pf;
//	pf = fopen("test.txt", "w");
//
//	fprintf(pf, "ABC");
//	fclose(pf);
//}

//
///* ���� ����ü - ������Ʈ ������ ���� ����  */
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "w"); //���� ������ �ǵ��̱�� ���̱⶧���� �����͸� ����ؼ� �ּҷθ�..
//	
//	fprintf(pf, "ABC");
//	fclose(pf);
//}
//
///* ���� ����ü  */
//void main() {
//	int n = 100;
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "w"); //���� ������ �ǵ��̱�� ���̱⶧���� �����͸� ����ؼ� �ּҷθ�..
//
//	fprintf(pf, "int n=%d\n",n);
//	fclose(pf);
//}

//
///* ���� ����ü  */
//void main() {
//	int n = 100;
//	FILE* pf; //���� ������ 
//	fopen_s(&pf, "test.txt", "w"); //���� ������ �ǵ��̱�� ���̱⶧���� �����͸� ����ؼ� �ּҷθ�..
//
//
//	fprintf(pf, "int n=%d\n", n); //���Ͼȿ�  ���
//	fprintf(stdout, "int n=%d\n", n); //����Ϳ� ���
//
//	fclose(pf);
//}


//
///* ���� ����ü  */
//void main() {
//	int arr[5] = {10,20,30,40,50};
//	FILE* pf; //���� ������ 
//	fopen_s(&pf, "test.txt", "w"); //���� ������ �ǵ��̱�� ���̱⶧���� �����͸� ����ؼ� �ּҷθ�..
//
//	{
//		int i;
//		for(i=0; i<5;++i) //5���� ���ڿ� ��� 
//			fprintf(pf, "[%d]: %d\n", i,arr[i]); //���Ͼȿ�  ���
//
//	}
//	fclose(pf);
//}

//
///* ���� ����ü  */
//void main() {
//	int arr[5] = { 10,20,30,40,50 };
//	FILE* pf; //���� ������ 
//	
//	//����
//	fopen_s(&pf, "test.txt", "w"); 
//
//	{
//		int i;
//		for (i = 0; i < 5; ++i) //5
//			fprintf(pf, "[%d]: %d\n", i, arr[i]); //���Ͼȿ�  ���
//
//	}
//	fclose(pf);
//	
//	//�б�
//	fopen_s(&pf, "test.txt", "r");
//	{
//		int i;
//		for (i = 0; i < 5; ++i) { //��� ����Ǿ��ִ��� �˾ƾ��� 
//			
//				char buf[100];
//				fgets(buf, 100, pf); // �ִ�� 100�� �����ʴ´� pf����
//				printf("%s", buf);
//			
//		}
//	}
//	fclose(pf);
//
//}


/* ���� ����ü  */
void main() {
	int arr[5] = { 10,20,30,40,50 };
	FILE* pf; //���� ������ 

			  //����
	fopen_s(&pf, "test.txt", "w");

	{
		int i;
		for (i = 0; i < 5; ++i) //5
			fprintf(pf, "[%d]: %d\n", i, arr[i]); //���Ͼȿ�  ���

	}
	fclose(pf);

	//�б�
	fopen_s(&pf, "test.txt", "r");
	{
		int i;
		for (i = 0; i < 5; ++i) { //��� ����Ǿ��ִ��� �˾ƾ��� 
		
		char buf1[100];
			int data; 
			fscanf_s(pf,"%s %d",buf1,100,&data); // �ִ�� 100�� �����ʴ´� pf����
			printf("%s %d\n", buf1,data);
		}
	}
	fclose(pf);

}

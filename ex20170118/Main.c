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
//	printf("%d \n", n);//-128 이 나옴 ! 10000000이기 때문에
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
//		printf("%.15g\n", sum); //소수점 열 다섯번째짜리 까지 출력해라
//	}
//	if (1 == sum) {// 1이아니기때문에 출력안됨
//		printf("true\n");
//	}
//}
//
//void main() {
//	float f = 0.1f, sum = 0;
//	int i;
//	for (i = 0; i < 10; ++i) {
//		sum += f;
//		printf("%.15g\n", sum); //소수점 열 다섯번째짜리 까지 출력해라
//	}
//	if (1 == (int) sum) { // 라고 쓰면 출력됨 
//		printf("true\n");
//	}
//}
//
//void main() {
//	double d = 0.1, sum = 0; //double은 정밀도가 크다!
//	int i;
//	for (i = 0; i < 10; ++i) {
//		sum += d;
//		printf("%.20g\n", sum); //
//	}
//	if (1 == sum) { // 그래도 1은 아님
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
///* 함수 pointer */
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
///* 함수 pointer */
//int Add(int a, int b) {
//	return  a + b;
//}
//int Sub(int a, int b) {
//	return a - b;
//}
//
//void main() {
//	printf("%p\n", main); //함수의 주소
//	printf("%p\n", Sub);// 주소 
//	printf("%p\n", Add);
//
//
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", Sub(2, 3));
//
//}

//
///* 함수 pointer */
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
///* 함수 pointer */
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
///* 함수 pointer */
//void PrintString(char*  s) {
//	printf("%s\n", s);
//}
//void main() {
//	char* s = "Hello!";
//	void(*pfun)(char*s); //함수 시그니쳐랑 똑같이 만들면됨
//	pfun = PrintString;
//	pfun(s);
//	PrintString("Hello!");
//
//	printf("%p %p \n", pfun, PrintString);
//}
//
///* 함수 pointer 는불가능 */
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
///* 함수 pointer 쓰면 양방향 통신 */
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
///* 함수 pointer 쓰면 양방향 통신 */
///////////server //////////
//void Server(void(*pf)(void)) {
//	printf("Server() \n");
//	pf(); //callback 
//}
//int Find(int list[], int size, int key) { //int list[] 는 int* list 와 같은것 
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
//	int index = Find(list, 6, 90);//list에서 6개중에 내가 찾는거 90
//		if (index >= 0)
//			printf("%d => %d index", 90, index);
//}
//
///* 함수 pointer  cmp */
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
//	int index = Find(list, 6, cmp);//list에서 6개중에 내가 찾는거 90
//	if (index >= 0)
//		printf("%d => %d index", 90, index);
//}



//
///* 함수 pointer cmp */
///////////server //////////
//int Find(int list[], int size,  int(*pred)(int)) {
//	int i;
//	for (i = 0; i < size; ++i) {
//		if (pred(list[i]))
//			return i;
//	}
//	return -1;
//}
///////client////////// 미래의 만들어진함수 
//int cmp(int key) {
//	return key > 50 && key % 3 == 0;
//}
//
//void main() {
//	int list[] = { 85,25,90,30,12,54 };
//	int index = Find(list, 6, cmp);//list에서 6개중에 내가 찾는거 90
//	if (index >= 0)
//		printf("%d => %d index", 90, index);
//}

//
///* 함수 pointer */
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
///* 함수 pointer */
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
//	int arr[5][5] = { 10,20,30,40 }; // 이걸 [5][5] 로했을때 해결을해보자

//	PrintArray(arr, 2, 2);
//}


///* 함수 pointer */
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
//	printf("배열의 행과 열 입력:");
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
///* 함수 pointer */
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
//	printf("배열의 행과 열 입력:");
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
///* 함수 pointer */
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
//	printf("배열의 행과 열 입력:");
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
//	gets_s(buf, 100); //공백도 가져감 
//	printf("String :%s\n", buf);
//}

//
///* scanf */
//void main() {
//	int data;
//	char buf[100];
//	scanf_s("%d", &data);
//	printf("data : %d\n", data);
//	//fflush 출력버퍼를  비워라
//	fflush(stdin); // 표준 입력장치  .. flush 는 출력 버퍼를 비워라 ㅎ 비표준 방법이라서 안통함.
//	gets_s(buf, 100); //공백도 가져감 
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
//	gets_s(buf, 100); //공백도 가져감 
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
//	Flush(); //입력버퍼에 저장된것을 비워라 
//	printf("data : %d\n", data);
//
//
//	gets_s(buf, 100); //공백도 가져감 
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
//	Flush(); //입력버퍼에 저장된것을 비워라 
//	printf("data : %d\n", data);
//
//
//	gets_s(buf, 100); //공백도 가져감 
//	printf("String :%s\n", buf);
//}

//
///* 파일 구조체 - 프로젝트 폴더에 가면 있음  */
//void main() {
//	FILE* pf;
//	pf = fopen("test.txt", "w");
//
//	fprintf(pf, "ABC");
//	fclose(pf);
//}

//
///* 파일 구조체 - 프로젝트 폴더에 가면 있음  */
//void main() {
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "w"); //직접 파일을 건들이기는 무겁기때문에 포인터를 사용해서 주소로만..
//	
//	fprintf(pf, "ABC");
//	fclose(pf);
//}
//
///* 파일 구조체  */
//void main() {
//	int n = 100;
//	FILE* pf;
//	fopen_s(&pf, "test.txt", "w"); //직접 파일을 건들이기는 무겁기때문에 포인터를 사용해서 주소로만..
//
//	fprintf(pf, "int n=%d\n",n);
//	fclose(pf);
//}

//
///* 파일 구조체  */
//void main() {
//	int n = 100;
//	FILE* pf; //파일 포인터 
//	fopen_s(&pf, "test.txt", "w"); //직접 파일을 건들이기는 무겁기때문에 포인터를 사용해서 주소로만..
//
//
//	fprintf(pf, "int n=%d\n", n); //파일안에  출력
//	fprintf(stdout, "int n=%d\n", n); //모니터에 출력
//
//	fclose(pf);
//}


//
///* 파일 구조체  */
//void main() {
//	int arr[5] = {10,20,30,40,50};
//	FILE* pf; //파일 포인터 
//	fopen_s(&pf, "test.txt", "w"); //직접 파일을 건들이기는 무겁기때문에 포인터를 사용해서 주소로만..
//
//	{
//		int i;
//		for(i=0; i<5;++i) //5개의 문자열 출력 
//			fprintf(pf, "[%d]: %d\n", i,arr[i]); //파일안에  출력
//
//	}
//	fclose(pf);
//}

//
///* 파일 구조체  */
//void main() {
//	int arr[5] = { 10,20,30,40,50 };
//	FILE* pf; //파일 포인터 
//	
//	//쓰기
//	fopen_s(&pf, "test.txt", "w"); 
//
//	{
//		int i;
//		for (i = 0; i < 5; ++i) //5
//			fprintf(pf, "[%d]: %d\n", i, arr[i]); //파일안에  출력
//
//	}
//	fclose(pf);
//	
//	//읽기
//	fopen_s(&pf, "test.txt", "r");
//	{
//		int i;
//		for (i = 0; i < 5; ++i) { //몇번 저장되어있는지 알아야함 
//			
//				char buf[100];
//				fgets(buf, 100, pf); // 최대는 100을 넘지않는다 pf에서
//				printf("%s", buf);
//			
//		}
//	}
//	fclose(pf);
//
//}


/* 파일 구조체  */
void main() {
	int arr[5] = { 10,20,30,40,50 };
	FILE* pf; //파일 포인터 

			  //쓰기
	fopen_s(&pf, "test.txt", "w");

	{
		int i;
		for (i = 0; i < 5; ++i) //5
			fprintf(pf, "[%d]: %d\n", i, arr[i]); //파일안에  출력

	}
	fclose(pf);

	//읽기
	fopen_s(&pf, "test.txt", "r");
	{
		int i;
		for (i = 0; i < 5; ++i) { //몇번 저장되어있는지 알아야함 
		
		char buf1[100];
			int data; 
			fscanf_s(pf,"%s %d",buf1,100,&data); // 최대는 100을 넘지않는다 pf에서
			printf("%s %d\n", buf1,data);
		}
	}
	fclose(pf);

}

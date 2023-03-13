// Single Linked List

//1
/*
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
void tampil(Node* n) {
	cout << "\nLinked list...." << endl;
	while (n != NULL) {
		cout << n->data << "--->";
		n = n->next;
	}
	cout << endl;
}
int main() {
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	first = new Node();
	second = new Node();
	third = new Node();
	first->data = 1;
	first->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	tampil(first);
}
*/

//2
/*
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
void tampil(Node* n) {
	cout << "\nLinked list...." << endl;
	while (n != NULL) {
		cout << n->data << "--->";
		n = n->next;
	}
	cout << endl;
}
void insertKiri(struct Node** head, int ndata) {
	struct Node* nNode = (struct Node*)malloc(sizeof(struct Node));
	nNode->data = ndata;
	nNode->next = (*head);
	(*head) = nNode;
}
int main() {
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	first = new Node();
	second = new Node();
	third = new Node();
	first->data = 1;
	first->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	tampil(first);
	int i;
	cout << "\nTambah baru : ";
	cin >> i;
	insertKiri(&first, i);
	tampil(first);
}
*/

//3
/*
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
void tampil(Node* n) {
	cout << "\nLinked list...." << endl;
	while (n != NULL) {
		cout << n->data << "--->";
		n = n->next;
	}
	cout << endl;
}
void insertKanan(struct Node** head, int ndata) {
	struct Node* nNode = (struct Node*)malloc(sizeof(struct Node));
	struct Node* last = *head;
	nNode->data = ndata;
	nNode->next = NULL;
	while (last->next != NULL)
		last = last->next;
	last->next = nNode;
}
int main() {
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	first = new Node();
	second = new Node();
	third = new Node();
	first->data = 1;
	first->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	tampil(first);
	int i;
	cout << "\nTambah baru : ";
	cin >> i;
	insertKanan(&first, i);
	tampil(first);
}
*/

//4
/*
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
void tampil(Node* n) {
	cout << "\nLinked list...." << endl;
	while (n != NULL) {
		cout << n->data << "--->";
		n = n->next;
	}
	cout << endl;
}
void insertTengah(struct Node* bNode, int ndata) {
	if (bNode == NULL) {
		cout << "Node sebelumnya tidak boleh null";
		return;
	}
	struct Node* nNode = (struct Node*)malloc(sizeof(struct Node));
	nNode->data = ndata;
	nNode->next = bNode->next;
	bNode->next = nNode;
}
int main() {
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	first = new Node();
	second = new Node();
	third = new Node();
	first->data = 1;
	first->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	tampil(first);
	int i;
	cout << "\nTambah baru : ";
	cin >> i;
	insertTengah(second, i);
	tampil(first);
}
*/

//5
/*
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
void tampil(Node* n) {
	cout << "\nLinked list...." << endl;
	while (n != NULL) {
		cout << n->data << "--->";
		n = n->next;
	}
	cout << endl;
}
void hapus(struct Node** head, int x) {
	struct Node* temp = *head, * prev;
	prev = NULL;
	if (temp != NULL && temp->data == x) {
		*head = temp->next;
		free(temp);
		return;
	}
	while (temp != NULL && temp->data != x) {
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return;
	prev->next = temp->next;
	free(temp);
}
int main() {
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	first = new Node();
	second = new Node();
	third = new Node();
	first->data = 1;
	first->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	tampil(first);
	int i;
	cout << "\nHapus data : ";
	cin >> i;
	hapus(&first, i);
	tampil(first);
}
*/

//6
/*
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
class Stack {
	Node* head;
public:
	Stack() {
		head = NULL;
	}
	void push(int nilai);
	void pop();
	void top();
	void tampil();
};
void Stack::push(int nilai) {
	Node* temp = new Node();
	cout << "Inputkan Nilai : ";
	cin >> nilai;
	temp->data = nilai;
	temp->next = head;
	head = temp;
}
void Stack::pop() {
	if (head == NULL) {
		cout << "Stack Kosong";
	}
	else {
		Node* temp = head;
		head = head->next;
		delete(temp);
	}
}
void Stack::top() {
	if (head == NULL) {
		cout << "Stack Kosong";
	}
	else {
		cout << "Top = " << head->data << endl;
	}
}
void Stack::tampil() {
	if (head == NULL) {
		cout << "\nStack Kosong\n";
	}
	else {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << "--->";
			temp = temp->next;
		}
		cout << endl;
	}
}
int main() {
	Stack N;
	int pil, nilai = 0;
	do {
		cout << "\n1. Push\n2. Pop\n3. Top\n4. Tampil\nPilih : ";
		cin >> pil;
		switch (pil) {
		case 1:
			N.push(nilai);
			cout << "Elemen berhasil ditambahkan ke stack\n";
			break;
		case 2:
			N.pop();
			cout << "Elemen berhasil dikeluarkan dari Stack\n";
			break;
		case 3:
			cout << "Elemen pada Top adalah : ";
			N.top();
			break;
		case 4:
			cout << "Data pada link list adalah : ";
			N.tampil();
			break;
		default:
			cout << "Pilihan tidak sesuai\n";
		}
	} while (pil != 0);
}
*/

//GANJIL
/*
#include <iostream>
#include <queue>
using namespace std;

class Stack {
	queue <int> q1, q2;
	int data;

public:
	Stack()
	{
		data = 0;
	}

	void push(int x)
	{
		data++;
		q2.push(x);
		while (!q1.empty()) {
			q2.push(q1.front());
			q1.pop();
		}

		queue<int> q = q1;
		q1 = q2;
		q2 = q;
	}

	void pop()
	{
		if (q1.empty())
			return;
		q1.pop();
		data--;
	}
	int top()
	{
		if (q1.empty())
			return -1;
		return q1.front();
	}
	int size()
	{
		return data;
	}
};

int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);

	cout << "Data : " << s.size() << endl;
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	cout << "Data Sekarang : " << s.size() << endl;
	return 0;
}
*/

//7
/*
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
class Queue {
	Node* F, * R;
public:
	Queue() {
		F = R = NULL;
	}
	void enqueue();
	void dequeue();
	void Tampil();
};
void Queue::enqueue() {
	int nilai;
	Node* temp = new Node();
	cout << "Inputkan Nilai : ";
	cin >> nilai;
	temp->data = nilai;
	temp->next = NULL;
	if (F == NULL)
		F = temp;
	else
		R->next = temp;
	R = temp;
	cout << "Elemen berhasil ditambahkan pada queue\n";
}
void Queue::dequeue() {
	if (F == NULL) {
		cout << "\nQueue kosong";
	}
	else {
		Node* temp = F;
		F = F->next;
		cout << temp->data << " telah dikeluarkan dari queue\n";
		delete(temp);
	}
}
void Queue::Tampil() {
	if (F == NULL) {
		cout << "\nQueue kosong\n";
	}
	else {
		Node* temp = F;
		while (temp != NULL) {
			cout << temp->data << "--->";
			temp = temp->next;
		}
		cout << endl;
	}
}
int main() {
	Queue N;
	int pil;
	while (1) {
		cout << "\n1. Enqueue\n2. Dequeue\n3. Tampil\nPilih : ";
		cin >> pil;
		switch (pil) {
		case 1:
			N.enqueue();
			break;
		case 2:
			N.dequeue();
			break;
		case 3:
			N.Tampil();
			break;
		default:
			cout << "Pilihan tidak sesuai\n";
			break;
		}
	}
}
*/

//TUGAS 1
/*
#include<iostream>
using namespace std;
#define MAX 255
class Node {
public:
	int data;
	char Nama[MAX];
	Node* next;
};
class Stack {
	Node* head, * head2;
public:
	Stack() {
		head = NULL;
		head2 = NULL;
	}
	void push(int nilai, char nama_mhs[MAX]);
	void sort();
	void tampil(Node* head);
};
void Stack::push(int nilai, char nama_mhs[MAX]) {
	Node* temp = new Node();
	temp->data = nilai;
	strcpy_s(temp->Nama, nama_mhs);
	temp->next = head;
	head = temp;
}
void Stack::sort() {
	if (head == NULL) {
		cout << "\nStack kosong\n";
	}
	else {
		int tmp;
		char tmp_nama[MAX];
		while (head != NULL) {
			tmp = head->data;
			strcpy_s(tmp_nama, head->Nama);
			Node* temp2 = head;
			head = head->next;
			delete(temp2);
			while (head2 != NULL && head2->data > tmp)
			{
				Node* temp2 = head2;
				Node* temp = new Node();
				temp->data = head2->data;
				strcpy_s(temp->Nama, head2->Nama);
				temp->next = head;
				head = temp;
				head2 = head2->next;
				delete(temp2);
			}
			Node* tampung = new Node();
			tampung->data = tmp;
			strcpy_s(tampung->Nama, tmp_nama);
			tampung->next = head2;
			head2 = tampung;
		}
		cout << endl;
	}
	cout << "Setelah Pengurutan Nilai:" << endl;
	tampil(head2);
}
void Stack::tampil(Node* head2) {
	Node* temp = head2;
	if (head2 == NULL) {
		return;
	}
	tampil(head2->next);
	cout << "Nama Mahasiswa : " << temp->Nama << endl;
	cout << "Nilai Mahasiswa : " << temp->data << endl;
	temp = temp->next;
}
int main() {
	Stack N;
	int pil, nilai = 0, i = 1;
	char mhs[MAX];
	while (nilai != 100) {
		cout << "Input Nama Mahasiswa ke-" << i << " : ";
		cin >> mhs;
		cout << "Input Nilai Mahasiswa ke-" << i << " : ";
		cin >> nilai;
		cout << endl;
		i++;
		N.push(nilai, mhs);
	}
	N.sort();
}
*/

//TUGAS 2
/*
#include<iostream>
using namespace std;
#define MAX 255
#define MAX2 20
int barisan = 0;
class Node {
public:
	char Nama[MAX], NRP[MAX2];
	Node* next;
};
class Stack {
	Node* head;
public:
	Stack() {
		head = NULL;
	}
	void push(char nrp_mhs[MAX2], char nama_mhs[MAX]);
	void push_n(char nrp_mhs[MAX2], char nama_mhs[MAX], int urutan);
	void pop(char nrp2[MAX2]);
	void balik(Node* head2);
	void tampil();
};
void Stack::push_n(char nrp_mhs[MAX2], char nama_mhs[MAX], int urutan) {
	Node* temp = head;
	int i;
	if (urutan > barisan) {
		cout << "Input urutan lebih besar dari jumlah barisan\n";
		cout << "Akan dimasukkan ke urutan paling akhir\n";
		push(nrp_mhs, nama_mhs);
	}
	else
	{
		for (i = 1; i < barisan - 1; i++) {
			temp = temp->next;
		}
		Node* NodeBaru = new Node();
		strcpy_s(NodeBaru->NRP, nrp_mhs);
		strcpy_s(NodeBaru->Nama, nama_mhs);
		NodeBaru->next = temp->next;
		temp->next = NodeBaru;
		barisan++;
	}
}
void Stack::push(char nrp_mhs[MAX2], char nama_mhs[MAX]) {
	Node* temp = new Node();
	strcpy_s(temp->NRP, nrp_mhs);
	strcpy_s(temp->Nama, nama_mhs);
	temp->next = head;
	head = temp;
	barisan++;
}
void Stack::tampil() {
	balik(head);
}
void Stack::balik(Node* head2) {
	Node* temp = head2;
	if (head2 == NULL) {
		return;
	}
	balik(head2->next);
	cout << "Nama Mahasiswa : " << temp->Nama << endl;
	cout << "NRP Mahasiswa : " << temp->NRP << endl;
	temp = temp->next;
}
void Stack::pop(char nrp2[MAX2]) {
	struct Node* temp = head, * prev;
	prev = NULL;
	if (temp != NULL && strcmp(temp->NRP, nrp2) == 0) {
		head = temp->next;
		free(temp);
		barisan--;
		return;
	}
	while (temp != NULL && strcmp(temp->NRP, nrp2) != 0) {
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL) {
		return;
	}
	prev->next = temp->next;
	free(temp);
	barisan--;
}
int main() {
	Stack N;
	int pil, i = 1, baris;
	char innama[MAX], innrp[MAX2], outnrp[MAX2];
	while (barisan < 20) {
		cout << "\n1. Masuk Barisan Terakhir\n2. Masuk Barisan ke-n\n3. Keluar Barisan\n4.Tampil\n";
		cout << "Pilihan : ";
		cin >> pil;
		cout << endl;
		switch (pil) {
		case 1:
			cout << "Input Nama Mahasiswa ke - " << i << ": ";
			cin >> innama;
			cout << "Input NRP Mahasiswa ke - " << i << ": ";
			cin >> innrp;
			i++;
			N.push(innrp, innama);
			break;
		case 2:
			cout << "Masuk Barisan ke (n) : ";
			cin >> baris;
			cout << "Input Nama Mahasiswa ke - " << baris << ": ";
			cin >> innama;
			cout << "Input NRP Mahasiswa ke - " << baris << ": ";
			cin >> innrp;
			N.push_n(innrp, innama, baris);
			break;
		case 3:cout << "NRP yang akan Keluar: ";
			cin >> outnrp;
			N.pop(outnrp);
			break;
		case 4:
			cout << "\nBarisan Saat ini\n";
			N.tampil();
			break;
		default:
			cout << "Pilihan anda tidak tersedia\n";
		}
	}
	cout << endl << "Barisan Penuh, Program Berhenti" << endl;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main()
{
	int jumlah;
	float nilai, total;
	printf("jumlah data : ");
	scanf_s("%d", &jumlah);
	for (int i = 1; i <= jumlah; i++)
	{
		printf("masukkan data ke %d : ", i);
		scanf_s("%f", &nilai);
		if (nilai < 0)
		{
			printf("\nMasukkan data ke %d : ", i);
			scanf_s("%f", &nilai);
			continue;
		}

		total = nilai + nilai;

	}
	printf("total mahasiswa : %d", jumlah);
	printf("\ntotal nilai adalah : %f", total);
	printf("\nrata-rata nilai : %f", total / jumlah);
}
*/
/*
#include <iostream>
using namespace std;
int TopA, TopB, NA[30], NB[30], NC[30];
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] < arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
		cout << endl;
}
void init()
{
	TopA = -1;
	TopB = -1;
}
void PUSH(int& jml)
{
	TopA++;
	for (TopA; TopA < jml; TopA++)
	{
		if (TopA < jml)
		{
			cout << "Masukkan Nilai ke - " << TopA + 1 << " : ";
			cin >> NA[TopA];
		}
		else
		{
			cout << "STACK PENUH";
			break;
		}
	}
}
void POP(int& jml)
{
	int i, j = 0;
	TopB++;
	cout << "\nIsi Dari Stack A saat ini : ";
	for (i = 0; i < jml; i++)
	{
		cout << NA[i] << " ";
	}
	for (i = jml - 1; i > -1; i--)
	{
		NB[TopB] = NA[i];
		TopB++;
		NC[TopB + 1] = i;
		jml--;
		TopA--;
		NC[j] = NA[i];
		j++;
	}
	cout << "\nIsi Dari Stack B adalah : ";
	bubbleSort(NB, TopB);
	printArray(NB, TopB);
	cout << "\nIsi Dari Stack A sekarang : ";
	for (i = 0; i < jml; i++)
	{
		cout << NA[i] << " ";
	}
	cout << endl << endl;
}
void main()
{
	int jumlah;
	init();
	cout << "Masukkan Jumlah Mahasiswa : ";
	cin >> jumlah;
	cout << endl;
	PUSH(jumlah);
	POP(jumlah);
}
*/
/*
#include <iostream>
#define n 20
int i = 0;
int jum;
using namespace std;
void bubble(int A[]) {
	for (int i = 0; i < n - 1; i++) {
		int flag = 0;
		for (int j = 0; j < n - i; j++) {
			if (A[j] < A[j + 1]) {
				if (j + 1 == n) {
					break;
				}
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
}
void cetak(int A[]) {
	for (int i = 0; i < jum; i++)
		cout << " " << A[i]; cout << endl;
}
int main() {
	int Arr[n];
	cout << "Jumlah Mahasiswa :";
	cin >> jum;
	while (i < jum) {
		cout << "Input Nilai Mahasiswa ke- " << i + 1 << ": ";
		cin >> Arr[i];
		i++;
	}
	cout << "Angka Sebelum diurutkan : ";
	cetak(Arr);
	bubble(Arr);
	cout << "Angka Setelah diurutkan : ";
	cetak(Arr);
}
*/
/*
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;
int main()
{
	int n, data[100000], i, j, temp;
	char ulang;
	do
	{
		system("cls");
		cout << "====================================== = \n";
		cout << "\tALGORITMA INSERTION SORT\n";
		cout << "====================================== = \n\n";
		cout << "Masukkan Jumlah Data: ";
		cin >> n;
		cout << endl;
		printf("Data sebelum diurutkan: ");
		for (i = 0; i < n; i++)
		{
			data[i] = rand() % n + 1;
			cout << data[i] << " ";
		}
		cout << endl << endl;
		double start = clock();
		srand(time(NULL));
		for (i = 1; i <= n - 1; i++) {
			temp = data[i];
			int j = i;
			while (j >= 0 && data[j - 1] > temp) {
				data[j] = data[j - 1];
				j--;
			}
			data[j] = temp;
		}
		printf("Data setelah diurutkan: ");
		for (i = 0; i <= n - 1; i++) {
			cout << data[i] << " ";
		}
		double stop = clock();
		cout << endl << endl;
		cout << "Waktu Eksekusi: " << (stop - start) << "ms";
		cout << endl << endl;
		cout << "Apakah ingin mengulang program? [y / t]: ";
		cin >> ulang;
	} while (ulang == 'y');
	return 0;
}
*/

//Praktikum 5 Doubly Linked List
//1
/*
#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node* prev;
};
void cetak(Node* n) {
	cout << "\nLinked list...." << endl;
	while (n != NULL) {
		cout << n->data << " <---> ";
		n = n->next;
	}
	if (n == NULL)
		cout << "null";
	cout << endl;
}
void insertKiri(Node** head, int ndata) {
	Node* nNode = new Node();
	nNode->data = ndata;
	nNode->next = (*head);
	nNode->prev = NULL;
	if ((*head) != NULL) {
		(*head)->prev = nNode;
	}
	(*head) = nNode;
}
int main() {
	Node* head;
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	first = new Node();
	second = new Node();
	third = new Node();
	first->data = 4;
	second->data = 10;
	third->data = 19;
	head = first;
	first->next = second;
	first->prev = NULL;
	second->next = third;
	second->prev = first;
	third->next = NULL;
	third->prev = second;
	cetak(head);
	int i;
	cout << "\nTambah baru : ";
	cin >> i;
	insertKiri(&head, i);
	cetak(head);
}
*/

//2
/*
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node* prev;
};
void cetak(Node* n) {
	cout << "\nLinked list...." << endl;
	while (n != NULL) {
		cout << n->data << " <---> ";
		n = n->next;
	}
	if (n == NULL)
		cout << "null";
	cout << endl;
}
void insertKanan(Node** head, int ndata) {
	Node* nNode = new Node();
	Node* tail = *head;
	nNode->data = ndata;
	nNode->next = NULL;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = nNode;
}
int main() {
	Node* head;
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	first = new Node();
	second = new Node();
	third = new Node();
	first->data = 4;
	second->data = 10;
	third->data = 19;
	head = first;
	first->next = second;
	first->prev = NULL;
	second->next = third;
	second->prev = first;
	third->next = NULL;
	third->prev = second;
	cetak(head);
	int i;
	cout << "\nTambah baru : ";
	cin >> i;
	insertKanan(&head, i);
	cetak(head);
}
*/

//3
/*
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node* prev;
};
void cetak(Node* n) {
	cout << "\nLinked list...." << endl;
	while (n != NULL) {
		cout << n->data << " <---> ";
		n = n->next;
	}
	if (n == NULL) {
		cout << "null";
		cout << endl;
	}
}
void insertTengah(Node* pNode, int ndata) {
	if (pNode == NULL) {
		cout << "Node sebelumnya tidak boleh null";
		return;
	}
	Node* nNode = new Node();
	nNode->data = ndata;
	nNode->next = pNode->next;
	pNode->next = nNode;
	nNode->prev = pNode;
	if (nNode->next != NULL) {
		nNode->next->prev = nNode;
	}
}
int main() {
	Node* head;
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	first = new Node();
	second = new Node();
	third = new Node();
	first->data = 4;
	second->data = 10;
	third->data = 19;
	head = first;
	first->next = second;
	first->prev = NULL;
	second->next = third;
	second->prev = first;
	third->next = NULL;
	third->prev = second;
	cetak(head);
	int i;
	cout << "\nTambah baru : ";
	cin >> i;
	insertTengah(head->next, i);
	cetak(head);
}
*/

//TUGAS 1
/*
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node* prev;
};
void cetak(Node* n) {
	cout << "\nLinked list...." << endl;
	while (n != NULL) {
		cout << n->data << " <---> ";
		n = n->next;
	}
	if (n == NULL) {
		cout << "null";
		cout << endl;
	}
}
void hapus(struct Node** head, int posisi) {
	if (*head == NULL)
		return;
	Node* hapus = new Node();
	//hapus head
	hapus = *head;
	if (posisi == 0) {
		*head = hapus->next;
	}
	for (int i = 0; hapus != NULL && i <= posisi - 1; i++) {
		hapus = hapus->next;
	}
	if (hapus == NULL) {
		cout << "Node Kosong" << endl;
		return;
	}
	if (hapus->prev != NULL) {
		hapus->prev->next = hapus->next;
	}
	if (hapus->next != NULL) {
		hapus->next->prev = hapus->prev;
	}
	free(hapus);
	return;
}
int main() {
	Node* head;
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	first = new Node();
	second = new Node();
	third = new Node();
	first->data = 4;
	second->data = 10;
	third->data = 19;
	head = first;
	first->next = second;
	first->prev = NULL;
	second->next = third;
	second->prev = first;
	third->next = NULL;
	third->prev = second;
	cetak(head);
	int i;
	cout << "Masukkan Target Node ke - ";
	cin >> i;
	hapus(&head, i - 1);
	cetak(head);
}
*/

//TUGAS 2
/*
#include <iostream>
using namespace std;
#define MAX1 20
#define MAX2 50
#define MAX3 10
class Node {
public:
	char NRP[MAX1], Nama[MAX2], kelas[MAX3];
	Node* next;
	Node* prev;
};
class Data {
public:
	Node* head;
	Data() {
		head = NULL;
	}
	void insert(char nrp_mhs[MAX1], char nama_mhs[MAX2], char
		kelas_mhs[MAX3]);
	void hapus(char tampung[30]);
	void tampil();
	void update(char tampung[30], char nama_mhs[MAX2], char
		kelas_mhs[MAX3]);
};
void Data::insert(char nrp_mhs[MAX1], char nama_mhs[30], char kelas_mhs[MAX3])
{
	Node* nNode = new Node();
	Node* tail = new Node();
	tail = head;
	strcpy_s(nNode->Nama, nama_mhs);
	strcpy_s(nNode->NRP, nrp_mhs);
	strcpy_s(nNode->kelas, kelas_mhs);
	if (head == NULL) {
		nNode->prev = NULL;
		head = nNode;
		return;
	}
	while (tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = nNode;
	nNode->prev = tail;
}
void Data::hapus(char tampung[MAX2]) {
	Node* tail = new Node();
	Node* temp = new Node();
	tail = head;
	while (tail != NULL) {
		if ((strcmp(tail->Nama, tampung) == 0) || (strcmp(tail->NRP,
			tampung) == 0)) {
			if (tail == head) {
				head = tail->next;
				if (tail->next != NULL)
					tail->next->prev = NULL;
				temp = tail;
				delete(tail);
				cout << "Data berhasil dihapus" << endl;
				break;
			}
			tail->prev->next = tail->next;
			if (tail->next != NULL) {
				tail->next->prev = tail->prev;
				temp = tail;
				delete(temp);
				cout << "Data berhasil dihapus" << endl;
				break;
			}
			temp = tail;
			delete(temp);
			cout << "Data berhasil dihapus" << endl;
			break;
		}
		tail = tail->next;
	}
}
void Data::update(char tampung[MAX2], char nama_mhs[MAX2], char
	kelas_mhs[MAX3]) {
	Node* temp = new Node();
	Node* tail = new Node();
	tail = head;
	while (tail != NULL) {
		if ((strcmp(tail->Nama, tampung) == 0) || (strcmp(tail->NRP,
			tampung) == 0)) {
			strcpy_s(tail->Nama, nama_mhs);
			strcpy_s(tail->kelas, kelas_mhs);
			cout << "\nData berhasil diupdate";
		}
		tail = tail->next;
	}
}
void Data::tampil() {
	Node* temp = new Node();
	temp = head;
	if (temp == NULL)
		cout << "\nData Kosong\n";
	while (temp != NULL) {
		cout << "\nNama Mahasiswa : " << temp->Nama << endl;
		cout << "NRP Mahasiswa : " << temp->NRP << endl;
		cout << "Kelas Mahasiswa: " << temp->kelas << endl << endl;
		temp = temp->next;
	}
}
int main() {
	Data N;
	int pil;
	char nrp1[MAX1], nama1[MAX2], kelas1[MAX3];
	char tampung[30];
	while (1) {
		cout << endl << "Pilihan Menu: \n";
		cout << "1.Insert Data\n2.Delete Data\n3.Update Data\n4.Tampil Data\n5.Exit\n";
		cout << "Pilihan: ";
		cin >> pil;
		switch (pil) {
		case 1:
			cout << "\nInput Nama : ";
			cin >> nama1;
			cout << "Input NRP : ";
			cin >> nrp1;
			cout << "Input Kelas: ";
			cin >> kelas1;
			N.insert(nrp1, nama1, kelas1);
			cout << endl;
			cout << "Data Berhasil ditambahkan" << endl;
			break;
		case 2:
			cout << "\nInput Nama/NRP Untuk dihapus: ";
			cin >> tampung;
			N.hapus(tampung);
			break;
		case 3:
			cout << "\nInput Nama/NRP Untuk diupdate: ";
			cin >> tampung;
			cout << "Input Nama Baru : ";
			cin >> nama1;
			cout << "Input Kelas Baru: ";
			cin >> kelas1;
			N.update(tampung, nama1, kelas1);
			cout << endl;
			break;
		case 4:
			N.tampil();
			break;
		case 5:
			exit(1);
		default:
			cout << "\nPilihan anda tidak tersedia" << endl;
		}
	}
}
*/

//Praktikum 6 Sorting
//1
/*
#include<iostream>
#define n 8
using namespace std;
void bubble(int A[]) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			if (A[j] > A[j + 1]) {
				if (j + 1 == n) {
					break;
				}
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}
void cetak(int A[]) {
	for (int i = 0; i < n; i++)
		cout << " " << A[i];
	cout << endl;
}
int main() {
	int Arr[n] = { 15, 10, 7, 50, 3, 1, 36, 5 };
	cout << "----Bubble Sort----" << endl;
	cout << "Sebelum diurutkan : ";
	cetak(Arr);
	bubble(Arr);
	cout << "Setelah diurutkan : ";
	cetak(Arr);
}
*/

//2
/*
#include<iostream>
#define n 8
using namespace std;
void bubble(int A[]) {
	for (int i = 0; i < n - 1; i++) {
		int flag = 0;
		for (int j = 0; j < n - i; j++) {
			if (A[j] > A[j + 1]) {
				if (j + 1 == n) {
					break;
				}
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
}
void cetak(int A[]) {
	for (int i = 0; i < n; i++)
		cout << " " << A[i]; cout << endl;
}
int main() {
	int Arr[n] = { 15, 10, 7, 50, 3, 1, 36, 5 };
	cout << "----Bubble Sort----" << endl;
	cout << "Sebelum diurutkan : ";
	cetak(Arr);
	bubble(Arr);
	cout << "Setelah diurutkan : ";
	cetak(Arr);
}
*/

//3
/*
#include<iostream>
#define n 8
using namespace std;
void insertion(int A[]) {
	for (int i = 1; i < n; i++) {
		int k = A[i]; int j = i - 1;
		while (k < A[j] && j >= 0) {
			A[j + 1] = A[j];
			j--;
			A[j + 1] = k;
		}
	}
}
void cetak(int A[]) {
	for (int i = 0; i < n; i++)
		cout << " " << A[i]; cout << endl;
}
int main() {
	int Arr[n] = { 25, 9, 7, 50, 97, 1, 36, 3 };
	cout << "----Insertion Sort----" << endl;
	cout << "Sebelum diurutkan : ";
	cetak(Arr);
	insertion(Arr);
	cout << "Setelah diurutkan : ";
	cetak(Arr);
}
*/

//4
/*
#include<iostream>
#define n 8
using namespace std;
void selection(int A[]) {
	for (int i = 0; i < n - 1; i++) {
		int mi = i;
		for (int j = i + 1; j < n; j++) {
			if (A[j] < A[mi])
				mi = j;
		}
		int temp = A[mi];
		A[mi] = A[i];
		A[i] = temp;
	}
}
void cetak(int A[]) {
	for (int i = 0; i < n; i++)
		cout << " " << A[i];
	cout << endl;
}
int main() {
	int Arr[n] = { 80, 5, 3, 10, 20, 68,36,24 };
	cout << "----Selection Sort----" << endl;
	cout << "Sebelum diurutkan : ";
	cetak(Arr);
	selection(Arr);
	cout << "Setelah diurutkan : ";
	cetak(Arr);
}
*/

//TUGAS 1
/*
#include<iostream>
using namespace std;
int n, i;
char temp[30];
struct mahasiswa {
	char Nama[30];
	long int NRP;
}mhs[30];
void insertion() {
	for (int i = 1; i < n; i++) {
		int k = mhs[i].NRP;
		strcpy_s(temp, mhs[i].Nama);
		int j = i - 1;
		while (k < mhs[j].NRP && j >= 0) {
			mhs[j + 1].NRP = mhs[j].NRP;
			strcpy_s(mhs[j + 1].Nama, mhs[j].Nama);
			j--;
			mhs[j + 1].NRP = k;
			strcpy_s(mhs[j + 1].Nama, temp);
		}
	}
}
void cetak() {
	for (int i = 0; i < n; i++) {
		cout << endl << mhs[i].Nama << endl;
		cout << mhs[i].NRP << endl;
	}
}
void main() {
	cout << "Input Jumlah Mahasiswa: ";
	cin >> n;
	while (i < n) {
		cout << "Input Nama Mahasiswa ke-" << i + 1 << ": ";
		cin >> mhs[i].Nama;
		cout << "Input NRP Mahasiswa ke-" << i + 1 << ": ";
		cin >> mhs[i].NRP;
		i++;
	}
	cout << endl << "Data Mahasiswa Sebelum disortir :" << endl;
	cetak();
	cout << endl << "Data Mahasiswa Sesudah disortir :" << endl;
	insertion();
	cetak();
}
*/
/*
#include<iostream>
using namespace std;
int n, i;
char tmp[30];
struct mahasiswa {
	char Nama[30];
	long int NRP;
}mhs[30];
void selection() {
	for (int i = 0; i < n - 1; i++) {
		int mi = i;
		for (int j = i + 1; j < n; j++) {
			if (mhs[j].NRP < mhs[mi].NRP)
				mi = j;
		}
		int temp = mhs[mi].NRP;
		strcpy(tmp, mhs[mi].Nama);
		strcpy(mhs[mi].Nama, mhs[i].Nama);
		mhs[mi].NRP = mhs[i].NRP;
		mhs[i].NRP = temp;
		strcpy(mhs[i].Nama, tmp);
	}
}
void cetak() {
	for (int i = 0; i < n; i++) {
		cout << endl << mhs[i].Nama << endl;
		cout << mhs[i].NRP << endl;
	}
}
void main() {
	cout << "Input Jumlah Mahasiswa: ";
	cin >> n;
	while (i < n) {
		cout << "Input Nama Mahasiswa ke-" << i + 1 << ": ";
		cin >> mhs[i].Nama;
		cout << "Input NRP Mahasiswa ke-" << i + 1 << ": ";
		cin >> mhs[i].NRP;
		i++;
	}
	cout << endl << "Data Mahasiswa Sebelum disortir :" << endl;
	cetak();
	cout << endl << "Data Mahasiswa Sesudah disortir :" << endl;
	selection();
	cetak();
}
*/

//TUGAS 2
/*
#include<iostream>
#define n 20
int i = 0, jum;
using namespace std;
void bubble(int A[]) {
	for (int i = 0; i < n - 1; i++) {
		int flag = 0;
		for (int j = 0; j < n - i; j++) {
			if (A[j] < A[j + 1]) {
				if (j + 1 == n) {
					break;
				}
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
}
void cetak(int A[]) {
	for (int i = 0; i < jum; i++)
		cout << " " << A[i]; cout << endl;
}
int main() {
	int Arr[n];
	cout << "Jumlah Mahasiswa :";
	cin >> jum;
	while (i < jum) {
		cout << "Input Nilai Mahasiswa ke- " << i + 1 << ": ";
		cin >> Arr[i];
		i++;
	}
	cout << "Nilai mahasiswa Sebelum diurutkan : ";
	cetak(Arr);
	bubble(Arr);
	cout << "Nilai mahasiswa Setelah diurutkan : ";
	cetak(Arr);
}
*/

//TUGAS 3
//Bubble Sort
/*
#include<iostream>
#define n 8
using namespace std;
void bubble(int A[], int z) {
	if (z == n)
		return;
	for (int j = 0; j < n - z; j++) {
		if (A[j] > A[j + 1]) {
			for (int i = 0; i < n; i++)
				cout << " " << A[i];
			cout << endl;
			if (j + 1 == n) {
				break;
			}
			int temp = A[j];
			A[j] = A[j + 1];
			A[j + 1] = temp;
		}
	}
	bubble(A, z + 1);
}
void cetak(int A[]) {
	for (int i = 0; i < n; i++)
		cout << " " << A[i];
	cout << endl;
}
int main() {
	int Arr[n] = { 15, 10, 7, 50, 3, 1, 36, 5 };
	cout << "----Bubble Sort----" << endl;
	cout << "Sebelum diurutkan : ";
	cetak(Arr);
	bubble(Arr, 0);
	cout << "Setelah diurutkan : ";
	cetak(Arr);
}
*/

/*
#include<iostream>
#define n 8
using namespace std;
void insertion(int A[], int z) {
	if (z == n) {
		return;
	}
	int k = A[z]; int j = z - 1;
	while (k < A[j] && j >= 0) {
		A[j + 1] = A[j];
		j--;
		A[j + 1] = k;
	}
	insertion(A, z + 1);
}
void cetak(int A[]) {
	for (int i = 0; i < n; i++)
		cout << " " << A[i]; cout << endl;
}
int main() {
	int Arr[n] = { 25, 9, 7, 50, 97, 1, 36, 3 };
	cout << "----Insertion Sort----" << endl;
	cout << "Sebelum diurutkan : ";
	cetak(Arr);
	insertion(Arr, 0);
	cout << "Setelah diurutkan : ";
	cetak(Arr);
}
*/
/*
#include<iostream>
#define n 8
using namespace std;
void selection(int A[], int z) {
	if (z == n) {
		return;
	}
	int mi = z;
	for (int j = z + 1; j < n; j++) {
		if (A[j] < A[mi])
			mi = j;
	}
	int temp = A[mi];
	A[mi] = A[z];
	A[z] = temp;
	selection(A, z + 1);
}
void cetak(int A[]) {
	for (int i = 0; i < n; i++)
		cout << " " << A[i]; cout << endl;
}
int main() {
	int Arr[n] = { 80, 5, 3, 10, 20, 68, 36, 24 };
	cout << "----Selection Sort----" << endl;
	cout << "Sebelum diurutkan : ";
	cetak(Arr);
	selection(Arr, 0);
	cout << "Setelah diurutkan : ";
	cetak(Arr);
}
*/

//Praktikum 7 - Searching
//1
/*
#include <iostream>
using namespace std;
int binarySearch(int arr[], int x, int Lo, int Hi) {
	if (Hi >= Lo) {
		int mid = Lo + (Hi - Lo) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, x, Lo, mid - 1);
		return binarySearch(arr, x, mid + 1, Hi);
	}
	return -1;
}
int main(void) {
	int arr[] = { 1, 3, 4, 5, 6, 7, 8, 9, 15, 20, 25, 34, 38, 45, 50 };
	int x;
	for (const int& i : arr) {
		cout << i << " ";
	}
	cout << endl;
	cout << "Data yang ingin dicari : ";
	cin >> x;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, x, 0, n - 1);
	if (result == -1)
		cout << "Tidak ditemukan" << endl;
	else
		cout << "Elemen terletak pada indeks ke-" << result << endl;
}
*/

//2
/*
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x) {
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}
int main() {
	int arr[] = { 2, 4, 0, 1, 9, 5, 24, 30, 45, 60, 63 };
	int x;
	for (const int& i : arr) {
		cout << i << " ";
	}
	cout << endl;
	cout << "Data yang ingin dicari : ";
	cin >> x;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = linearSearch(arr, n, x);
	(result == -1)
		? cout << "Tidak ditemukan" << endl
		: cout << "Elemen terletak pada indeks ke-" << result << endl;
}
*/

//TUGAS 1
/*
#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
class search {
public:
	Node* head;
public:
	search() {
		head = NULL;
	}
	void IsiNode(int i);
	void Tampil(int i);
	void CariData(int cr);
};
void search::IsiNode(int i) {
	if (i > 10)
		return;
	Node* temp = new Node();
	Node* last = head;
	temp->data = i;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		IsiNode(i + 1);
		return;
	}
	while (last->next != NULL) {
		last = last->next;
	}
	last->next = temp;
	IsiNode(i + 1);
}
void search::Tampil(int i) {
	Node* temp = head;
	while (temp->next != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
void search::CariData(int ndata) {
	int i = 0;
	Node* temp = head;
	while (temp->next != NULL) {
		if (ndata == temp->data) {
			cout << "Data '" << temp->data << "' ada pada indeks ke-"
				<< i << endl;
			return;
		}
		temp = temp->next;
		i++;
	}
	cout << "Tidak ada data" << endl;
}
void main() {
	int x;
	search N;
	N.IsiNode(0);
	N.Tampil(0);
	cout << "Data yang ingin dicari: ";
	cin >> x;
	N.CariData(x);
}
*/

//TUGAS 2
/*
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int input, int Lo, int Hi) {
	if (Hi >= Lo) {
		int mid = Lo + (Hi - Lo) / 2;
		if (arr[mid] == input)
			return mid;
		if (arr[mid] > input)
			return BinarySearch(arr, input, Lo, mid - 1);
		return BinarySearch(arr, input, mid + 1, Hi);
	}
	return -1;
}
void InsertionSort(int A[], int n) {
	for (int i = 1; i < n; i++) {
		int k = A[i];
		int j = i - 1;
		for (int i = 0; i < n; i++)
			cout << " " << A[i]; cout << endl;
		while (k < A[j] && j >= 0) {
			A[j + 1] = A[j];
			j--;
			A[j + 1] = k;
		}
	}
}
void main() {
	int arr[100], max, ndata;
	cout << "Max data: ";
	cin >> max;
	cout << "List Random Data: " << endl;
	for (int i = 0; i < max; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << "\n\n";
	InsertionSort(arr, max);
	cout << "\n\nSorted data :" << endl;
	for (int i = 0; i < max; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n\nInput Data yang ingin dicari: ";
	cin >> ndata;
	int res = BinarySearch(arr, ndata, 0, max);
	if (res == -1) {
		cout << "\nData '" << ndata << "' tidak ditemukan" << endl;
	}
	else
	{
		cout << "\nData '" << ndata << "' ada pada indeks ke-" << res <<
			endl;
	}
}
*/
/*
#include <iostream>

void idealLPF(int tap, float lambda)
{
	int n;
	float m, h[100];

	printf("Koefisien filter LPF dengan frekuensi cut off %f adalah: \n", lambda);
	for (n = 0; n < tap; n++)
	{
		m = n - (float)(tap - 1) / 2.0;
		if (m == 0)
			h[n] = lambda / pi;
		else
			h[n]=sin(m * lambda) / (m * pi);
		printf("h[%d]=%4.4f\n", n, h[n]);

	}
}
*/
/*
#include <stdio.h> 
#include <math.h>
#include <iostream>
using namespace std;
#define pi 3.14
void idealHPF(int tap, float lambda)
{
	int n;
	float m, h[100];
	printf("Koefisien filter HPF dengan frekuensi cut off %4.4f adalah : \n", lambda);
	for (n = 0; n < tap; n++)
	{
		m = n - (float)(tap - 1) / 2.0;
		if (m == 0)
			h[n] = 1 - (lambda / pi);
		else
			h[n] = -sin(m * lambda) / (m * pi);
		printf("h[%d] = %4.4f\n", n, h[n]);
	}
}
int main() {
	int tap;
	float lambda, lambdaU;
	cout << "Masukkan Jumlah tap filter : ";
	cin >> tap;
	cout << "Masukkan frekuensi cut off Lower : ";
	cin >> lambda;
	cout << "Masukkan frekuensi cut off Upper : ";
	cin >> lambdaU;
	idealHPF(tap, lambda);
}
*/

//Sinyal Dan Sistem
/*
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void idealLPF(int tap, float lambda, int fsampling) {
	int n;
	float m, h[100];
	cout << "Koefisien filter LPF dengan frekuensi cut-off " << lambda << "kHz adalah :" << endl;
	lambda = (lambda * M_PI) / fsampling;
	for (n = 0; n < tap; n++)
	{
		m = n - (float)(tap - 1) / 2.0;
		if (m == 0)
			h[n] = lambda / M_PI;
		else
			h[n] = sin(m * lambda) / (m * M_PI);
		cout << h[n] << " ";
	}
}

int main() {
	idealLPF(7, 3000, 8000);
	//idealHPF(21, 2000, 8000);
	//idealBPF(21, 3000, 5000, 8000);
	//idealBSF(21, 2000, 4000, 8000);
	return 0;
}
*/
/*
void idealLPF(int tap, float lambda, int fsampling) {
	int n;
	float m, h[100];
	cout << "Koefisien filter LPF dengan frekuensi cut-off " << lambda << "kHz adalah :" << endl;
	lambda = (lambda * M_PI) / fsampling;
	for (n = 0; n < tap; n++)
	{
		m = n - (float)(tap - 1) / 2.0;
		if (m == 0)
			h[n] = lambda / M_PI;
		else
			h[n] = sin(m * lambda) / (m * M_PI);
		cout << h[n] << " ";
	}
}
*/
/*
void idealHPF(int tap, float lambda, int sampling) {
	int n;
	float m, h[100];
	cout << "\n" << endl;
	cout << "Koefisien filter HPF dengan frekuensi cutoff " << lambda << " adalah : " << endl;
	lambda = (lambda * M_PI) / sampling;
	for (n = 0; n < tap; n++) {
		m = n - (float)(tap - 1) / 2.0;
		if (m == 0) {
			h[n] = 1-(lambda / M_PI);
		}
		else {
			h[n] = -sin(m * lambda) / (m * M_PI);
		}
		cout << h[n] << " ";
	}
}
*/
/*
void idealBSF(int tap, float lambdaL, float lambdaU, int sampling) {
	int n;
	float m, h[100];
	cout << "\n" << endl;
	cout << "Koefisien filter BPS dengan frekuensi lower cutoff " << lambdaL <<" dan frekuensi upper cutoff "<< lambdaU << " adalah : " << endl;
	lambdaL = (lambdaL * M_PI) / sampling;
	lambdaU = (lambdaU * M_PI) / sampling;
	for (n = 0; n < tap; n++) {
		m = n - (float)(tap - 1) / 2.0;
		if (m == 0) {
			h[n] = (1+(lambdaL-lambdaU)) / M_PI;
		}
		else {
			h[n] = (sin(m*lambdaL)-sin(m*lambdaU)) / m * M_PI;
		}
		cout << h[n] << " ";
	}
}
*/

//UAS
/*
#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
};
void Tampil(Node* n)
{
	while (n != NULL)
	{
		cout << n->data << " ---> ";
		n = n->next;
	}
	cout << endl;
}
void insertKiri(Node** head, int ndata) {
	Node* nNode = new Node();
	nNode->data = ndata;
	nNode->next = (*head);
	(*head) = nNode;
}
void insertKanan(struct Node** head, int ndata)
{
	struct Node* nNode = (struct Node*)malloc(sizeof(struct Node));
	struct Node* last = *head;
	nNode->data = ndata;
	nNode->next = NULL;
	while (last->next != NULL)
		last = last->next;
	last->next = nNode;
}
struct Node* recursiveReverseLL(struct Node* first)
{
	if (first == NULL) return NULL;
	if (first->next == NULL) return first;
	struct Node* rest = recursiveReverseLL(first->next);
	first->next->next = first;
	first->next = NULL;
	return rest;
}
void hapus(struct Node** head, int X)
{
	struct Node* temp = *head, * prev = NULL;
	if (temp != NULL && temp->data == X)
	{
		*head = temp->next;
		free(temp);
		return;
	}
	while (temp != NULL && temp->data != X)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return;
	prev->next = temp->next;
	free(temp);
}
int main()
{
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	Node* revHead = NULL;
	first = new Node();
	second = new Node();
	third = new Node();
	revHead = new Node();
	first->data = 1;
	first->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	cout << "Node awal Linked List\n";
	Tampil(first);
	int ndata, pil, nhapus;
	revHead = recursiveReverseLL(first);
	cout << "Node setelah dibalik\n";
	Tampil(revHead);
	cout << "\n\n";
	while (1)
	{
		cout << "Pilihan Aksi: \n";
		cout << "1.Input Awal\n2.Input Akhir\n3.Hapus\n4.Keluar\n";
		cout << "Pilih : ";
		cin >> pil;
		switch (pil)
		{
		case 1:
			cout << "Masukkan nilai : ";
			cin >> ndata;
			insertKiri(&revHead, ndata);
			Tampil(revHead);
			cout << endl;
			break;
		case 2:
			cout << "Masukkan nilai : ";
			cin >> ndata;
			insertKanan(&revHead, ndata);
			Tampil(revHead);
			cout << endl;
			break;
		case 3:
			cout << "Masukkan nilai yang dihapus : \n";
			cin >> nhapus;
			hapus(&revHead, nhapus);
			Tampil(revHead);
			cout << endl;
			break;
		case 4:
			exit(1);
		}
	}
}

*/

//POST TEST
//2
/*
#include <iostream>
using namespace std;
struct peserta {
	char Nama[50];
	long long int NIK;
}
Peserta[100];
int MAX;
void BubbleSort() {
	for (int i = 0; i < MAX - 1; i++) {
		for (int j = 0; j < MAX - i; j++) {
			if (Peserta[j].NIK > Peserta[j + 1].NIK) {
				if (j + 1 == MAX) {
					break;
				}
				char temp2[30];
				long long int temp;
				temp = Peserta[j].NIK;
				strcpy_s(temp2, Peserta[j].Nama);
				strcpy_s(Peserta[j].Nama, Peserta[j + 1].Nama);
				Peserta[j].NIK = Peserta[j + 1].NIK;
				strcpy_s(Peserta[j + 1].Nama, temp2);
				Peserta[j + 1].NIK = temp;
			}
		}
	}
	cout << endl << "Peserta Sudah Diurutkan" << endl << "List Peserta yang Sudah Urut : " << endl;
}
void tampil() {
	for (int i = 0; i < MAX; i++) {
		cout << "Nama Peserta ke-" << i + 1 << ": " << Peserta[i].Nama << endl;
		cout << "NIK Peserta ke-" << i + 1 << ": " << Peserta[i].NIK << endl;
	}
}
void main() {
	int x, pil;
	cout << "Kuota Pendaftaran: ";
	cin >> x;
	while (1) {
		cout << endl << "Menu Program" << endl;
		cout << "1.Input Peserta\n2.View Peserta\n3.Sort Peserta\n4.Exit Program\n";
			cout << "Input Pilihan: ";
		cin >> pil;
		switch (pil) {
		case 1:
			if (x <= MAX) {
				cout << endl << "Kuota Sudah Penuh!!!" << endl;
				break;
			}
			cout << "Nama Lengkap: ";
			cin >> Peserta[MAX].Nama;
			cout << "NIK: ";
			cin >> Peserta[MAX].NIK;
			MAX++;
			break;
		case 2:
			cout << endl << "List Peserta : " << endl;
			tampil();
			break;
		case 3:
			BubbleSort();
			tampil();
			break;
		case 4:
			exit(1);
		default: cout << endl << "Pilihan Anda Tidak ada pada Menu" <<
			endl;
			break;
		}
	}
}
*/

//3
/*
#include <iostream>
using namespace std;
struct antrian {
	int nomor;
	char nama[50];
}antrian1[30], antrian2[30];
void tampil(int x) {
	cout << endl << "Antrian ke-1 " << endl;
	for (int i = 0; i < x; i++) {
		cout << "Nama : " << antrian1[i].nama << endl;
		cout << "No Antrian : " << antrian1[i].nomor << endl;
	}
	cout << endl << "Antrian ke-2 " << endl;
	for (int i = 0; i < x; i++) {
		cout << "Nama : " << antrian2[i].nama << endl;
		cout << "No Antrian : " << antrian2[i].nomor << endl;
	}
}
void main() {
	int x, i = 0, j = 0;
	cout << "Masukkan batas per antrian: ";
	cin >> x;
	while (1) {
		if (i < x) {
			cout << "Masukkan nama antrian ke-" << i + 1 << ": ";
			cin >> antrian1[i].nama;
			cout << "Masukkan nomor antrian ke-" << i + 1 << ": ";
			cin >> antrian1[i].nomor;
			i++;
		}
		else
		{
			cout << "Masukkan nama antrian ke-" << i + 1 << ": ";
			cin >> antrian2[j].nama;
			cout << "Masukkan nomor antrian ke-" << i + 1 << ": ";
			cin >> antrian2[j].nomor;
			j++;
			i++;
			if (j == x) {
				break;
			}
		}
	}
	tampil(x);
};
*/

//4

#include <iostream>
using namespace std;
struct Buku {
	char judul[30], pengarang[30], penerbit[30];
};
struct pelanggan {
	int nomor, jum = 0;
	char nama[30], alamat[30];
	struct Buku B[30];
}Pelanggan[30];
void tampil(int x) {
	int j = 0;
	for (int i = 0; Pelanggan[i].nomor != NULL; i++) {
		cout << endl << "Orderan ke-" << Pelanggan[i].nomor << endl;
		cout << "Nama Pemesan: " << Pelanggan[i].nama << endl;
		cout << "Alamat Pemesan: " << Pelanggan[i].alamat << endl;
		while (j < Pelanggan[i].jum) {
			cout << endl << "Judul Buku ke-" << j + 1 << ": " <<
				Pelanggan[i].B[j].judul << endl;
			cout << "Pengarang ke-" << j + 1 << ": " <<
				Pelanggan[i].B[j].pengarang << endl;
			cout << "Penerbit Buku ke-" << j + 1 << ": " <<
				Pelanggan[i].B[j].penerbit << endl << endl;
			j++;
		}
		j = 0;
	}
}
void main() {
	int pil1, pil2, i = 0, j = 0, x, loop = 1;
	cout << "Batas Orderan Hari Ini: ";
	cin >> x;
	while (i < x) {
		cout << endl << "Menu Pemilihan : " << endl;
		cout << "1.Masukkan Pelanggan\n2.Kirim\n";
		cout << "Input: ";
		cin >> pil1;
		switch (pil1) {
		case 1:
			cout << "Nama Pelanggan : ";
			cin >> Pelanggan[i].nama;
			cout << "Alamat Pemesan : ";
			cin >> Pelanggan[i].alamat;
			Pelanggan[i].nomor = i + 1;
			while (loop) {
				cout << endl << "Menu Input Buku : " << endl;
				cout << "1.Input Buku\n2.Selesai\n";
				cout << "Input: ";
				cin >> pil2;
				switch (pil2) {
				case 1:
					cout << "Judul : ";
					cin >> Pelanggan[i].B[j].judul;
					cout << "Pengarang : ";
					cin >> Pelanggan[i].B[j].pengarang;
					cout << "Penerbit : ";
					cin >> Pelanggan[i].B[j].penerbit;
					Pelanggan[i].jum++;
					j++;
					break;
				case 2:
					if (j == 0) {
						cout << "\nAnda Harus Memesan Buku Terlebih Dahulu!\n";
					}
					else {
						loop = 0;
						break;
					}
					break;
				default:
					cout << "\nPilihan Tidak ada pada Menu!!!\n";
					break;
				}
			}
			j = 0;
			i++;
			loop = 1;
			break;
		case 2:
			if (i == 0) {
				cout << "\nTidak ada pesanan yang dikirim!\nMohon Masukkan data Pelanggan!\n";
			}
			else {
				cout << "\nPesanan akan dikirim\n";
				tampil(x);
				return;
				break;
			}
			break;
		default:
			cout << "\nPilihan Tidak ada pada Menu!!!\n";
			break;
		}
	}
	cout << "\nPelanggan Penuh\nPesanan akan dikirim\n";
	tampil(x);
}

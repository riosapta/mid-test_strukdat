
/*UTS Strukdat
Nama: Rio Sapta Samudera
NPM : 140810180030
Desc: Soal-1
*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct node {
    string makanan;
	int jumlah;
	int harga;
	node* next;
};

typedef node* pointer;
typedef pointer list;

void createList(list& first) {
	first = NULL;
}

void createElement(pointer& pBaru) {
	pBaru = new node;
	cout << "Masukkan nama makanan  : "; cin >> pBaru->makanan;
	cout << "Masukkan harga makanan : "; cin >> pBaru->harga;
	pBaru->next = NULL;
}

void insertLast(list& first, pointer pBaru) {
	pointer last;
	if (first == NULL) {
		first = pBaru;
	}
	else {
		last = first;
		while (last->next != NULL) {
			last = last->next;
		}
		last->next = pBaru;
	}
}


void transversal(list first, string name) {
	pointer pBantu;
	int i = 1;
	if (first == NULL) cout << "List Kosong.";
	else
	{
		pBantu = first;
		cout << "\n\nNama Pemesan: " << name << endl;
		cout << "No\tNama\t\tJumlah\tHarga Satuan" << endl;
		do
		{
			cout << i << "\t";
			cout << pBantu->makanan <<"\t" << pBantu->jumlah << "\t" << pBantu->harga << endl;
			i++;
			pBantu = pBantu->next;
		} while (pBantu != NULL);
	}
	cout << endl;
}

void search(node* &first, string Key, list* &pToUpdate) {
	node* pBantu = first;
	while (pBantu != NULL) {
		if (pBantu->makanan == Key) {
			//pToUpdate = pBantu;
			break;
		}
		else pBantu = pBantu->next;
	}
}

void update(node* first, string Key) {
	node* pBantu = first;
	search(first, Key, pBantu);
	cout << "Masukkan jumlah makanan"
}

int main() {
	int n;
	string nama, kunci;
	list x;
	pointer p;
	createList(x);
	cout << "Masukkan nama anda: "; getline(cin, nama);
	cout << "Masukkan menu makanan: "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nMenu ke " << i + 1 << endl;
		createElement(p);
		insertLast(x, p);
	}
	transversal(x, nama);
	cout << "Update jumlah makanan." << endl;
	update (x)
}

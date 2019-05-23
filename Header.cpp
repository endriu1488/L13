#include "Header.h"

int f(char * key)
{
	int sum=0;
	for (int i = 0; i < sizeof(key) / sizeof(char);++i) {
		sum = sum + *(key+i);
	}
	return sum%M;
}

Nod* cautare(char * key, Nod* HT[M])
{
	int h = f(key);
	Nod* p = HT[h];

	while (p != 0) {
		if (strcmp(key, p->key) == 0)
			return p;
	}
	return 0;
}

void inserare(char* key, int data, Nod* HT[M]) {
	Nod *p = new Nod;
	p->data = data;
	p->key = key;

	int h = f(p->key);

	if (HT[h] == 0) {
		HT[h] = p;
		p->next = 0;
	}
	else {
		Nod * q = cautare(p->key, HT);
		if (q == 0) {
			p->next = HT[h];
			HT[h] = p;
		}
		else {
			prelucrare(p, q);
		}
	}

}

void prelucrare(Nod*p, Nod*q) {
	/*
	stergere / actualizare : TO-DO
	*/
}
void afisare(Nod * HT[M]) {
	for (int i = 0; i < M; ++i) {
		cout << "Inregistrari avand codul de dispersie " << i << " ";
		Nod*p = HT[i];
		while (p != 0) {
			cout << p->data << "::" << p->key << "  ";
			p = p -> next;
		}
		cout << endl;
}
}


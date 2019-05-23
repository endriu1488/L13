#pragma once
#define M 87
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Nod {
	char* key;
	int data;
	Nod* next;
};

int f(char *key);
Nod* cautare(char * key, Nod* HT[M]);
void inserare(char* key, int data, Nod* HT[M]);
void prelucrare(Nod*p, Nod*q);
void afisare(Nod * HT[M]);
#include "Header.h"

int main() {
	
	Nod *HT[M] = { 0 };
	char* key = 0;
	/*char buff[100];
	ifstream dict("dictionar.txt");
		while (!dict.eof())
		{
			dict >> buff;
			key = new char[strlen(buff)];
			strcpy(key, buff);
			inserare(key, 1, HT);
		}	*/
	char*test="cheie_test";
	int data=10;
	inserare(test, data, HT);
	afisare(HT);

	system("pause");
}
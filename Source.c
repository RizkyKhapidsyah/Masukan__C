#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {

	int X, Jam, Menit, Detik;
	unsigned int Y;
	float Z;
	char Nama[31];

	scanf_s("%i", &X);
	scanf_s("%u", &Y);
	scanf_s("%f", &Z);
	scanf_s("%i %i %i", &Jam, &Menit, &Detik);

	fflush(stdin);
	sscanf_s("%s", Nama);
	
	_getch();
	return 0;
}
#include <stdio.h>
int main()
{
	float phi,r,luas;
	printf("Masukan panjang jari-jari lingkaran : ");
	scanf("%f",&r);
	phi=3.142857142857143;
	luas=phi*r*r;
	printf("Luas lingkaran adalah %f",luas);
}

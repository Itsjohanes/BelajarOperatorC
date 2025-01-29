#include <stdio.h>

int main(){
	//Deklarasi Variable
	int a,b,penjumlahan,pengurangan,perkalian,pembagian,modulo;
	//Input Variable 
	scanf("%d",&a);
	scanf("%d",&b);
	//Operasi Variable
	penjumlahan = a+b;
	pengurangan = a-b;
	perkalian = a*b;
	pembagian = a/b;
	modulo = a % b;
	//Output
	printf("%d\n",penjumlahan);
	printf("%d\n",pengurangan);
	printf("%d\n",perkalian);
	printf("%d\n",pembagian);
	printf("%d\n",modulo);	
}

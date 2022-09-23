#include <stdio.h>


int main(){
	unsigned char a = 99;
	signed char b = -9;
	unsigned short c = 9999;
	signed short d = -9999;
	unsigned int e = 999;
	signed int f = -9999999;
	unsigned long int g = 99999;
	signed long int h = -999999999;
	unsigned long long int i = 999999;
	signed long long int j = -9999999;
	float k = 999.999;
	double l = 999999.9999;
	long double m = 9999999.9999;

    printf("char non signé:%c \n",a);
    printf("char signé:%hhu \n",b);
    printf("short non signé:%hd \n",c);
    printf("short signé:%hu \n",d);
    printf("int non signé:%i \n",e);
    printf("int signé:%u \n",f);
    printf("long int non signé:%ld \n",g);
    printf("long int signé:%lu \n",h);
    printf("long long int :%lld \n",i);
    printf("long long int non signé:%llu \n",j);
    printf("float:%f \n",k);
    printf("double:%g \n",l);
    printf("long double:%Lg \n",m);
    return 0;
    }
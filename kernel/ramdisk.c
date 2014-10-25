#include<stdio.h>

char a[]="hello world";
void rd_init(int,int);

int main(){
	int length=strlen(a);
	rd_init(&a[0],length);
	printf("%s\n",a);
	return 0;
}

void rd_init(int mem_start,int length){
	int i;
	char *cp;
	cp=(char *)mem_start;
	for(i=0;i<length;i++)
		*cp++='h';
}

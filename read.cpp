#include<iostream>
#include<ctime>
#include<cstdio>
#include<unistd.h>
#include<fcntl.h>
const int MAXN = 10000000;
const int MAXS = 60*1024*1024;
int numbers[MAXN];
char buf[MAXS];

void analyse(char *buf, int len =MAXS)
{
	int i;
	numbers[i=0]=0;
	for(char *p=buf;*p && p-buf<len;p++)
	if(*p == ' ')
		numbers[++i]=0;
	else
		numbers[i]=numbers[i]*10+*p-'0';
}

void read_analyse()
{
	int fd = open("data.txt",O_RDONLY);
	int len = read(fd,buf,MAXS);
	buf[len]='\0';
	analyse(buf,len);
}

int main ()
{
	int start = clock();
	read_analyse();
	printf("%.3lf\n",double(clock()-start)/CLOCKS_PER_SEC);
	return 0;
}

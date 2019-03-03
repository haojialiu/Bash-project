#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>
#include<dirent.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{
    char buff[128]={0};
    getcwd(buff,128);
    printf("mypwd:%s\n",buff);
    exit(0);
}

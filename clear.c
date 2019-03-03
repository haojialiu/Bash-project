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
    printf("\033[2J\033[0;0H");
    exit(0);
}

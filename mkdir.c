#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int argc,char* argv[])
{
    if(argc > 3)
    {
        perror("argc error\n");
    }
    if(mkdir(argv[1],0770) != 0)
    {
        perror("mkdir error\n");
    }
    else
    {
        printf("mkdir success\n");
    }
    exit(0);
}

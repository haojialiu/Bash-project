#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#include<sys/types.h>
#include<libgen.h>
#include<fcntl.h>
int main(int argc,char* argv[])
{ 
    if(argc == 3)
    {
        if(strncmp(argv[1],"-r",2) == 0)
        {
            if(rmdir(argv[2]) != 0)
            {
                perror("rmdir");
                exit(-1);
            }
            else
            {
                printf("rmdir %s success\n",argv[2]);
            }
        }
    }
    else if(argc == 2)
     {
         if(unlink(argv[1]) != 0)
         {
             perror("unlink");
             exit(-1);
         }
         else
         {
            printf("unlink %s success\n",basename(argv[1]));
            exit(0);
         }
     }
     else
    {
        perror("argc error\n");

    }
}

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
 pid_t p1 = fork();
 if(p1 == 0)
 
			execl("/usr/bin/firefox", "firefox", "www.baidu.com", NULL);
else {
    wait();
    exit(0);
}
}

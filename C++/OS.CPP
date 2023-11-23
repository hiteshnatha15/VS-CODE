#include<iostream>
using namespace std;
int main()
{
    pid_t pid = fork();
    if(pid<0)
    {
    printf("fork failed");
    return 1;
    } 
    else if (pid==0)
    {
    excelp("/bin/is,"is",null");
    printf("hello");
    }
    else
    {
    wait(null)
    printf("child completed");
    }
printf("%d/n",getpid());
return 0;
}
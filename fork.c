#include<sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()

{int pid, pid2;
int casenum,i;
printf("Enter case number: ");
scanf("%d", &casenum);

if (casenum == 1) {
pid = fork();
}
else if (casenum ==2) {
pid = fork(); fork();
}
else if (casenum == 3) {
pid= fork();fork();fork();
}
else if (casenum ==4) {
if ((pid=fork()) && (pid2=fork()))  {fork();}
if ((pid=fork()) && (pid2 = fork())) {fork();}
if ((pid=fork()) && (pid2 = fork())) {fork();}
}
else if (casenum ==5) {
for( i =1; i <=5 ; i++) {fork();}
}

printf("This is  process ID  %d \n",getpid());

return 0;
}

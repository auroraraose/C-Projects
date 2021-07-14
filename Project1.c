#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int no,guess,nguess=1;
srand(time(0));
no=rand()%100+1;   //gen a no btw 1 to 100
//printf("The no is %d\n",no);
do{
printf("Guess the no btw 1 to 100\n");
scanf("%d",&guess);
if(guess>no)
{
    printf("Lower no plz\n");
}
else if(guess<no)
{
    printf("Higher no plz\n");
}
else
{
    printf("You guessed in %d attempts\n",nguess);
}
nguess++;
}while(guess!=no);

return 0;
}

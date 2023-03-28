#include <AT89S52.h>

#define LED P2_0

void wait(char);

void main()
{
while(1)
{
LED=!LED;
wait(100);
}
}

void wait(char val);
{
int i;
for(i=0;i<val;i++)
{
}
}

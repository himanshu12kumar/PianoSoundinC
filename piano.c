#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i,j;
for(i=500;i<=1000;i+=50)
{
sound(i);
delay(500);
nosound();
//delay(500);
}
for(j=1000;j>=500;j-=50)
{
 sound(j);
 delay(500);
 nosound();
}
nosound();
getch();

}
//JUSTIN WADE
#include <stdio.h>
#include <cs50.h>

int main (void)

{
int x;
int y;
int z;
int t;
// ^^^^Declarations
printf("HEY my friends I love leap years, lets check a year...");
do{
     x=get_int();
}
while (x<0);


y = x%4;

z = x%100;

t= x%400;
//^^^criteria for leap year
if (y!=0)
{
printf("Not a leap year"); //not divisible by 4
return 0;
}
 if (t==0) //400 = definite leap year
{
    printf("LEAP YEAR");
    return 0;
}
if (y==0 && z!=0) //if divisble by 4 and not 100
{
    printf("You did it, Leap year");
    return 0;
}
else if (z==0 && t!=0) //extra for testing
{
printf("Not leap year");
return 0;
}
//Jwade out
}
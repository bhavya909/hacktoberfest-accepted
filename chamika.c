#include<stdio.h>
int main()
{
//1. Declare integer variables x, y, z and assign the value 10 in the y and 20 in the z.
int x, y=10, z=20;
//2. Increment the variables x, y by one and assign the sum in z.
z = x++ + y++;
//3. Assign the difference of x, y in z and increment the variables x, y by one.
z = ++x - ++y;
//4. Increment the value x by one and assign the value in z.
z = x++;
//5. Display the values of x, y, and z.
printf("x=%d, y=%d, z=%d",x,y,z);
return 0;
}

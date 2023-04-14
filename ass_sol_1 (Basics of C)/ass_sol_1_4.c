/*Topic:4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.*/
#include <stdio.h>

int main()
{

float radius,area;
printf("Enter radius of the circle:");
scanf("%f",&radius);
area=3.14*radius*radius;
printf("Area of circle is %.2f having the radius %.2f",area,radius);

return 0;

}
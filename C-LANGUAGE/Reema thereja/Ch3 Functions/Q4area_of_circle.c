#include<stdio.h>
int area_of_circle(float r);
int main()
{
    float r,area;
    printf("Emter the radius of circle: ");
    scanf("%f",&r);
    area = area_of_circle(r);
    printf("The area of circlr=%f",area);
}
int area_of_circle(float r)
{
    return (3.14*r*r) ;

}
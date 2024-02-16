#include <stdio.h>
#define pi 3.14

int main()
{
    float radius, height, volume, surface_area;
    printf("Enter the radius of the cylinder: "); //for inputing the radius of cylinder.
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: "); //for inputing the height of cylinder.
    scanf("%f", &height);
    volume = pi * radius * radius * height;  //calculation of volume.
    surface_area = 2 * pi * radius * (radius + height);  //calculation of surface area.
    printf("\nThe volume of cylinder is: %.2f", volume);  //outputing the volume.
    printf("\nThe surface area(Total surface area) of the cylinder is: %.2f", surface_area);  //outputing the surface area.
    return 0;
}
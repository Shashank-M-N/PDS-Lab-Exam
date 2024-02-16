#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, x1, y1;
    float distance, radius;
    printf("Enter the co-ordinates of the center in the format (x,y):");  //inputing the co-ordinates of center.
    scanf("%d %d", &x, &y);
    printf("Enter the radius of the circle: ");  //inputing the radius of circle.
    scanf("%f", &radius);
    printf("Enter a point in the form (x,y): ");  //inputing the point.
    scanf("%d %d", &x1, &y1);
    distance = sqrt(((x1 - x) * (x1 - x)) + ((y1 - y) * (y1 - y)));  //computing the distance fron centre
    //checking with the conditions
    if (distance < radius)  
        printf("The point is inside the circle.");
    else if (distance == radius)
        printf("The point is on the circle.");
    else
        printf("The point is outside the circle.");
    return 0;
}
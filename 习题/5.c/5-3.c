#include <stdio.h> #include<math.h>
double dist(double x1, double y1, double x2, double y2);
int main(void)
{
    double x1, y1, x2, y2;

    printf("Enter x1 and y1:");
    scanf("%lf%lf", &x1, &y1);
    printf("Enter x2 and y2:");
    scanf("%lf%lf", &x2, &y2);
    printf("Distance=%.2lf", dist(x1, y1, x2, y2));

    return 0;
}
double dist(double x1, double y1, double x2, double y2)
{
    double distance;

    distance = sqrt(pow(fabs(x2 - x1), 2) + pow(fabs(y2 - y1), 2));

    return distance;
}
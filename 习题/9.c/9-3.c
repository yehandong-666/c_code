#include <stdio.h>
struct vector
{
    float x, y;
};
struct vector vec(struct vector v1, struct vector v2);
int main(void)
{
    struct vector v1, v2, v;

    printf("x1 and y1:");
    scanf("%f%f", &v1.x, &v1.y);
    printf("x2 and y2:");
    scanf("%f%f", &v2.x, &v2.y);
    v = vec(v1, v2);
    printf("v=(%f,%f)", v.x, v.y);

    return 0;
}
struct vector vec(struct vector v1, struct vector v2)
{
    struct vector v;

    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;

    return v;
}
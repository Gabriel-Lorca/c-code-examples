// 课后练习第二个代码题
#include <stdio.h>

int main()
{
    int r;//圆的半径
    float c;//圆的周长
    float s;//圆的面积

    r = 5;

    c = r * 3.14 *2;
    s = 3.14 * r * r;

    printf("半径为%d的圆，周长是%.2f,面积是%.2f",r,c,s);

    return 0;
}
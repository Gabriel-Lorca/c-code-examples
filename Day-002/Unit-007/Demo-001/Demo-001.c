// 第七课-取值范围-随堂
// CPU能够读懂的最小单位----比特位、bit、b
// 内存机构的最小寻址单位----字节、Byte、B


#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int result = pow(2,32) - 1;

    printf("result = %u\n", result);

    return 0;
}
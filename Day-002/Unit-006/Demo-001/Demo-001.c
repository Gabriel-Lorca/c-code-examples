// 第六课-数据类型-随堂
// C语言的数据类型有：整数类型、浮点数类型、字符类型、布尔类型、枚举类型
// 整数类型：short int、int、long int、long long int
// 浮点类型:float、double、long double
// 字符类型:char
// 布尔类型:_Bool
// 枚举类型:enum
// 在C语言中，sizeof是一个运算符而不是一个函数，它用于获得数据类型或表达式的长度。
// signed和unsigned 变量的限定符，用于限定一个变量是否带符号，不带符号的话，变量能够存储更大的值。

#include <stdio.h>
int main()
{
    printf("%d",sizeof(int));
    return 0;
}
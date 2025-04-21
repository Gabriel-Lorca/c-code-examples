// C语言学习第12章-Switch和嵌套分支语句.
// 需要注意C语言中,以大括号标记的代码块问题，保持良好的编码习惯非常重要。
#include <stdio.h>
int main()
{
    char ch;
    printf("请输入成绩:\n");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'A':
        printf("你的成绩在90分以上");
        break;
    case 'B':
        printf("你的成绩在80~90分之间");
        break;
    case 'C':
        printf("你的成绩在70~80分之间");
        break;
    case 'D':
        printf("你的成绩在60~70分之间");
        break;
    
    default:
        break;
    }

    return 0;
}
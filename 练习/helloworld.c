#include <stdio.h>

// 声明一维数组
int array1[]={ };
// 初始化数组
int array2[]={1,2,3,4};


int main()
{
    int index;
// 访问数组元素
    scanf("%d",&index);
    printf("array %d is %d",index,array2[index]);
    return 0;
}

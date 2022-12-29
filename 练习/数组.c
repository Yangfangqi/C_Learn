#include <stdio.h>

// 声明一维数组
int array1[2];
// 初始化一维数组
int array2[]={1,2,3,4};
// 声明二维数组
int array3[3][3];


int main()
{
// 访问一维数组
    int index;
    printf("please input a int < 3:");
    scanf("%d",&index);
    printf("array2[%d] is %d\r\n",index,array2[index]);

// 初始化、访问二维数组
    printf("output the array3:\r\n");
    int i,j;
    for ( i = 0; i < 3; i++)
        for ( j = 0; j < 3; j++)
        {
            array3[i][j]=i+j;
            printf("array3[%d][%d] is:%d  ",i,j,array3[i][j]);
            if(j==2)
            printf("\r\n");
        }

    int count,count1;
    count=sizeof(array3);
    count1=sizeof(int);
    printf("array3 count is :%d,and the number is :%d \r\n",count,count/count1);

    return 0;
}

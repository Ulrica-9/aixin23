//#include <stdio.h>
//#include <assert.h>
//int my_if(int a)
//{
//	return *(char*)&a;                   //方法一(精简版)
//
//
//
//
//
//
//	//方法二:(以理解版本)
//	//char* p =(char *) &a;
//	//assert(p != NULL);   //断言函数(防止为空指针)
//	                                                   ////直接返回值：
//	                                                  ////1的截取为:01        (截取:char类型为1字节截取整形地址高地址)
//	                                                 ////放于高地址则返回：00-0
//	                                                ////放于低地址则返回:01-1
//	//return *p;
//
//}
//int main()
//{ 
//	int a = 1;                                  //内存中 左边：低地址   右边 ：高地址
//	int b=my_if(a);                            //1的内存存储为: 0x 00(高位) 00 00 01(低位)----->存储规则
//	if (0 == b)                                
//	{
//		printf("大端\n");                       // 数据低位放于存储高位，数据高位放于存储低位.   0x 00 00 00 01
//	}
//	else
//	{ 
//		printf("小端\n");                         //与之相反 : 0x 01 00 00 00 
//	}
//	return 0;
//	
//}
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	float p = 5.5;
	return 0;
}
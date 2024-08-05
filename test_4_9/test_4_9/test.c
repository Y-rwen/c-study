#define   _CRT_SECURE_NO_WARNINGS



#include <stdio.h>


//int main()
//{
//	unsigned int a = 0;
//	unsigned int b = 0;
//	scanf("%d %d", &a, &b);
//	unsigned int num = 0;
//	num = (a + b) % 100;
//	printf("%d", num);
//
//	return 0;
//}


//int main()
//{
//	int seconds = 0;
//	scanf("%d", &seconds);
//	int a = seconds / 60 / 60;
//	int b = seconds / 60 % 60;
//	int c = seconds % 60;
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    double cf = a + b + c;
//    double d = sqrt(pow(a, 2) - pow((b / 2.00), 2));
//    double area = 0.50 * b * d;
//    printf("circumference=%.2lf area=%.2lf", cf, area);
//
//    return 0;
//}
//#include<math.h>
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    long b = a * (3.156 * pow(10, 7));
//    printf("%lf", b);
//
//    return 0;
//}



//#ifndef _LED_H_
//#define _LED_H_
//#include <REGX52.H>
/////#include<AT89X52.H>		  //包含51单片机头文件，内部有各种寄存器定义
//#include <stdio.h>
//void Delay1ms(unsigned char xms)	//@12.000MHz
//{
//	unsigned char data i, j;
//	while (xms)
//	{
//		i = 12;
//		j = 169;
//		do
//		{
//			while (--j);
//		} while (--i);
//		xms--;
//	}
//}
//
////定义小车驱动模块输入IO口 
//sbit L293D_IN1 = P1 ^ 2;
//sbit L293D_IN2 = P1 ^ 3;
//sbit L293D_IN3 = P1 ^ 4;
//sbit L293D_IN4 = P1 ^ 5;
//
////   sbit L293D_EN1=P1^6;
////   sbit L293D_EN2=P1^7;
//sbit L293D_EN1 = P1 ^ 6;
//sbit L293D_EN2 = P1 ^ 7;
//
///***蜂鸣器接线定义*****/
//sbit BUZZ = P2 ^ 3;
//
//#define Left_1_led        P2_4
//#define Left_2_led        P2_3
//#define Left_3_led        P2_2
//#define Left_4_led        P2_1
//#define Left_5_led        P2_0
//#define Left_moto_pwm	  P1_6	 //PWM信号端
//
//#define Right_moto_pwm	  P1_7	 //PWM信号端
//
//#define Left_moto_go      {P1_2=1,P1_3=0;}  //左电机向前走
//#define Left_moto_back    {P1_2=0,P1_3=1;} 	//左边电机向后转
//#define Left_moto_Stop    {P1_2=0,P1_3=0;}         //左边电机停转                     
//#define Right_moto_go     {P1_4=1,P1_5=0;}	//右边电机向前走
//#define Right_moto_back   {P1_4=0,P1_5=1;}	//右边电机向后走
//#define Right_moto_Stop   {P1_4=0,P1_5=0;}      	//右边电机停转   
//
//unsigned char pwm_val_left = 0;//变量定义
//unsigned char push_val_left = 0;// 左电机占空比N/20
//unsigned char pwm_val_right = 0;
//unsigned char push_val_right = 0;// 右电机占空比N/20
//bit Right_moto_stop = 1;
//bit Left_moto_stop = 1;
//unsigned  int  time = 0;
//
//
///************************************************************************/
////前速前进
//void  run(int a, int b)
//{
//	push_val_left = a;	 //速度调节变量 0-20。。。0最小，20最大
//	push_val_right = b;
//	Left_moto_go   //左电机往前走
//		Right_moto_go  //右电机往前走
//}
//
//
//
////左转
//void  leftrun(int a, int b)
//{
//	push_val_left = a;
//	push_val_right = b;
//	Right_moto_go  //右电机往前走
//		Left_moto_go    //左电机不动
//}
//
////右转
//void  rightrun(int a, int b)
//{
//	push_val_left = a;
//	push_val_right = b;
//	Left_moto_go     //左电机往前走
//		Right_moto_go    //右电机不动	
//}
//
////停止
//void  stop(void)
//{
//
//	Right_moto_Stop   //右电机停止
//		Left_moto_Stop    //左电机停止
//}
//
///************************************************************************/
///*                    PWM调制电机转速                                   */
///************************************************************************/
///*                    左电机调速                                        */
///*调节push_val_left的值改变电机转速,占空比            */
//void pwm_out_left_moto(void)
//{
//	if (Left_moto_stop)
//	{
//		if (pwm_val_left <= push_val_left)
//		{
//			Left_moto_pwm = 1;
//			//		     Left_moto_pwm1=1; 
//		}
//		else
//		{
//			Left_moto_pwm = 0;
//			//		     Left_moto_pwm1=0; 
//		}
//		if (pwm_val_left >= 20)
//			pwm_val_left = 0;
//	}
//	else
//	{
//		Left_moto_pwm = 0;
//		//           Left_moto_pwm1=0; 
//	}
//}
//
///******************************************************************/
///*                    右电机调速                                  */
//void pwm_out_right_moto(void)
//{
//	if (Right_moto_stop)
//	{
//		if (pwm_val_right <= push_val_right)
//		{
//			Right_moto_pwm = 1;
//			//		   Right_moto_pwm1=1; 
//		}
//		else
//		{
//			Right_moto_pwm = 0;
//			//		   Right_moto_pwm1=0; 
//		}
//		if (pwm_val_right >= 20)
//			pwm_val_right = 0;
//	}
//	else
//	{
//		Right_moto_pwm = 0;
//		//           Right_moto_pwm1=0; 
//	}
//}
//
///***************************************************/
/////*TIMER0中断服务子函数产生PWM信号*/
//void timer0()interrupt 1   using 2
//{
//	TH0 = 0XFc;	  //1Ms定时
//	TL0 = 0X18;
//	time++;
//	pwm_val_left++;
//	pwm_val_right++;
//	pwm_out_left_moto();
//	pwm_out_right_moto();
//}
//
//
////主函数
//void main(void)
//{
//
//	P1 = 0X00;   //关电机	
//
//	TMOD = 0X01;
//	TH0 = 0XFc;		  //1ms定时
//	TL0 = 0X18;
//	TR0 = 1;
//	ET0 = 1;
//	EA = 1;			   //开总中断
//
//
//	while (1)	//无限循环
//	{
//		//		 if(Left_1_led==0 &&Left_2_led==0&&Left_3_led==1&&Left_4_led==0)
//		//		 {
//		//				run();
//		//		 } //调用前进
//		//		 else
//		//		 {	
//		//			   
//		//		 }//调用小车停止
//		//		 
//		//		 if(Left_1_led==1 &&Left_2_led==1&&Left_3_led==1&&Left_4_led==1&&Left_5_led==1)	
//		//				stop();
//
//							 //有信号为0  没有信号为1
//		if (Left_1_led == 0 && Left_2_led == 0 && Left_3_led == 1 && Left_4_led == 0 && Left_5_led == 0)
//
//			run(10, 10);  //调用前进函数
//
//		if (Left_1_led == 1 && Left_2_led == 1 && Left_3_led == 1 && Left_4_led == 0 && Left_5_led == 0)
//
//			run(10, 10);  //调用前进函数
//		if (Left_1_led == 1 && Left_2_led == 1 && Left_3_led == 1 && Left_4_led == 1 && Left_5_led == 1)
//
//			run(10, 10);  //调用前进函数
//
//		if (Left_1_led == 1 || Left_2_led == 1 && Left_3_led == 0 && Left_4_led == 0 && Left_5_led == 0)	    //左边检测到黑线
//		{
//			//调用小车左转  函数
//			leftrun(20, 0);
//		}
//
//		if (Left_1_led == 0 && Left_2_led == 0 && Left_3_led == 1 || Left_4_led == 1 || Left_5_led == 1)
//
//		{
//			rightrun(0, 20); //调用小车右转	函数
//
//		}
//		//					if(Left_1_led==1&&Left_2_led==0&&Left_3_led==0&&Left_4_led==1)	
//		//					
//		//					{	  
//		//				     		  rightrun(0,10); //调用小车右转	函数
//
//		//				    }
//
//		if (Left_4_led == 1 && Left_5_led == 0)		//右边检测到黑线
//		{
//			rightrun(0, 20); //调用小车右转	函数
//
//		}
//		//					if(Left_1_led==0&&Left_2_led==0&&Left_3_led==0&&Left_4_led==0&&Left_5_led==0)		//悬空状态  避悬崖
//		//				  {	  
//		//				       stop();
//
//		//				  }
//
//	}
//}


#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[5][5];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int k;
    scanf("%d", &k);
    char t;
    int x, y;
    while (k--)
    {
        scanf(" %c %d %d", &t, &x, &y);
        if (t == 'r')
        {
            int j = 0;
            for (j = 0; j < m; j++)
            {
                int tmp = arr[x - 1][j];
                arr[x - 1][j] = arr[y - 1][j];
                arr[y - 1][j] = tmp;
            }
        }
        if (t == 'c')
        {
            for (i = 0; i < n; i++)
            {
                int tmp = arr[i][x - 1];
                arr[i][x - 1] = arr[i][y - 1];
                arr[i][y - 1] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
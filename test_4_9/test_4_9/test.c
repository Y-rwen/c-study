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
/////#include<AT89X52.H>		  //����51��Ƭ��ͷ�ļ����ڲ��и��ּĴ�������
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
////����С������ģ������IO�� 
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
///***���������߶���*****/
//sbit BUZZ = P2 ^ 3;
//
//#define Left_1_led        P2_4
//#define Left_2_led        P2_3
//#define Left_3_led        P2_2
//#define Left_4_led        P2_1
//#define Left_5_led        P2_0
//#define Left_moto_pwm	  P1_6	 //PWM�źŶ�
//
//#define Right_moto_pwm	  P1_7	 //PWM�źŶ�
//
//#define Left_moto_go      {P1_2=1,P1_3=0;}  //������ǰ��
//#define Left_moto_back    {P1_2=0,P1_3=1;} 	//��ߵ�����ת
//#define Left_moto_Stop    {P1_2=0,P1_3=0;}         //��ߵ��ͣת                     
//#define Right_moto_go     {P1_4=1,P1_5=0;}	//�ұߵ����ǰ��
//#define Right_moto_back   {P1_4=0,P1_5=1;}	//�ұߵ�������
//#define Right_moto_Stop   {P1_4=0,P1_5=0;}      	//�ұߵ��ͣת   
//
//unsigned char pwm_val_left = 0;//��������
//unsigned char push_val_left = 0;// ����ռ�ձ�N/20
//unsigned char pwm_val_right = 0;
//unsigned char push_val_right = 0;// �ҵ��ռ�ձ�N/20
//bit Right_moto_stop = 1;
//bit Left_moto_stop = 1;
//unsigned  int  time = 0;
//
//
///************************************************************************/
////ǰ��ǰ��
//void  run(int a, int b)
//{
//	push_val_left = a;	 //�ٶȵ��ڱ��� 0-20������0��С��20���
//	push_val_right = b;
//	Left_moto_go   //������ǰ��
//		Right_moto_go  //�ҵ����ǰ��
//}
//
//
//
////��ת
//void  leftrun(int a, int b)
//{
//	push_val_left = a;
//	push_val_right = b;
//	Right_moto_go  //�ҵ����ǰ��
//		Left_moto_go    //��������
//}
//
////��ת
//void  rightrun(int a, int b)
//{
//	push_val_left = a;
//	push_val_right = b;
//	Left_moto_go     //������ǰ��
//		Right_moto_go    //�ҵ������	
//}
//
////ֹͣ
//void  stop(void)
//{
//
//	Right_moto_Stop   //�ҵ��ֹͣ
//		Left_moto_Stop    //����ֹͣ
//}
//
///************************************************************************/
///*                    PWM���Ƶ��ת��                                   */
///************************************************************************/
///*                    ��������                                        */
///*����push_val_left��ֵ�ı���ת��,ռ�ձ�            */
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
///*                    �ҵ������                                  */
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
/////*TIMER0�жϷ����Ӻ�������PWM�ź�*/
//void timer0()interrupt 1   using 2
//{
//	TH0 = 0XFc;	  //1Ms��ʱ
//	TL0 = 0X18;
//	time++;
//	pwm_val_left++;
//	pwm_val_right++;
//	pwm_out_left_moto();
//	pwm_out_right_moto();
//}
//
//
////������
//void main(void)
//{
//
//	P1 = 0X00;   //�ص��	
//
//	TMOD = 0X01;
//	TH0 = 0XFc;		  //1ms��ʱ
//	TL0 = 0X18;
//	TR0 = 1;
//	ET0 = 1;
//	EA = 1;			   //�����ж�
//
//
//	while (1)	//����ѭ��
//	{
//		//		 if(Left_1_led==0 &&Left_2_led==0&&Left_3_led==1&&Left_4_led==0)
//		//		 {
//		//				run();
//		//		 } //����ǰ��
//		//		 else
//		//		 {	
//		//			   
//		//		 }//����С��ֹͣ
//		//		 
//		//		 if(Left_1_led==1 &&Left_2_led==1&&Left_3_led==1&&Left_4_led==1&&Left_5_led==1)	
//		//				stop();
//
//							 //���ź�Ϊ0  û���ź�Ϊ1
//		if (Left_1_led == 0 && Left_2_led == 0 && Left_3_led == 1 && Left_4_led == 0 && Left_5_led == 0)
//
//			run(10, 10);  //����ǰ������
//
//		if (Left_1_led == 1 && Left_2_led == 1 && Left_3_led == 1 && Left_4_led == 0 && Left_5_led == 0)
//
//			run(10, 10);  //����ǰ������
//		if (Left_1_led == 1 && Left_2_led == 1 && Left_3_led == 1 && Left_4_led == 1 && Left_5_led == 1)
//
//			run(10, 10);  //����ǰ������
//
//		if (Left_1_led == 1 || Left_2_led == 1 && Left_3_led == 0 && Left_4_led == 0 && Left_5_led == 0)	    //��߼�⵽����
//		{
//			//����С����ת  ����
//			leftrun(20, 0);
//		}
//
//		if (Left_1_led == 0 && Left_2_led == 0 && Left_3_led == 1 || Left_4_led == 1 || Left_5_led == 1)
//
//		{
//			rightrun(0, 20); //����С����ת	����
//
//		}
//		//					if(Left_1_led==1&&Left_2_led==0&&Left_3_led==0&&Left_4_led==1)	
//		//					
//		//					{	  
//		//				     		  rightrun(0,10); //����С����ת	����
//
//		//				    }
//
//		if (Left_4_led == 1 && Left_5_led == 0)		//�ұ߼�⵽����
//		{
//			rightrun(0, 20); //����С����ת	����
//
//		}
//		//					if(Left_1_led==0&&Left_2_led==0&&Left_3_led==0&&Left_4_led==0&&Left_5_led==0)		//����״̬  ������
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
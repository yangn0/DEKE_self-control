#ifndef __MYIIC_H
#define __MYIIC_H
#include "sys.h" 

   	   		   
//IO��������
#define SDA_IN()  {GPIOE->MODER&=~(3<<(1*2));GPIOB->MODER|=0<<1*2;}	//PB9����ģʽ
#define SDA_OUT() {GPIOE->MODER&=~(3<<(0*2));GPIOB->MODER|=1<<0*2;} //PB9���ģʽ
//IO��������	 
#define IIC_SCL    PEout(0) //SCL
#define IIC_SDA    PEout(1) //SDA	 
#define READ_SDA   PEin(1)  //����SDA 

//IIC���в�������
void IIC_Init(void);                //��ʼ��IIC��IO��				 
void IIC_Start(void);				//����IIC��ʼ�ź�
void IIC_Stop(void);	  			//����IICֹͣ�ź�
void IIC_Send_Byte(u8 txd);			//IIC����һ���ֽ�
u8 IIC_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
u8 IIC_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void IIC_Ack(void);					//IIC����ACK�ź�
void IIC_NAck(void);				//IIC������ACK�ź�

void IIC_Write_One_Byte(u8 daddr,u8 addr,u8 data);
u8 IIC_Read_One_Byte(u8 daddr,u8 addr);	  
#endif
















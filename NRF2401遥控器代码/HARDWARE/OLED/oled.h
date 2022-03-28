#ifndef __OLED_H
#define __OLED_H			  	 
#include "sys.h"

//-----------------OLED端口定义---------------- 

#define OLED_SCLK_Clr()  PAout(12)=0  //SCL
#define OLED_SCLK_Set()  PAout(12)=1   //SCL

#define OLED_SDIN_Clr()  PAout(11)=0   //SDA
#define OLED_SDIN_Set()  PAout(11)=1   //SDA

#define OLED_RST_Clr() PAout(8)=0   //RST
#define OLED_RST_Set() PAout(8)=1   //RST

#define OLED_RS_Clr() PBout(15)=0    //DC
#define OLED_RS_Set() PBout(15)=1    //DC

#define OLED_CS_Clr() PBout(14)=0    //CS
#define OLED_CS_Set() PBout(14)=1    //CS

#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据
//OLED控制用函数
void OLED_WR_Byte(u8 dat,u8 cmd);	 		//向OLED写入一个字节。   
void OLED_Display_On(void);						//开启OLED显示 
void OLED_Display_Off(void);					//关闭OLED显示  
void OLED_Refresh_Gram(void);		   		//刷新显示		   		    
void OLED_Init(void);									//初始化OLED
void OLED_Clear(void);								//清屏函数,清完屏,整个屏幕是黑色的!和没点亮一样!!!	
void OLED_DrawPoint(u8 x,u8 y,u8 t);	//画点
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size,u8 mode);			//在指定位置显示一个字符,包括部分字符
void OLED_ShowNumber(u8 x,u8 y,u32 num,u8 len,u8 size);		//显示2个数字
void OLED_ShowString(u8 x,u8 y,const char *p);							//显示字符串 
void OLED_ShowFloatNumber(u8 x,u8 y,float num,u8 len,u8 size,u8 fNum);//显示小数
#endif  
	 

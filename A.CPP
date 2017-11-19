#include<graphics.h>
#include<conio.h>
#define PI 3.1415920265438
void drawhead();
void drawbody();
void main()
{
//创建800*600的窗口
	initgraph(800,600);
//设置原点在屏幕中央（Y轴向下为正）
	setorigin(400,300);
//填充背景颜色为白色，清楚控制台颜色
	setbkcolor(WHITE);
	cleardevice();
//调用画头函数
	drawhead();
	drawbody();
	_getch();


}
void drawhead()
{
//画头
	setfillcolor(RGB(20,190,230));
	setlinecolor(BLACK);
	fillroundrect(-135,-206,135,54,248,248);
//画脸
	setfillcolor(WHITE);
	fillellipse(-110, -144, 115, 46);
//左眼
	fillroundrect(-60,-170,0,-90,56,56);
//右眼
	fillroundrect(0,-170,60,-90,56,56);
//左眼珠
	setfillcolor(BLACK);
	fillcircle(-15, -110,5);
//左眼珠
	setfillcolor(BLACK);
	fillcircle(15, -110,5);
//鼻子
	setfillcolor(RED);
	fillcircle(0, -86,15);
//人中
	line(0, -72, 0, -4);
// 嘴
	arc(-108, -220, 108, -4, PI * 5 / 4, PI * 7 / 4);
// 胡子
	line(-42, -73, -90, -91);
	line( 42, -73,  90, -91);
	line(-41, -65, -92, -65);
	line( 41, -65,  92, -65);
	line(-42, -57, -90, -39);
	line( 42, -57,  90, -39);
}
void drawbody()
{
//画身体
	//手臂
	line(-81, 32, -138, 72);	// 手臂(上)
	line( 81, 32,  138, 72);
	line(-96, 96, -116, 110);	// 手臂(下)
	line( 96, 96,  116, 110);
	//手掌
	circle(-135, 95,24);//左
	circle(135, 95,24);//右
//画腿
	line(-96, 85, -96, 178);	// 腿外侧
	line( 96, 85,  96, 178);
	arc(-10, 168, 10, 188, 0, PI);	// 腿内侧
	setfillcolor(WHITE);
	fillroundrect(-2, 178, -112, 205, 24, 24);	// 左
	fillroundrect( 2, 178,  112, 205, 24, 24);//右
	setfillcolor(RGB(20,190,230));
	floodfill(0,90,BLACK);

//肚皮
setfillcolor(WHITE);	// 肚皮
fillcircle(0, 81, 75);
solidrectangle(-60, 6, 60, 29);	// 用白色矩形擦掉多余的肚皮


pie(-58, 23, 58, 139, PI, 0);	// 口袋
//脖子
	setfillcolor(RED);
	fillroundrect(-110, 30, 110, 54, 20, 20);
//铃铛
	setfillcolor(YELLOW);
	fillcircle(0, 56,18);
	line( -15, 47,  15, 47);
	line( -17, 50, 17, 50);
	setfillcolor(BLACK);
	fillcircle(0, 58,3);
	solidellipse(-1, 57, 1, 78);
	setfillcolor(WHITE);
	solidrectangle(0,75, 65, 78);
}
#include<graphics.h>
#include<conio.h>
#define PI 3.1415920265438
void drawhead();
void drawbody();
void main()
{
//����800*600�Ĵ���
	initgraph(800,600);
//����ԭ������Ļ���루Y������Ϊ����
	setorigin(400,300);
//��䱳����ɫΪ��ɫ���������̨��ɫ
	setbkcolor(WHITE);
	cleardevice();
//���û�ͷ����
	drawhead();
	drawbody();
	_getch();


}
void drawhead()
{
//��ͷ
	setfillcolor(RGB(20,190,230));
	setlinecolor(BLACK);
	fillroundrect(-135,-206,135,54,248,248);
//����
	setfillcolor(WHITE);
	fillellipse(-110, -144, 115, 46);
//����
	fillroundrect(-60,-170,0,-90,56,56);
//����
	fillroundrect(0,-170,60,-90,56,56);
//������
	setfillcolor(BLACK);
	fillcircle(-15, -110,5);
//������
	setfillcolor(BLACK);
	fillcircle(15, -110,5);
//����
	setfillcolor(RED);
	fillcircle(0, -86,15);
//����
	line(0, -72, 0, -4);
// ��
	arc(-108, -220, 108, -4, PI * 5 / 4, PI * 7 / 4);
// ����
	line(-42, -73, -90, -91);
	line( 42, -73,  90, -91);
	line(-41, -65, -92, -65);
	line( 41, -65,  92, -65);
	line(-42, -57, -90, -39);
	line( 42, -57,  90, -39);
}
void drawbody()
{
//������
	//�ֱ�
	line(-81, 32, -138, 72);	// �ֱ�(��)
	line( 81, 32,  138, 72);
	line(-96, 96, -116, 110);	// �ֱ�(��)
	line( 96, 96,  116, 110);
	//����
	circle(-135, 95,24);//��
	circle(135, 95,24);//��
//����
	line(-96, 85, -96, 178);	// �����
	line( 96, 85,  96, 178);
	arc(-10, 168, 10, 188, 0, PI);	// ���ڲ�
	setfillcolor(WHITE);
	fillroundrect(-2, 178, -112, 205, 24, 24);	// ��
	fillroundrect( 2, 178,  112, 205, 24, 24);//��
	setfillcolor(RGB(20,190,230));
	floodfill(0,90,BLACK);

//��Ƥ
setfillcolor(WHITE);	// ��Ƥ
fillcircle(0, 81, 75);
solidrectangle(-60, 6, 60, 29);	// �ð�ɫ���β�������Ķ�Ƥ


pie(-58, 23, 58, 139, PI, 0);	// �ڴ�
//����
	setfillcolor(RED);
	fillroundrect(-110, 30, 110, 54, 20, 20);
//����
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
#include "LedControl.h"  //전처리기, LedControl. 헤더파일 불러오기

LedControl lc=LedControl(12,11,10,1); //아두이노 보드의 12,11,10번 핀을 사용하고, 1개의 8*8 도트매트릭스를 제어하는 객체를 생성

unsigned long delaytime=100; //delaytime 0.1초라는 전역변수 선언.

void setup() //가장 먼저 호출되는 함수이며, 최초 1회만 실행. do ~while문에서 do 역할.
{
  lc.shutdown(0,false); // 도트매트릭스의 절전모드를 off.
  lc.setIntensity(0,8); //도트매트릭스의 LED밝기를 8로 지정.
  lc.clearDisplay(0); //화면초기화
}

void writeArduinoOnMatrix() //화면에 어떻게 출력하는지에 따른 함수
{
  byte a[5]={0x7E,0x88,0x88,0x88,0xFE}; // LED나오는 형태를 16진수로 표현.
  byte r[5]={0x3E,0x10,0x20,0x20,0x20};
  byte d[5]={0x1c,0x22,0x22,0x12,0xFE};
  byte u[5]={0x3C,0x02,0x02,0x04,0x3E};
  byte i[5]={0x00,0x22,0xBE,0x02,0x00};
  byte n[5]={0x3E,0x10,0x10,0x10,0x1E};
  byte o[5]={0x1C,0x22,0x22,0x22,0x1c};

  lc.setRow(0,0,a[0]); //첫번째 모듈 1행에 있는 LED에 배열 a[0]의 값을 불러오기.
  lc.setRow(0,1,a[1]); //첫번째 모듈 2행에 있는 LED에 배열 a[1]의 값을 불러오기.
  lc.setRow(0,2,a[2]);
  lc.setRow(0,3,a[3]);
  lc.setRow(0,4,a[4]);
  delay(delaytime);
  lc.setRow(0,0,r[0]);
  lc.setRow(0,1,r[1]);
  lc.setRow(0,2,r[2]);
  lc.setRow(0,3,r[3]);
  lc.setRow(0,4,r[4]);
  delay(delaytime);
  lc.setRow(0,0,d[0]);
  lc.setRow(0,1,d[1]);
  lc.setRow(0,2,d[2]);
  lc.setRow(0,3,d[3]);
  lc.setRow(0,4,d[4]);
  delay(delaytime);
  lc.setRow(0,0,u[0]);
  lc.setRow(0,1,u[1]);
  lc.setRow(0,2,u[2]);
  lc.setRow(0,3,u[3]);
  lc.setRow(0,4,u[4]);
  delay(delaytime);
  lc.setRow(0,0,i[0]);
  lc.setRow(0,1,i[1]);
  lc.setRow(0,2,i[2]);
  lc.setRow(0,3,i[3]);
  lc.setRow(0,4,i[4]);
  delay(delaytime);
  lc.setRow(0,0,n[0]);
  lc.setRow(0,1,n[1]);
  lc.setRow(0,2,n[2]);
  lc.setRow(0,3,n[3]);
  lc.setRow(0,4,n[4]);
  delay(delaytime);
  lc.setRow(0,0,o[0]);
  lc.setRow(0,1,o[1]);
  lc.setRow(0,2,o[2]);
  lc.setRow(0,3,o[3]);
  lc.setRow(0,4,o[4]);
  delay(delaytime);
  lc.setRow(0,0,0);
  lc.setRow(0,1,0);
  lc.setRow(0,2,0);
  lc.setRow(0,3,0);
  lc.setRow(0,4,0);
  delay(delaytime);
}

void rows() //도트매트릭스의 행에 있는 LED를 첫번째부터 1개씩 순서대로 ON하는 함수.
 {
  for(int row=0;row<8;row++) 
  {
    delay(delaytime);
    lc.setRow(0,row,0xA0);
    delay(delaytime);
    lc.setRow(0,row,(byte)0);
    for(int i=0;i<row;i++) 
    {
      delay(delaytime);
      lc.setRow(0,row,0xA0);
      delay(delaytime);
      lc.setRow(0,row,(byte)0);
    }
  }
}

void columns() //도트매트릭스의 열에 있는 LED를 첫번째부터 1개씩 순서대로 ON하는 함수.
{
  for(int col=0;col<8;col++) 
  {
    delay(delaytime);
    lc.setColumn(0,col,0xA0);
    delay(delaytime);
    lc.setColumn(0,col,(byte)0);
    for(int i=0;i<col;i++)
    {
      delay(delaytime);
      lc.setColumn(0,col,0xA0);
      delay(delaytime);
      lc.setColumn(0,col,(byte)0);
    }
  }
}

void single() //도트매트릭스의 LED를 첫번째부터 1개씩 8까지 순서대로 OFF하는 함수.
{
  for(int row=0;row<8;row++) 
  {
    for(int col=0;col<8;col++) 
    {
      delay(delaytime);
      lc.setLed(0,row,col,true);
      delay(delaytime);
      for(int i=0;i<col;i++) 
      {
        lc.setLed(0,row,col,false);
        delay(delaytime);
        lc.setLed(0,row,col,true);
        delay(delaytime);
      }
    }
  }
}

void loop() // setup()함수 호출 이후, loop()함수가 호출되며, 이하 중가로안에 있는 함수들을 호출.
            //  do ~while문에서 while 역할.
{ 
  writeArduinoOnMatrix();
  rows();
  columns();
  single();
}
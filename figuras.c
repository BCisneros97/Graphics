#include <graphics.h>

void figura1(int x,int y,int size){
    int x1 = x, y1 = y;
    x1 += 4*size;
    line(x, y, x1, y1);
    y1+=4*size;
    line(x,y,x,y1);
    line(x1,y,x1,y1);
    line(x,y1,x1,y1);
}

void figura2(int x,int y, int size){
     int x1=x,y1=y;
     x1 += 4*size;
     y1  += 4*size;
     line(x, y, x1, y);
     line(x, y, x-size*2, y1);
     line(x1,y,x1-size*2,y1);
     line(x-size*2,y1,x1-size*2,y1);
}

 void  figura3(int x,int y,int size){
       int x1=x,y1=y;
       x1 += 4*size;
       y1  += 4*size;
       line(x, y, x1, y);
       line(x,y,x+size,y1);
       line(x1,y,x1-size,y1);
       line(x+size,y1,x1-size,y1);
       }

void figura4(int x,int y,int size){
     int x1=x,y1=y;
     x1 += 2*size;
     y1  += 2*size;
     line(x,y,x1,y1);
     line(x,y,x-2*size,y1);
     line(x-2*size,y1,x,y1+2*size);
     line(x1,y1,x,y1+2*size);
}

void figura5(int x,int y,int size){
     int x1=x,y1=y;
     x1 += 2*size;
     y1  += 4*size;
     line(x,y,x1,y1);
     line(x,y,x-2*size,y1);
     line(x-2*size,y1,x1,y1);
}

void  figura6(int x,int y,int size){
     int x1=x,y1=y;
     x1 += 4*size;
     y1  += 4*size;
     line(x,y,x1,y1);
     line(x,y,x,y1);
     line(x,y1,x1,y1);
}

void  figura7(int x,int y,int size){
     int x1=x,y1=y;
     x1  -= 4*size;
     y1  += 2*size;
     line(x,y,x1,y1);
     line(x1,y1,x-2*size,y1+2*size);
     line(x,y,x-2*size,y1+2*size);
}

void   figura8(int x,int y,int size){
     int x1=x,y1=y;
     x1  += 2*size;
     y1  += size;
     line(x,y,x1,y);
     line(x,y,x,y1);
     line(x1,y,x1,y1);
     y+=size;
     x1+=size;
     y1+=2*size;
     line(x,y,x-size,y);
     line(x+2*size,y,x1,y);
     line(x-size,y,x-size,y1);
     line(x1,y,x1,y1);
     line(x-size,y1,x,y1);
     line(x1,y1,x1-size,y1);
     line(x,y1,x,y1+size);
     line(x1-size,y1,x1-size,y1+size);
     line(x,y1+size,x1-size,y1+size);
}

void   figura9(int x,int y,int size){
    int x1 = x, y1 = y;
    x1 += 5*size;
    line(x, y, x1, y1);
    y1+=5*size;
    line(x,y,x,y1);
    line(x1,y,x1,y1);
    line(x,y1,x1,y1);
    line(x1,y,x1-size,y+size);
    line(x1,y1,x1-size, y1-size);
    line(x,y1,x+size,y1-size);
    line( x,y,x+size,y+size);

    //Cuadrado Interno
    x+=size;
    y+=size;
    x1=x+3*size;
    line(x, y, x1, y);
     y1=y+3*size;
    line(x,y,x,y1);
    line(x1,y,x1,y1);
    line(x,y1,x1,y1);
}

void figura10(int x, int y, int size) {
    int x1 = x, y1 = y;
    x1 += 4*size;
    line(x, y, x1, y1);
    y1+=4*size;
    line( x1,y,x1,y1);
    line(x,y,x-size,y+size);
    line(x1,y,x1-size,y+size);
    line(x-size,y+size,x1-size,y+size);
    line(x-size,y+size,x-size,y1+size);
    line(x1-size,y+size ,x1-size,y1+size);
    line(x1,y1,x1-size,y1+size);
    line(x-size,y1+size,x1-size,y1+size);
}

void figura11(int x, int y, int size) {
     int x1 = x+4*size, y1 = y;
     line(x,y,x-2*size,y+2*size);
     line(x,y,x1,y+3*size);
     line(x-2*size,y+2*size,x+2*size,y+5*size);
     line(x+2*size,y+5*size,x1,y+3*size);
}

void figura12(int x, int y, int size) {
     int x1 = x+4*size, y1 = y;
     line(x,y,x1,y1);
     line(x,y,x,y+2*size);
     line(x,y+2*size,x1,y1+2*size);
     line(x1,y,x1,y-size);
     line(x1,y+2*size,x1,y+3*size);
      line(x1,y-size,x1+2*size,y+size);
      line(x1,y+3*size,x1+2*size,y+size);
}

void figura13(int x, int y, int size) {
    int x1 = x, y1 = y;
    x1 += 4*size;
    line(x, y, x1, y1);
    line(x1, y1, x1 + size, y1 + size);
    x1 += size;
    y1 += size;
    line(x1, y1, x1 - size, y1 + size);
    x1 -= size;
    y1 += size;
    line(x1, y1, x1 - 4*size, y1);
    x1 -= 4*size;
    line(x1, y1, x1 + size, y1 - size);
    line(x1 + size, y1 - size, x, y);
}

void figura14(int xc, int yc, int size) {
    int x1 = xc - 3*size, y1 = yc - size;
    line(x1, y1, x1 + 6*size, y1);
    line(x1, y1 + 2*size, x1 + 6*size, y1 + 2*size);

    line(x1, y1, x1, y1 - size);
    line(x1 + 6*size, y1, x1 + 6*size, y1 - size);
    line(x1, y1 + 2*size, x1, y1 + 3*size);
    line(x1 + 6*size, y1 + 2*size, x1 + 6*size, y1 + 3*size);

    line(x1, y1 - size, x1 - 2*size, yc);
    line(x1, y1 + 3*size, x1 - 2*size, yc);
    line(x1 + 6*size, y1 - size, x1 + 8*size, yc);
    line(x1 + 6*size, y1 + 3*size, x1 + 8*size, yc);
}

void figura15(int xc, int yc, int size) {
    int x1 = xc - 3*size, y1 = yc - size;
    line(x1, y1, x1 + 6*size, y1);
    line(x1, y1 + 2*size, x1 + 6*size, y1 + 2*size);

    line(x1, y1, x1 + size, yc);
    line(x1, y1 + 2*size, x1 + size, yc);

    line(x1 + 6*size, y1, x1 + 6*size, y1 - size);
    line(x1 + 6*size, y1 + 2*size, x1 + 6*size, y1 + 3*size);

    line(x1 + 6*size, y1 - size, x1 + 8*size, yc);
    line(x1 + 6*size, y1 + 3*size, x1 + 8*size, yc);
}

void figura16(int xc, int yc, int size) {
    int x1 = xc - size, y1 = yc - size;
    line(x1, y1, x1, y1 - 3*size);
    y1 -= 3*size;
    line(x1, y1, x1 - size, y1);
    x1 -= size;
    line(x1, y1, xc, y1 - 2*size);
    y1 -= 2*size;
    x1 = xc;
    line(x1, y1, x1 + 2*size, y1 + 2*size);
    x1 += 2*size;
    y1 += 2*size;
    line(x1, y1, x1 - size, y1);
    x1 -= size;
    line(x1, y1, x1, y1 + 5*size);
    y1 += 5*size;
    line(x1, y1, x1 - 5*size, y1);
    x1 -= 5*size;
    line(x1, y1, x1, y1 + size);
    y1 += size;
    line(x1, y1, x1 - 2*size, yc);
    x1 -= 2*size;
    y1 = yc;
    line(x1, y1, x1 + 2*size, y1 - 2*size);
    x1 += 2*size;
    y1 -= 2*size;
    line(x1, y1, x1, y1 + size);
    y1 += size;
    line(x1, y1, x1 + 3*size, y1);
}

void figura17(int xc, int yc, int size) {
    int x1 = xc - size, y1 = yc - size;
    line(x1, y1, x1, y1 - 3*size);
    y1 -= 3*size;
    line(x1, y1, x1 - size, y1);
    x1 -= size;
    line(x1, y1, xc, y1 - 2*size);
    y1 -= 2*size;
    x1 = xc;
    line(x1, y1, x1 + 2*size, y1 + 2*size);
    x1 += 2*size;
    y1 += 2*size;
    line(x1, y1, x1 - size, y1);
    x1 -= size;
    line(x1, y1, x1, y1 + 5*size);
    y1 += 5*size;
    line(x1, y1, x1 - 6*size, y1);
    x1 -= 6*size;
    line(x1, y1, x1, y1 - 2*size);
    y1 -= 2*size;
    line(x1, y1, x1 + 4*size, y1);
}

void figura18(int x1, int y1, int x2, int y2) {
    line(x1, y1, x2, y2);
    line(x2, y2, x2 - 13, y2 - 2);
    line(x2, y2, x2 - 8, y2 + 9);
}

void figura19(int xc, int yc, int size) {
    int x1 = xc - size, y1 = yc - size;
    line(x1, y1, x1, y1 - 3*size);
    line(x1, y1 - 3*size, x1 - size, y1 - 3*size);
    line(x1 - size, y1 - 3*size, xc, y1 - 5*size);
    line(xc, y1 - 5*size, xc + 2*size, y1 - 3*size);
    line(xc + 2*size, y1 - 3*size, xc + size, y1 - 3*size);
    line(xc + size, y1 - 3*size, xc + size, y1);

    x1 = xc + size;
    line(x1, y1, x1 + 2*size, y1);
    line(x1 + 2*size, y1, x1 + 2*size, y1 - size);
    line(x1 + 2*size, y1 - size, x1 + 4*size, yc);
    line(x1 + 4*size, yc, x1 + 2*size, yc + 2*size);
    line(x1 + 2*size, yc + 2*size, x1 + 2*size, yc + size);
    line(x1 + 2*size, yc + size, xc - 3*size, yc + size);
    x1 = xc - 3*size;
    y1 = yc + size;
    line(x1, y1, x1, y1 + size);
    line(x1, y1 + size, x1 - 2*size, yc);
    line(x1 - 2*size, yc, x1, yc - 2*size);
    line(x1, yc - 2*size, x1, yc - size);
    line(x1, yc - size, x1 + 2*size, yc - size);
}

void figura20(int xc, int yc, int size) {
    int x1 = xc - size, y1 = yc - size;
    line(x1, y1, x1, y1 - 3*size);
    line(x1, y1 - 3*size, x1 - size, y1 - 3*size);
    line(x1 - size, y1 - 3*size, xc, y1 - 5*size);
    line(xc, y1 - 5*size, xc + 2*size, y1 - 3*size);
    line(xc + 2*size, y1 - 3*size, xc + size, y1 - 3*size);
    line(xc + size, y1 - 3*size, xc + size, y1);

    x1 = xc + size;
    line(x1, y1, x1 + 2*size, y1);
    line(x1 + 2*size, y1, x1 + 2*size, y1 - size);
    line(x1 + 2*size, y1 - size, x1 + 4*size, yc);
    line(x1 + 4*size, yc, x1 + 2*size, yc + 2*size);
    line(x1 + 2*size, yc + 2*size, x1 + 2*size, yc + size);
    line(x1 + 2*size, yc + size, x1, yc + size);

    y1 = yc + size;
    line(x1, y1, x1, y1 + 3*size);
    line(x1, y1 + 3*size, x1 + size, y1 + 3*size);
    line(x1 + size, y1 + 3*size, xc, y1 + 5*size);
    line(xc, y1 + 5*size, xc - 2*size, y1 + 3*size);
    line(xc - 2*size, y1 + 3*size, xc - size, y1 + 3*size);
    line(xc - size, y1 + 3*size, xc - size, y1);
    line(xc - size, y1, xc - 3*size, y1);

    x1 = xc - 3*size;
    y1 = yc + size;
    line(x1, y1, x1, y1 + size);
    line(x1, y1 + size, x1 - 2*size, yc);
    line(x1 - 2*size, yc, x1, yc - 2*size);
    line(x1, yc - 2*size, x1, yc - size);
    line(x1, yc - size, x1 + 2*size, yc - size);
}

void figura21(int xc, int yc, int size) {
    int x1 = xc - 4*size, y1 = yc - 3*size;
    line(x1, y1, x1 + 8*size, y1);
    line(x1, y1, x1, y1 + 6*size);
    line(x1, y1 + 6*size, x1 + 8*size, y1 + 6*size);
    x1 += 8*size;
    line(x1, y1, x1, y1 + 2*size);
    line(x1, y1 + 2*size, x1 + 2*size, y1 + 2*size);
    line(x1 + 2*size, y1 + 2*size, x1 + 2*size, y1 + size);
    line(x1 + 2*size, y1 + size, x1 + 4*size, yc);
    line(x1 + 4*size, yc, x1 + 2*size, yc + 2*size);
    line(x1 + 2*size, yc + 2*size, x1 + 2*size, yc + size);
    line(x1 + 2*size, yc + size, x1, yc + size);
    line(x1, yc + size, x1, yc + 3*size);
}

void figura22(int xc, int yc, int size) {
    int x1 = xc - 4*size, y1 = yc - 3*size;
    line(x1, y1, x1 + 8*size, y1);
    line(x1, y1 + 6*size, x1 + 8*size, y1 + 6*size);
    x1 += 8*size;
    line(x1, y1, x1, y1 + 2*size);
    line(x1, y1 + 2*size, x1 + 2*size, y1 + 2*size);
    line(x1 + 2*size, y1 + 2*size, x1 + 2*size, y1 + size);
    line(x1 + 2*size, y1 + size, x1 + 4*size, yc);
    line(x1 + 4*size, yc, x1 + 2*size, yc + 2*size);
    line(x1 + 2*size, yc + 2*size, x1 + 2*size, yc + size);
    line(x1 + 2*size, yc + size, x1, yc + size);
    line(x1, yc + size, x1, yc + 3*size);
    x1 = xc - 4*size;
    y1 = yc - 3*size;
    line(x1, y1, x1, y1 + 2*size);
    line(x1, y1 + 2*size, x1 - 2*size, y1 + 2*size);
    line(x1 - 2*size, y1 + 2*size, x1 - 2*size, y1 + size);
    line(x1 - 2*size, y1 + size, x1 - 4*size, yc);
    line(x1 - 4*size, yc, x1 - 2*size, yc + 2*size);
    line(x1 - 2*size, yc + 2*size, x1 - 2*size, yc + size);
    line(x1 - 2*size, yc + size, x1, yc + size);
    line(x1, yc + size, x1, yc + 3*size);
}

void figura23(int xc, int yc, int size) {
    int x1 = xc - 4*size, y1 = yc - 4*size;
    line(x1, y1, x1 + 3*size, y1);
    line(x1 + 3*size, y1, x1 + 3*size, y1 - 2*size);
    line(x1 + 3*size, y1 - 2*size, x1 + 2*size, y1 - 2*size);
    line(x1 + 2*size, y1 - 2*size, xc, y1 - 4*size);
    line(xc, y1 - 4*size, xc + 2*size, y1 - 2*size);
    line(xc + 2*size, y1 - 2*size, xc + size, y1 - 2*size);
    line(xc + size, y1 - 2*size, xc + size, y1);
    line(xc + size, y1, xc + 4*size, y1);

    x1 = xc + 4*size;
    line(x1, y1, x1, y1 + 3*size);
    line(x1, y1 + 3*size, x1 + 2*size, y1 + 3*size);
    line(x1 + 2*size, y1 + 3*size, x1 + 2*size, y1 + 2*size);
    line(x1 + 2*size, y1 + 2*size, x1 + 4*size, y1 + 4*size);
    line(x1 + 4*size, y1 + 4*size, x1 + 2*size, y1 + 6*size);
    line(x1 + 2*size, y1 + 6*size, x1 + 2*size, y1 + 5*size);
    line(x1 + 2*size, y1 + 5*size, x1, y1 + 5*size);
    line(x1, y1 + 5*size, x1, y1 + 8*size);

    y1 += 8*size;
    line(x1, y1, x1 - 3*size, y1);
    line(x1 - 3*size, y1, x1 - 3*size, y1 + 2*size);
    line(x1 - 3*size, y1 + 2*size, x1 - 2*size, y1 + 2*size);
    line(x1 - 2*size, y1 + 2*size, xc, y1 + 4*size);
    line(xc, y1 + 4*size, xc - 2*size, y1 + 2*size);
    line(xc - 2*size, y1 + 2*size, xc - size, y1 + 2*size);
    line(xc - size, y1 + 2*size, xc - size, y1);
    line(xc - size, y1, xc - 4*size, y1);

    x1 = xc - 4*size;
    line(x1, y1, x1, y1 - 3*size);
    line(x1, y1 - 3*size, x1 - 2*size, y1 - 3*size);
    line(x1 - 2*size, y1 - 3*size, x1 - 2*size, y1 - 2*size);
    line(x1 - 2*size, y1 - 2*size, x1 - 4*size, yc);
    line(x1 - 4*size, yc, x1 - 2*size, yc - 2*size);
    line(x1 - 2*size, yc - 2*size, x1 - 2*size, yc - size);
    line(x1 - 2*size, yc - size, x1, yc - size);
    line(x1, yc - size, x1, yc - 4*size);
}

int main(int argc, char *argv[]) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

	figura1(20,20,20);
    figura2(170,20,20);
    figura3(270,20,20);
    figura4(400,20,20);
    figura5(500,20,20);
    figura6(550,20,20);

    figura7(100,120,20);
    figura8(150,120,20);
    figura9(250,120,20);
    figura10(400,120,20);
    figura11(530,120,20);
    figura12(620,180,20);

    figura13(20, 270, 20);
    figura14(180, 290, 10);
    figura15(270, 290, 10);
    figura16(390, 290, 10);
    figura17(470, 290, 10);
    figura18(500, 300, 560, 280);

    figura19(70, 400, 10);
    figura20(170, 400, 8);
    figura21(260, 400, 8);
    figura22(400, 400, 8);
    figura23(540, 400, 8);

    getch();
    closegraph();

    return EXIT_SUCCESS;
}

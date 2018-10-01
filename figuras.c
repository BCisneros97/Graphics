#include <graphics.h>

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
}

int main(int argc, char *argv[]) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    figura13(20, 20, 20);
    figura14(80, 120, 10);
    figura15(80, 170, 10);
    figura16(80, 270, 10);

    getch();
    closegraph();

    return EXIT_SUCCESS;
}

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

int main(int argc, char *argv[]) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    figura13(20, 20, 20);

    getch();
    closegraph();

    return EXIT_SUCCESS;
}

```c

#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    int x, y;
    double t;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    /* Heart curve */
    setcolor(RED);

    for (t = 0; t <= 6.28; t = t + 0.01)
    {
        x = 320 + 100 * pow(sin(t), 3);

        y = 250 - 100 * (13 * cos(t)
             - 5 * cos(2*t)
             - 2 * cos(3*t)
             - cos(4*t)) / 16;

        putpixel(x, y, RED);
    }

    getch();
    closegraph();

    return 0;
}
```

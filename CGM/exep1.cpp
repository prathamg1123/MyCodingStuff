#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    int dx, dy, p, x, y;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("Enter the starting point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the ending point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    x = x1;
    y = y1;

    p = 2 * dy - dx;

    while (x <= x2)
    {
        putpixel(x, y, WHITE);
        x++;

        if (p < 0)
        {
            p = p + 2 * dy;
        }
        else
        {
            y++;
            p = p + 2 * dy - 2 * dx;
        }
    }

    getch();
    return 0;
}
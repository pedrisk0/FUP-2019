#include "xpaint.h"

int main(){
    int largura = 1280, altura = 720;
    x_open(largura, altura);
    xs_color(GREEN);
    xd_circle(largura/2, altura/2, 200);
    xs_color(GREEN);
    xd_circle(largura/2, altura/2, 90);
    xs_color(GREEN);
    xd_circle(635, altura/2, 5);
    xs_color(GREEN);
    xd_bezier(200, 360, 640, -40, 1080, 360);
    xs_color(GREEN);
    xd_bezier(200, 360, 640, 756, 1080, 360);

    xs_color(GREEN);
    xd_line(200, 156, 200, 565);
    xs_color(GREEN);
    xd_line(200, 156, 1080, 156);
    xs_color(GREEN);
    xd_line(1080, 156, 1080, 564);
    xs_color(GREEN);
    xd_line(200, 564, 1080, 564);
    xs_color(RED);
    xd_line(200, 156, 200, 558);

    xs_color(GREEN);
    xd_line(200, 156, 200, 650);
    xs_color(GREEN);
    xd_line(200, 156, 1180, 156);
    xs_color(GREEN);
    xd_line(1180, 156, 1180, 640);
    xs_color(GREEN);
    xd_line(200, 640, 1180, 640);

    xs_color(GREEN);
    xd_line(200, 156, 200, 715);
    xs_color(GREEN);
    xd_line(200, 156, 1270, 156);
    xs_color(GREEN);
    xd_line(1270, 156, 1270, 715);
    xs_color(GREEN);
    xd_line(200, 715, 1270, 715);

    xs_color(GREEN);
    xd_line(200, 601, 1130, 601);
    xs_color(GREEN);
    xd_line(1130, 156, 1130, 601);

    xs_color(GREEN);
    xd_line(200, 677, 1230, 677);
    xs_color(GREEN);
    xd_line(1230, 156, 1230, 677);
    xs_color(GREEN);
    xd_line(1080, 564, 1270, 715);

    xs_color(GREEN);
    xd_line(635, 558, 480, 245);
    xs_color(GREEN);
    xd_line(635, 558, 807, 250);
    xs_color(GREEN);
    xd_line(480, 245, 802, 245);

    xs_color(GREEN);
    xd_line(635, 160, 635, 554);
    
    xs_color(GREEN);
    xd_line(635, 270, 570, 415);
    xs_color(GREEN);
    xd_line(635, 270, 711, 412);
    xs_color(GREEN);
    xd_line(570, 415, 710, 415);
    x_save("xpaint");
    x_close();
    return 0;
}
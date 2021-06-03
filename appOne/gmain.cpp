/*
#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let x=0, y=0, deg=-360;

    angleMode(DEGREES);
    clear(255);
    while (notQuit) {
        
        mathAxis(360);
        deg += 0.5;
        x = cos(deg)*100;
        y = sin(deg)*100;
        if (deg >= 360) {
            deg = -360;
            clear(255);
        };
        strokeWeight(10);
        stroke(3, 252, 227);
        mathPoint(deg, y);
        stroke(255, 150, 100);
        mathPoint(deg, x);
    }
}
*/

#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let x, y,deg,r;

    angleMode(DEGREES);
    while (notQuit) {
        if (isTrigger(KEY_W)) { deg += 30; }
        if (isTrigger(KEY_S)) { deg += -30; }
        if (isPress(KEY_A)) { deg++; }
        if (isPress(KEY_D)) { deg--; }
        x = cos(deg);
        y = sin(deg);
        r = sqrt(x * x + y * y);
        clear(128);
        mathAxis(3.2);
        strokeWeight(10);
        stroke(10, 252, 227);
        mathLine(0, 0, x, y);
        stroke(227, 252, 3);
        mathLine(0, 0, x, 0);
        stroke(227, 3, 252);
        mathLine(x, 0, x, y);

        textSize(50);
        fill(255, 255, 200);
        text("底辺＝cos("+deg+")＝"+x, 0, 60);
        fill(255, 200, 200);
        text("高さ＝sin(" + deg+")＝" + y, 0, 120);
        fill(200, 200, 255);
        text("斜辺(半径）＝"+r,0,180);

    }
}



/*
#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let deg = 0;
    let x, y, r;
    angleMode(DEGREES);
    while (notQuit) {
        //角度degを決定
        if (isTrigger(KEY_SPACE))deg = 0;
        if (isTrigger(KEY_D))deg += 30;
        if (isTrigger(KEY_A))deg -= 30;
        if (isPress(KEY_W))deg += 1;
        if (isPress(KEY_S))deg -= 1;
        //原点から引いた長さ１の線を
        //deg度回転させたときのx、yを求める
        x = cos(deg);
        y = sin(deg);
        //線の長さrを求めて、１かどうか確認する
        r = sqrt(x * x + y * y);

        //クリアして軸を描画
        clear(128);
        mathAxis(1.2, 255);
        //線の太さ
        strokeWeight(10);
        //斜辺（長さ１の線）
        stroke(160, 200, 255);
        mathLine(0, 0, x, y);
        //底辺
        stroke(255, 255, 200);
        mathLine(0, 0, x, 0);
        //高さ
        stroke(255, 200, 200);
        mathLine(x, 0, x, y);

        //テキスト情報
        textSize(40);
        fill(255, 255, 200);
        text("底辺=cos(" + deg + ")=" + x, 0, 60);
        fill(255, 200, 200);
        text("高さ=sin(" + deg + ")=" + y, 0, 120);
        fill(160, 200, 255);
        text("斜辺(半径)=" + r, 0, 180);
    }
}
*/

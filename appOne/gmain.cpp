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
        text("��Ӂ�cos("+deg+")��"+x, 0, 60);
        fill(255, 200, 200);
        text("������sin(" + deg+")��" + y, 0, 120);
        fill(200, 200, 255);
        text("�Ε�(���a�j��"+r,0,180);

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
        //�p�xdeg������
        if (isTrigger(KEY_SPACE))deg = 0;
        if (isTrigger(KEY_D))deg += 30;
        if (isTrigger(KEY_A))deg -= 30;
        if (isPress(KEY_W))deg += 1;
        if (isPress(KEY_S))deg -= 1;
        //���_��������������P�̐���
        //deg�x��]�������Ƃ���x�Ay�����߂�
        x = cos(deg);
        y = sin(deg);
        //���̒���r�����߂āA�P���ǂ����m�F����
        r = sqrt(x * x + y * y);

        //�N���A���Ď���`��
        clear(128);
        mathAxis(1.2, 255);
        //���̑���
        strokeWeight(10);
        //�ΕӁi�����P�̐��j
        stroke(160, 200, 255);
        mathLine(0, 0, x, y);
        //���
        stroke(255, 255, 200);
        mathLine(0, 0, x, 0);
        //����
        stroke(255, 200, 200);
        mathLine(x, 0, x, y);

        //�e�L�X�g���
        textSize(40);
        fill(255, 255, 200);
        text("���=cos(" + deg + ")=" + x, 0, 60);
        fill(255, 200, 200);
        text("����=sin(" + deg + ")=" + y, 0, 120);
        fill(160, 200, 255);
        text("�Ε�(���a)=" + r, 0, 180);
    }
}
*/

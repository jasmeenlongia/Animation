#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream>
#include<windows.h>
#include<unistd.h>
#include<cstdlib>
using namespace std;

class child {
    public:
        void expressions_sad(int i){
        setcolor(4);
        arc(510-i,240,50,100,20);
        setcolor(15);
        ellipse(518-i,202,0,360,6,8); //eyes
        setfillstyle(1,0);
        floodfill(518-i,202,15);}

        void expressions_happy(int i){
        setcolor(15);
        arc(500-i,205,295,327,33);//mouth
        line(507-i,222,526-i,222);
        setfillstyle(1,COLOR(249,134,134));
        floodfill(518-i,225,15);
        ellipse(518-i,202,0,360,6,8); //eyes
        setfillstyle(1,0);
        floodfill(518-i,202,15);}

        void expressions_surprise(int i){
        setcolor(15);
        arc(512-i,227,-80,160,7); //mouth
        ellipse(518-i,202,0,360,6,8); //eyes
        circle(515-i,205,3);
        setfillstyle(1,15);
        floodfill(515-i,205,15);
        setfillstyle(1,0);
        floodfill(518-i,202,15);
        setfillstyle(1,COLOR(249,134,134));
        floodfill(512-i,225,15);}

        void draw_child(int i){
        //face
        setcolor(15);
        circle(550-i,200,50);
        setfillstyle(1,COLOR(255,204,153));
        floodfill(550-i,200,15);
        setcolor(0);
        arc(518-i,202,40,100,12);
        //hair
        setcolor(0);
        arc(550-i,200,-52,161,55);
        arc(520-i,98,254,305,87);
        arc(620-i,195,150,236,59);
        //ponytail :)
        arc(610-i,160,60,180,20);
        arc(600-i,145,240,10,20);
        setfillstyle(1,0);
        floodfill(550-i,150,0);
        floodfill(610-i,142,0);
        setcolor(15); //reoutline
        arc(550-i,200,-52,161,55);
        arc(520-i,98,254,305,87);
        arc(620-i,195,150,236,59);
        arc(610-i,160,60,180,20);
        arc(600-i,145,240,10,20);
        //hairband :)
        for(int j=6;j>=0;j--){
         circle(590-i,160,j);}

        //body
        setcolor(15);
        rectangle(540-i,249,560-i,260); //neck
        setfillstyle(1,COLOR(255,204,153));
        floodfill(550-i,255,15);
        //dress
        arc(550-i,290,0,180,30);
        line(520-i,290,520-i,320);
        line(520-i,320,505-i,360);
        line(579-i,317,595-i,360);
        line(520-i,320,581-i,320); //center line
        arc(550-i,300,232,308,75);
        line(530-i,280,530-i,295); //shirt pocket
        line(545-i,280,545-i,295);
        line(530-i,295,545-i,295);
        setfillstyle(9,4);
        floodfill(550-i,340,15); //color skirt
        setfillstyle(1,7);
        floodfill(550-i,315,15); //color shirt
        line(560-i,330,575-i,340); //pocket

        //arm
        line(567-i,315,570-i,305);
        line(570-i,305,562-i,280);
        line(578-i,321,583-i,305);
        line(580-i,290,583-i,305);
        setcolor(COLOR(255,204,153));
        int points[10]={562-i,330,573-i,338,578-i,321,567-i,315,562-i,330};
        drawpoly(5, points); //sleeves
        setfillstyle(1,COLOR(255,204,153));
        floodfill(570-i,335,COLOR(255,204,153));
        setcolor(15);
        drawpoly(5, points);

        //bag
        line(580-i,290,598-i,290);
        arc(575-i,290,-4,110,25);
        line(595-i,290,595-i,325);
        line(595-i,325,582-i,325);
        setfillstyle(1,COLOR(109,53,26));
        floodfill(585-i,275,15);
        floodfill(590-i,300,15);
        rectangle(595-i,290,598-i,300); //bagbutton
        setfillstyle(1,8);
        floodfill(596-i,295,15);
        arc(585-i,293,123,233,34); //straps
        arc(585-i,293,120,233,28);
        setfillstyle(1,COLOR(109,53,26));
        floodfill(553-i,293,15);

        //background
        setfillstyle(1,9);
        floodfill(5,5,15);
        }

        void draw_legs(int i){
        //legs
        line(525-i,370,515-i,410);
        line(545-i,374,535-i,410);
        line(555-i,374,565-i,410);
        line(575-i,370,585-i,410);
        setfillstyle(1,COLOR(255,204,153));
        floodfill(530-i,380,15);
        setfillstyle(1,COLOR(255,204,153));
        floodfill(570-i,405,15);
        }

        void draw_shoes(int i){
        //shoes
        int points1[10]={515-i,410,505-i,420,540-i,420,535-i,410,515-i,410};
        drawpoly(5, points1);
        int points2[10]={565-i,410,555-i,420,590-i,420,585-i,410,565-i,410};
        drawpoly(5, points2);
        setfillstyle(1,0);
        floodfill(520-i,415,15);
        floodfill(570-i,415,15);
        }

        void draw_leg(int i){
        line(540-i,373,540-i,410);
        line(560-i,373,560-i,410);
        int points1[10]={540-i,410,530-i,420,565-i,420,560-i,410,540-i,410};
        drawpoly(5, points1);
        setfillstyle(1,COLOR(255,204,153));
        floodfill(550-i,400,15);
        setfillstyle(1,0);
        floodfill(550-i,415,15);
        }

        void right_arm(int i){
        line(540-i,260,505-i,290);
        line(487-i,275,505-i,290);
        line(520-i,292,505-i,305);
        line(480-i,285,505-i,305);
        line(495-i,295,502-i,287);
        ellipse(480-i,277,0,360,9,8);
        setfillstyle(1,COLOR(255,204,153));
        floodfill(480-i,277,15);
        setfillstyle(1,7);
        floodfill(505-i,300,15);
        setfillstyle(1,COLOR(255,204,153));
        floodfill(487-i,285,15);
        }

        void right_arm2(int i){
        line(540-i,260,505-i,290);
        line(505-i,290,482-i,301);
        line(520-i,294,505-i,305);
        line(505-i,305,480-i,315);
        line(497-i,295,503-i,307);
        ellipse(480-i,308,0,360,9,8);
        setfillstyle(1,7);
        floodfill(505-i,295,15);
        setfillstyle(1,COLOR(255,204,153));
        floodfill(497-i,298,15);
        floodfill(480-i,308,15);

        }

        void hold_choco(int i,int j){
        line(473-i,272+j,473-i,260+j);
        line(473-i,260+j,487-i,260+j);
        line(487-i,260+j,487-i,272+j);
        int points[10]={473-i,255+j,470-i,260+j,490-i,260+j,487-i,255+j,473-i,255+j};
        drawpoly(5,points);
        setfillstyle(1,COLOR(139,0,139));
        floodfill(480-i,265+j,15);
        floodfill(480-i,257+j,15);
        rectangle(473-i,247+j,487-i,255+j);
        setfillstyle(1,COLOR(109,53,26));
        floodfill(480-i,253+j,15);
        // choco width is 14 and height is approx 25
        }

        void bend_face(int z,int i,int j){
            //neck
            setcolor(15);
            int pts[10]={545-z,269,553-z,279,568-z,269,561-z,259,545-z,269};
            drawpoly(5,pts);
            setfillstyle(1,COLOR(255,204,153));
            floodfill(560-z,268,15);

            arc(500-i,205+j,295,327,33);//mouth
            line(507-i,222+j,526-i,222+j);
            setfillstyle(1,COLOR(249,134,134));
            floodfill(518-i,225+j,15);
            ellipse(518-i,202+j,0,360,6,8); //eyes
            circle(518-i,207+j,3);
            setfillstyle(1,0);
            floodfill(518-i,202+j,15);
            setfillstyle(1,15);
            floodfill(518-i,207+j,15);

            //face
            setcolor(15);
            circle(550-i,200+j,50);
            setfillstyle(1,COLOR(255,204,153));
            floodfill(550-i,200+j,15);
            setcolor(0);
            arc(518-i,202+j,40,100,12);
            //hair
            setcolor(0);
            arc(550-i,200+j,-52,161,55);
            arc(520-i,98+j,254,305,87);
            arc(620-i,195+j,150,236,59);
            //ponytail :)
            arc(610-i,160+j,60,180,20);
            arc(600-i,145+j,240,10,20);
            setfillstyle(1,0);
            floodfill(550-i,150+j,0);
            floodfill(610-i,142+j,0);
            setcolor(15); //reoutline
            arc(550-i,200+j,-52,161,55);
            arc(520-i,98+j,254,305,87);
            arc(620-i,195+j,150,236,59);
            arc(610-i,160+j,60,180,20);
            arc(600-i,145+j,240,10,20);
            //hairband :)
            for(int k=6;k>=0;k--){
             circle(590-i,160+j,k);}
            }

        void bend_body(int i, int j){
            //body
            //dress
            arc(537-i,290+j,40,220,30);
            line(510-i,300+j,520-i,320+j);
            line(520-i,320+j,505-i,360+j);
            line(579-i,317+j,595-i,360+j);
            line(520-i,320+j,581-i,320+j); //center line
            arc(550-i,300+j,232,308,75);
            line(522-i,280+j,532-i,295+j); //shirt pocket
            line(538-i,276+j,547-i,290+j);
            line(532-i,295+j,547-i,290+j);
            setfillstyle(9,4);
            floodfill(550-i,340+j,15); //color skirt
            setfillstyle(1,7);
            floodfill(550-i,315,15); //color shirt

            //arm
            line(567-i,315+j,570-i,305+j);
            line(570-i,305+j,558-i,290+j);
            line(578-i,321+j,583-i,305+j);
            line(557-i,270+j,583-i,305+j);
            setcolor(COLOR(255,204,153));
            int points[10]={562-i,330+j,573-i,338+j,578-i,321+j,567-i,315+j,562-i,330+j};
            drawpoly(5, points); //sleeves
            setfillstyle(1,COLOR(255,204,153));
            floodfill(570-i,335+j,COLOR(255,204,153));
            setcolor(15);
            drawpoly(5, points);

            //rightarm
            line(507-i,295+j,480-i,380+j);
            line(515-i,307+j,492-i,380+j);
            circle(486-i,386+j,8);
            line(500-i,360+j,487-i,355+j);
            setfillstyle(1,COLOR(255,204,153));
            floodfill(486-i,370+j,15);
            setfillstyle(1,COLOR(255,204,153));
            floodfill(486-i,386+j,15);

            //bag
            line(565-i,290,598-i,290);
            arc(575-i,290,-4,157,25);
            line(595-i,290,595-i,325);
            line(595-i,325,580-i,325);
            setfillstyle(1,COLOR(109,53,26));
            floodfill(585-i,275,15);
            floodfill(590-i,310,15);

            rectangle(595-i,290,598-i,300); //bagbutton
            arc(585-i,293,155,240,34); //straps
            arc(585-i,293,160,238,30);
            setfillstyle(1,8);
            floodfill(596-i,295,15);
            setfillstyle(1,COLOR(109,53,26));
            floodfill(553-i,293,15);

            //leg
            line(530-i,380,540-i,410);
            line(550-i,383,560-i,410);
            int points1[10]={540-i,410,530-i,420,565-i,420,560-i,410,540-i,410};
            drawpoly(5, points1);
            setfillstyle(1,COLOR(255,204,153));
            floodfill(550-i,400,15);
            setfillstyle(1,0);
            floodfill(550-i,415,15);

            //background
            setfillstyle(1,9);
            floodfill(5,5,15);
        }

};
void chocolate(int i){
    rectangle(50+i,405,80+i,420);
    settextstyle(2,HORIZ_DIR,4);
    outtextxy(53+i,406,"choco");
    int points1[10]={50+i,405,45+i,400,45+i,420,50+i,420,50+i,405};
    drawpoly(5,points1);
    int points2[10]={80+i,420,85+i,420,85+i,400,80+i,405,80+i,420};
    drawpoly(5,points2);
    setfillstyle(1,COLOR(139,0,139));
        floodfill(65+i,419,15);
        floodfill(46+i,419,15);
        floodfill(84+i,419,15);
}

void thoughts(int i){
    ellipse(470-i,80,-50,300,100,65);
    line(534-i,130,540-i,137);
    line(540-i,137,520-i,134);
    //school
    int points[16]={470-i,20,400-i,60,430-i,60,430-i,120,510-i,120,510-i,60,540-i,60,470-i,20};
    drawpoly(8,points);
    line(415-i,60,470-i,35);
    line(470-i,35,525-i,60);
    int points1[10]={430-i,75,410-i,75,390-i,90,430-i,90,430-i,75};
    drawpoly(5,points1);
    int points2[10]={510-i,75,530-i,75,550-i,90,510-i,90,510-i,75};
    drawpoly(5,points2);
    rectangle(410-i,90,430-i,120); //leftside
    rectangle(530-i,90,510-i,120); //rightside
    rectangle(455-i,80,485-i,120); //door
            setfillstyle(1,COLOR(255,255,153));
            floodfill(470-i,75,15);
            setfillstyle(1,COLOR(138,82,26)); //door
            floodfill(470-i,100,15);
            setfillstyle(1,COLOR(253,253,165)); //sides
            floodfill(420-i,100,15);
            floodfill(520-i,100,15);
            setfillstyle(1,COLOR(216,30,30)); //sidesup
            floodfill(420-i,80,15);
            floodfill(520-i,80,15);
            floodfill(470-i,30,15);
            setfillstyle(1,15);
            floodfill(470-i,16,15);
    outtextxy(444-i,55,"SCHOOL");
}

void thoughts2(int i){
    ellipse(470-i,80,-50,300,100,65);
    line(534-i,130,540-i,137);
    line(540-i,137,520-i,134);
    setfillstyle(1,15);
            floodfill(470-i,16,15);}

void text3(int i){
    settextstyle(6,HORIZ_DIR,1);
    outtextxy(410-i,55,"He Seems to");
    outtextxy(410-i,75,"be hungry!");
}

void text4(int i){
    settextstyle(6,HORIZ_DIR,1);
    outtextxy(400-i,55,"But I have got");
    outtextxy(385-i,75,"only 1 chocolate");
}

void text5(int i){
    settextstyle(6,HORIZ_DIR,1);
    outtextxy(410-i,55,"What should");
    outtextxy(420-i,75,"I do?");
}

void text1(int i){
    settextstyle(6,HORIZ_DIR,1);
    outtextxy(420-i,55,"Yeahh!!");
    outtextxy(410-i,75," A Chocolate");
}

void text2(int i){
    settextstyle(6,HORIZ_DIR,1);
    outtextxy(430-i,55,"Aww!! What a cute dog!!");
}

void text6(int i){
    settextstyle(6,HORIZ_DIR,1);
    outtextxy(400-i,40,"Hey Doggo!!");
    outtextxy(410-i,60,"Lets Share");
    outtextxy(400-i,80,"some Chocolate");
}

void text7(int i){
    settextstyle(6,HORIZ_DIR,1);
    outtextxy(450-i,60,"....");
}

void background(){
    line(0,420,1300,420);
    line(0,440,1300,440);
    setfillstyle(1,9);
        floodfill(5,5,15);
    setfillstyle(1,COLOR(105,105,105));
        floodfill(635,430,15);
    setfillstyle(1,2);
       floodfill(635,650,15);
}

void grass(int i, int j){
    int y=getmaxy();
    line(100+i,y-50+j,100+i,y+j);
    line(100+i,y-50+j,120+i,y-20+j);
    line(120+i,y-20+j,140+i,y-80+j);
    line(140+i,y-80+j,160+i,y-20+j);
    line(160+i,y-20+j,180+i,y-50+j);
    line(180+i,y-50+j,180+i,y+j);
    line(100+i,y+j,180+i,y+j);
    setfillstyle(1,COLOR(0,100,0));
        floodfill(140+i,y-10+j,15);
}

void grass_(int i){
    int y=getmaxy();
    int x=300;
    int j=50;
    int k=30;
    ellipse(x,y,90,180,j,k);
    ellipse(x+j,y-k,90,180,j,k);
    ellipse(x+2*j,y-2*k,0,180,j,k);
    ellipse(x+3*j,y-k,0,90,j,k);
    ellipse(x+4*j,y,0,90,j,k);
}

void grass0(int i,int j){
    int y=getmaxy()+20;
    ellipse(300-i,y-j,0,180,50,40);
    ellipse(420-i,y-j,0,163,80,60);
    //line(250,y,350,getmaxy());
    line(250-i,y-j,500-i,y-j);
    setfillstyle(1,COLOR(139,69,19));
        floodfill(300-i,y-25-j,15);
        floodfill(420-i,y-25-j,15);
    arc(250-i,y-j,25,120,83);
    arc(270-i,y-j,22,132,95);
    arc(420-i,y-j-40,50,185,60);
    arc(400-i,y-j-40,37,155,75);
    setfillstyle(1,COLOR(0,100,0));
        floodfill(325-i,y-j-40,15);
        floodfill(340-i,y-j-70,15);
}

void grass_final(int i, int j){
    int y=getmaxy()+20;
    ellipse(300-i,y-j,0,180,50,40);
    ellipse(420-i,y-j,0,163,80,60);
    //line(250,y,350,getmaxy());
    line(250-i,y-j,500-i,y-j);
    setfillstyle(1,COLOR(139,69,19));
        floodfill(300-i,y-25-j,15);
        floodfill(420-i,y-25-j,15);
    line(300-i,y-40-j,300-i,y-80-j);
    line(300-i,y-80-j,320-i,y-60-j);
    line(320-i,y-60-j,340-i,y-110-j);
    line(340-i,y-110-j,360-i,y-60-j);
    line(360-i,y-60-j,380-i,y-80-j);
    line(380-i,y-80-j,380-i,y-50-j);
    setfillstyle(1,COLOR(0,100,0));
        floodfill(340-i,y-108-j,15);
}

void grass1(int i){
    int y=getmaxy()+50;
    line(250-i,y,500-i,y);
    setfillstyle(1,COLOR(139,69,19));
        floodfill(300-i,y-5,15);
        floodfill(420-i,y-5,15);
    arc(250-i,y,25,120,83);
    arc(270-i,y,22,132,95);
    arc(420-i,y-40,50,185,60);
    arc(400-i,y-40,37,155,75);
    setfillstyle(1,COLOR(0,100,0));
        floodfill(325-i,y-50,15);
        floodfill(340-i,y-70,15);
}

void sun(){
    setcolor(WHITE);
    circle(100,70,30);
    setfillstyle(1,14);
    floodfill(100,70,15);
    setcolor(15);
    line(100,20,100,35);
    line(50,70,65,70);
    line(135,70,150,70);
    line(100,105,100,120);
    line(75.5,45.5,65,35);
    line(124.5,45.5,135,35);
    line(75.5,94.5,65,105);
    line(124.5,94.5,135,105);
}

void Entrance()
{
    int t,o;
    t=getmaxx()/2;
    o=200;
    setlinestyle(0,0,3);
    line(t-30,o,t-180,o+130);
    line(t-30,o,t+120,o+130);
    line(t+120,o+130,t+200,o+130);
    line(t-180,o+130,t-260,o+130);
    line(t+200,o+130,t+200,o+30);
    line(t-260,o+130,t-260,o+30);
    setlinestyle(0,0,1);
    line(t-260,o+30,t-65,o+30);
    line(t+5,o+30,t+200,o+30);
    //middle
    line(t-250,o+130,t-250,o+170);
    line(t+190,o+130,t+190,o+170);
    setlinestyle(3,0,3);
    line(t-260,o+170,t+200,o+170);
    line(t-255,o+172,t+195,o+172);
    setlinestyle(0,0,1);
    line(t-250,o+172,t-250,o+370);
    line(t+190,o+172,t+190,o+365);
    line(t-250,o+370,t-260,o+370);
    line(t-260,o+370,t-260,o+390);
    setlinestyle(0,0,3);
    line(t-400,o+390,t-80,o+390);
    line(t+20,o+390,t+340,o+390);
    rectangle(t-80,o+385,t+20,o+390);

    rectangle(t-220,o+210,t-90,o+340);
    rectangle(t+30,o+210,t+160,o+340);
    setlinestyle(1,0,3);
    line(t-230,o+208,t-80,o+208);
    line(t-225,o+209,t-85,o+209);
    line(t+20,o+208,t+170,o+208);
    line(t+25,o+209,t+165,o+209);
    setlinestyle(0,0,3);
    line(t-30,o,t-30,o+40);
    line(t-75,o+40,t+15,o+40);
    line(t-30,o+40,t-52,o+20);
    line(t-30,o+40,t-8,o+20);
    setlinestyle(0,0,3);
    rectangle(t-55,o+90,t-5,o+160);
    arc(t-30,o+90,0,180,25);
    rectangle(t-30,o+65,t-30,o+160);
    line(t+340,o+390,t+340,o+380);
    line(t-400,o+390,t-400,o+375);
    line(t-400,o+375,t-370,o+375);
    line(t-295,o+375,t-260,o+375);


    setlinestyle(0,0,3);
    line(t-155,o+210,t-155,o+340);
    line(t-220,o+240,t-90,o+240);
    line(t+95,o+210,t+95,o+340);
    line(t+30,o+240,t+160,o+240);
    setlinestyle(0,0,1);
    //tree body
    line(t+283,o+290,t+283,o+337);
    line(t+290,o+290,t+290,o+340);
    line(t+283,o+290,t+290,o+290);
    arc(t+290,o+276,270,90,15);
    arc(t+285,o+272,90,270,20);
    arc(t+284,o+233,90,270,20);
    arc(t+284,o+193,90,270,20);
    arc(t+287,o+244,270,90,18);
    arc(t+287,o+210,270,90,18);
    arc(t+287,o+183,270,110,11);

    //tree body2

    line(t-325,o+290,t-325,o+350);
    line(t-318,o+290,t-318,o+352);
    line(t-325,o+290,t-318,o+290);
    arc(t-313,o+276,250,90,15);
    arc(t-323,o+272,90,270,20);
    arc(t-324,o+233,90,270,20);
    arc(t-324,o+193,90,270,20);
    arc(t-321,o+244,270,90,18);
    arc(t-321,o+210,270,90,18);
    arc(t-321,o+183,270,110,11);

    setlinestyle(0,0,3);
    //bush
    arc(t-330,o+390,0,180,40);
    arc(t+220,o+390,0,180,40);
    arc(t+270,o+370,0,150,35);

    line(t+340,o+390,t+340,o+370);
    line(t+340,o+370,t+257,o+370);
    setcolor(WHITE);
    //
    setfillstyle(4,RED);
    floodfill(t-200,o+50,WHITE);
    setfillstyle(5,RED);
    floodfill(t+100,o+50,WHITE);
    setfillstyle(1,LIGHTGRAY);
    floodfill(t-240,o+150,WHITE);
    setfillstyle(1,DARKGRAY);
    floodfill(t-65,o+35,WHITE);
    floodfill(t-8,o+25,WHITE);
    floodfill(t-32,o+10,WHITE);
    floodfill(t-25,o+10,WHITE);
    setfillstyle(6,LIGHTBLUE);
    floodfill(t-50,o+100,WHITE);
    floodfill(t-10,o+100,WHITE);
    floodfill(t-20,o+85,WHITE);
    floodfill(t-40,o+85,WHITE);
    floodfill(t-200,o+220,WHITE);
    floodfill(t-100,o+220,WHITE);
    floodfill(t-100,o+300,WHITE);
    floodfill(t-200,o+300,WHITE);
    floodfill(t+40,o+220,WHITE);
    floodfill(t+150,o+220,WHITE);
    floodfill(t+40,o+320,WHITE);
    floodfill(t+150,o+320,WHITE);
    setfillstyle(1,BROWN);
    //putpixel(t+285,o+300,WHITE);
    floodfill(t-320,o+320,WHITE);
    floodfill(t+285,o+300,WHITE);
    setfillstyle(1,GREEN);
    floodfill(t-330,o+370,WHITE);
    floodfill(t+220,o+370,WHITE);
    floodfill(t-330,o+385,WHITE);
    floodfill(t+220,o+385,WHITE);

    floodfill(t+270,o+360,WHITE);

    //TREE
    floodfill(t-320,o+280,WHITE);
    floodfill(t+285,o+280,WHITE);
    setfillstyle(1,RED);
    floodfill(t-390,o+385,WHITE);
    floodfill(t-265,o+385,WHITE);
    floodfill(t+285,o+380,WHITE);
    setfillstyle(1,DARKGRAY);
    floodfill(t-240,o+370,WHITE);
}

void Env()
{
    line(0,650,getmaxx(),650);
    setfillstyle(1,GREEN);
    floodfill(50,660,WHITE);
    setfillstyle(1,LIGHTBLUE);
    floodfill(10,580,WHITE);
    setfillstyle(1,DARKGRAY);

    line(0,645,getmaxx(),645);
    floodfill(10,647,WHITE);
    setfillstyle(1,LIGHTGRAY);
    line(0,590,getmaxx(),590);
    floodfill(10,610,WHITE);
}

void door1()
{
    int t,o;
    t=getmaxx()/2;
    o=200;
    setlinestyle(0,0,1);
    circle(t-3,o+326,4);
    setlinestyle(0,0,3);
    rectangle(t-70,o+250,t+10,o+385);
    setfillstyle(1,YELLOW);
    floodfill(t-3,o+326,WHITE);
    setfillstyle(4,LIGHTBLUE);
    rectangle(t-50,o+260,t-10,o+310);
    line(t-30,o+260,t-30,o+310);
    line(t-50,o+285,t-10,o+285);
    floodfill(t-45,o+270,WHITE);
    floodfill(t-15,o+270,WHITE);
    floodfill(t-45,o+290,WHITE);
    floodfill(t-15,o+290,WHITE);
    setfillstyle(1,RED);
    floodfill(t,o+380,WHITE);
}

void door2()
{
    int t,o;
    t=getmaxx()/2;
    o=200;
    setlinestyle(0,0,3);
    rectangle(t-70,o+250,t+10,o+385);
    line(t-70,o+250,t-10,o+265);
    line(t-10,o+265,t-10,o+370);
    line(t-70,o+385,t-10,o+370);
    setlinestyle(0,0,1);
    circle(t-16,o+320,4);
    setlinestyle(0,0,3);
    line(t-55,o+264,t-25,o+272);
    line(t-55,o+264,t-55,o+300);
    line(t-55,o+300,t-25,o+308);
    line(t-25,o+272,t-25,o+308);
    line(t-40,o+268,t-40,o+304);
    line(t-55,o+282,t-25,o+290);
    setfillstyle(4,LIGHTBLUE);
    floodfill(t-50,o+275,WHITE);
    floodfill(t-30,o+280,WHITE);
    floodfill(t-50,o+290,WHITE);
    floodfill(t-30,o+300,WHITE);
    setfillstyle(1,YELLOW);
    floodfill(t-16,o+320,WHITE);
    setfillstyle(1,RED);
    floodfill(t-65,o+265,WHITE);
    setfillstyle(9,WHITE);
   // putpixel(t-5,o+280,WHITE);
    floodfill(t-5,o+280,WHITE);

}

void door3()
{
    int t,o;
    t=getmaxx()/2;
    o=200;
    setlinestyle(0,0,3);
    rectangle(t-70,o+250,t+10,o+385);
    line(t-70,o+250,t-35,o+275);
    line(t-35,o+275,t-35,o+360);
    line(t-70,o+385,t-35,o+360);
    setlinestyle(0,0,1);
    circle(t-40,o+320,4);
    setlinestyle(0,0,3);
    line(t-60,o+265,t-42,o+278);
    line(t-60,o+265,t-60,o+300);
    line(t-60,o+300,t-42,o+313);
    line(t-42,o+313,t-42,o+278);
    line(t-51,o+271,t-51,o+306);
    line(t-60,o+282,t-42,o+295);
    setfillstyle(4,LIGHTBLUE);
    floodfill(t-58,o+272,WHITE);
    floodfill(t-44,o+282,WHITE);
    floodfill(t-58,o+295,WHITE);
    floodfill(t-44,o+305,WHITE);
    setfillstyle(1,YELLOW);
    floodfill(t-40,o+320,WHITE);
    setfillstyle(1,RED);
    floodfill(t-65,o+265,WHITE);
    setfillstyle(9,WHITE);
   // putpixel(t-5,o+280,WHITE);
    floodfill(t-5,o+280,WHITE);



}

void door4()
{
    int t,o;
    t=getmaxx()/2;
    o=200;
    setlinestyle(0,0,3);
    rectangle(t-70,o+250,t+10,o+385);


    setcolor(WHITE);
    setfillstyle(9,WHITE);
    //putpixel(t-5,o+280,WHITE);
    floodfill(t-5,o+280,WHITE);
    setcolor(RED);
    rectangle(t-68,o+253,t-66,o+382);




}
void girlimg()
{
    int t,o;
    t=getmaxx()/2;
    o=200;
    setlinestyle(0,0,3);
    rectangle(t-70,o+250,t+10,o+385);


    setcolor(WHITE);



    setcolor(WHITE);
    setlinestyle(0,0,1);
    circle(t-30,o+287,16);
    setfillstyle(1,COLOR(255,204,153));
    floodfill(t-30,o+287,WHITE);
    setlinestyle(0,0,1);

    arc(t-15,o+269,110,195,11);//pony1
    arc(t-28,o+262,270,12,11);//pony2
   // putpixel(t-20,o+262,WHITE);
    setfillstyle(1,BLACK);
    floodfill(t-20,o+264,WHITE);
    setcolor(WHITE);
    arc(t-42,o+260,260,325,22);//lefthair
    arc(t-15,o+272,180,270,10);//righthair

    setfillstyle(1,BLACK);
    floodfill(t-32,o+272,WHITE);
    //putpixel(t-20,o+276,BLACK);
    floodfill(t-20,o+278,WHITE);
    circle(t-24,o+270,2);
    setfillstyle(1,WHITE);
    floodfill(t-24,o+270,WHITE);

    setcolor(BLACK);
    arc(t-35,o+290,70,115,8);
    arc(t-25,o+290,65,110,8);
    circle(t-35,o+286,2);//eye1
    circle(t-25,o+286,2);//eye2
    line(t-31,o+289,t-31,o+291);//nose
    arc(t-30,o+287,250,295,10);//smile
    setcolor(WHITE);
    rectangle(t-33,o+303,t-27,o+307);//neck
    arc(t-30,o+338,50,130,30);
    line(t-50,o+316,t-53,o+333);
    line(t-53,o+333,t-43,o+352);
    line(t-10,o+316,t-7,o+333);
    line(t-7,o+333,t-17,o+352);
    line(t-44,o+320,t-45,o+333);
    line(t-46,o+333,t-39,o+348);
    line(t-16,o+320,t-14,o+333);
    line(t-14,o+333,t-21,o+348);
    line(t-44,o+320,t-43,o+330);//
    line(t-40,o+334,t-38,o+338);//
    line(t-16,o+320,t-17,o+330);////
    line(t-20,o+332,t-22,o+338);////
    line(t-38,o+338,t-22,o+338);
    line(t-38,o+338,t-40,o+343);
    line(t-45,o+350,t-50,o+358);
    line(t-22,o+338,t-20,o+343);
    line(t-15,o+350,t-10,o+358);
    arc(t-30,o+338,225,315,30);
    line(t-41,o+365,t-41,o+380);//legll
    line(t-35,o+366,t-35,o+380);//leglr
    line(t-24,o+366,t-24,o+380);//legrl
    line(t-18,o+365,t-18,o+380);//legrr
    line(t-41,o+380,t-35,o+380);//joining legs
    line(t-24,o+380,t-18,o+380);//joining legs
    line(t-42,o+380,t-44,o+385);//shoes!
    line(t-35,o+380,t-33,o+385);
    line(t-24,o+380,t-26,o+385);
    line(t-18,o+380,t-16,o+385);

    line(t-38,o+348,t-43,o+354);//pockets
    line(t-21,o+348,t-16,o+354);

    line(t-24,o+320,t-24,o+325);//up pocket
    line(t-24,o+325,t-28,o+325);
    line(t-28,o+325,t-28,o+320);

    arc(t-60,o+324,325,35,20);//bag straps
    arc(t-60,o+324,317,35,23);
    arc(t-2,o+324,140,220,20);
    arc(t-2,o+324,140,220,17);

    setfillstyle(1,BLACK);
    floodfill(t-35,o+286,BLACK);
    floodfill(t-25,o+286,BLACK);

    //filling
    setfillstyle(1,BLACK);
    floodfill(t-40,o+382,WHITE);
    floodfill(t-22,o+382,WHITE);
    setfillstyle(1,COLOR(255,204,153));
    floodfill(t-39,o+370,WHITE);
    floodfill(t-22,o+370,WHITE);
    setfillstyle(9,RED);
    floodfill(t-40,o+355,WHITE);
    setfillstyle(1,RED);
    floodfill(t-21,o+324,WHITE);
    floodfill(t-39,o+324,WHITE);
    setfillstyle(1,COLOR(255,204,153));
    floodfill(t-30,o+304,WHITE);
        //line(t-38,o+340);
   // line(t-44,o+322,);
    //arc();
    setfillstyle(9,WHITE);
    //putpixel(t-5,o+280,WHITE);
    floodfill(t+5,o+260,WHITE);
    floodfill(t-33,o+370,WHITE);
    setcolor(RED);
    rectangle(t-68,o+253,t-66,o+382);
    setfillstyle(1,RED);
    floodfill(t-67,o+260,RED);
    /*setcolor(WHITE);
    setfillstyle(1,WHITE);
    //putpixel(t-5,o+280,WHITE);
    floodfill(t+5,o+260,WHITE);*/

}


void moving_img(int x1,int y1,child obj)
{
    while (1)
    {
                cleardevice();
                int i=-270;
                sun();
                obj.draw_child(i);
                obj.draw_leg(i);
                obj.expressions_surprise(i);
                obj.hold_choco(i,0);
                obj.right_arm(i);
                background();




                // image 1  - first position of dog

                arc(x1+43,y1-5,150,175,40);
                arc(x1+43,y1-25,130,180,35);
                line(x1+20,y1-50,x1+26,y1-25);
                arc(x1+53,y1-20,120,150,35);
                line(x1+36,y1-50,x1+40,y1-25);
                line(x1+26,y1-25,x1+66,y1-22);
                arc(x1+38,y1-22,270,358,30);
                arc(x1+53,y1+9,70,110,10);
                //putpixel(x+55,y-5,WHITE);
                line(x1+46,y1+5,x1+45,y1+20);
                line(x1+2,y1-7,x1-2,y1+10);
                line(x1-4,y1+10,x1+47,y1+20);
                line(x1-6,y1+18,x1+47,y1+28);
                arc(x1+42,y1+24,305,40,7);
                arc(x1+5,y1+15,155,195,11);
                line(x1+44,y1+13,x1+37,y1+7);



                //body

                line(x1-2,y1+18,x1-55,y1+38);
                arc(x1-45,y1+20,170,240,20);
                arc(x1-42,y1+37,135,213,30);
                arc(x1-40,y1+62,155,190,30);

                line(x1+44,y1+33,x1+44,y1+28);

                //circles
                ellipse(x1+42,y1+42,0,360,5,10);
                circle(x1-30,y1+52,5);
                ellipse(x1-60,y1+10,248,335,27,50);
                arc(x1+64,y1-20,168,272,10);//nose



                setfillstyle(1,BLACK);
                floodfill(x1+64,y1-20,WHITE);
                floodfill(x1+44,y1+36,WHITE);
                setfillstyle(1,GREEN);
                floodfill(x1+44,y1+26,WHITE);
                setfillstyle(1,LIGHTGRAY);
                floodfill(x1+40,y1+15,WHITE);
                setfillstyle(1,RED);

                //floodfill(x-40,y+65,WHITE);

                setfillstyle(1,BLACK);
                floodfill(x1-30,y1+52,WHITE);
                floodfill(x1-55,y1+43,WHITE);
                setfillstyle(1,BLACK);
                floodfill(x1+30,y1-40,WHITE);


                //legs

                line(x1-70,y1+65,x1-65,y1+95);
                arc(x1-60,y1+66,262,290,30);
                line(x1-50,y1+93,x1-45,y1+60);
                arc(x1-17,y1-15,249,295,80);
                line(x1+16,y1+57,x1+26,y1+67);
                arc(x1+18,y1+71,350,20,10);
                line(x1+27,y1+72,x1+20,y1+80);
                line(x1+20,y1+80,x1+32,y1+87);
                line(x1+32,y1+87,x1+50,y1+64);
                arc(x1+27,y1+59,345,10,25);
                line(x1+50,y1+53,x1+45,y1+47);
                //back legs
                arc(x1-60,y1+68,340,10,30);
                arc(x1-47,y1+65,270,315,20);
                line(x1+5,y1+60,x1+10,y1+95);
                line(x1+10,y1+95,x1+28,y1+94);
                line(x1+28,y1+94,x1+27,y1+85);

                setfillstyle(1,LIGHTGRAY);
               // putpixel(x+15,y+85,WHITE);
                floodfill(x1-20,y1+50,WHITE);
                setfillstyle(1,BLACK);
                floodfill(x1-40,y1+68,WHITE);
                floodfill(x1+15,y1+85,WHITE);
                setcolor(BLACK);
                ellipse(x1+43,y1-28,90,160,10,20);//ear hair1
                ellipse(x1+28,y1-30,90,160,10,20);//ear hair2
                circle(x1+30,y1-13,4);//eye
                arc(x1+30,y1-13,91,180,8);//eyebrow
                setfillstyle(1,BLACK);
                floodfill(x1+30,y1-13,BLACK);
                setcolor(WHITE);


                delay(150);
                x1++;

               //2nd image
                cleardevice();
                sun();


                obj.draw_child(i);
                obj.draw_leg(i);
                obj.expressions_surprise(i);
                obj.hold_choco(i,0);
                obj.right_arm(i);
                background();



                // image 1  - first position of dog

                arc(x1+43,y1-5,150,175,40);
                arc(x1+43,y1-25,130,180,35);
                line(x1+20,y1-50,x1+26,y1-25);
                arc(x1+53,y1-20,120,150,35);
                line(x1+36,y1-50,x1+40,y1-25);
                line(x1+26,y1-25,x1+66,y1-22);
                arc(x1+38,y1-22,270,358,30);
                arc(x1+53,y1+9,70,110,10);
                line(x1+46,y1+5,x1+45,y1+20);
                line(x1+2,y1-7,x1-2,y1+10);
                line(x1-4,y1+10,x1+47,y1+20);
                line(x1-6,y1+18,x1+47,y1+28);
                arc(x1+42,y1+24,305,40,7);
                arc(x1+5,y1+15,155,195,11);
                line(x1+44,y1+13,x1+37,y1+7);



                //body

                line(x1-2,y1+18,x1-55,y1+38);
                arc(x1-45,y1+20,170,240,20);
                arc(x1-42,y1+37,135,213,30);
                arc(x1-40,y1+62,155,190,30);

                line(x1+44,y1+33,x1+44,y1+28);

                //circles
                ellipse(x1+42,y1+42,0,360,5,10);
                circle(x1-30,y1+52,5);
                ellipse(x1-60,y1+10,248,335,27,50);
                arc(x1+64,y1-20,168,272,10);//nose

                //circle(x+30,y-13,4);//eye
                //arc(x+30,y-13,91,180,8);//eyebrow

                setfillstyle(1,BLACK);
                floodfill(x1+64,y1-20,WHITE);
                floodfill(x1+44,y1+36,WHITE);
                setfillstyle(1,GREEN);
                floodfill(x1+44,y1+26,WHITE);
                setfillstyle(1,LIGHTGRAY);
                floodfill(x1+40,y1+15,WHITE);
                setfillstyle(1,BLACK);
               // putpixel(x+35,y-40,WHITE);
                //floodfill(x+35,y-40,WHITE);

                //floodfill(x-20,y+45,WHITE);

                setfillstyle(1,BLACK);
                floodfill(x1-30,y1+52,WHITE);
                floodfill(x1-55,y1+43,WHITE);
                setfillstyle(1,BLACK);
                floodfill(x1+30,y1-40,WHITE);
                //putpixel(x-20,y+45,WHITE);


                //legs

                line(x1-70,y1+65,x1-75,y1+95);
                arc(x1-70,y1+66,262,300,30);
                line(x1-55,y1+90,x1-47,y1+59);
                arc(x1-17,y1-15,249,295,80);
                line(x1+16,y1+57,x1+26,y1+67);
                arc(x1+18,y1+71,360,20,10);
                line(x1+28,y1+71,x1+30,y1+95);
                line(x1+30,y1+95,x1+45,y1+95);
                line(x1+45,y1+95,x1+50,y1+64);
                arc(x1+27,y1+59,345,10,25);
                line(x1+50,y1+53,x1+45,y1+47);
                //back legs

                line(x1-51,y1+78,x1-47,y1+95);
                line(x1-47,y1+95,x1-33,y1+94);
                line(x1-33,y1+94,x1-35,y1+62);
                line(x1+5,y1+60,x1,y1+95);
                line(x1,y1+95,x1+16,y1+94);

                line(x1+16,y1+94,x1+23,y1+65);


                setfillstyle(1,LIGHTGRAY);
               // putpixel(x+15,y+85,WHITE);
                floodfill(x1-20,y1+50,WHITE);
                setfillstyle(1,BLACK);
                floodfill(x1-40,y1+68,WHITE);
                floodfill(x1+15,y1+85,WHITE);
                setcolor(BLACK);
                ellipse(x1+43,y1-28,90,160,10,20);//ear hair1
                ellipse(x1+28,y1-30,90,160,10,20);//ear hair2
                circle(x1+30,y1-13,4);//eye
                arc(x1+30,y1-13,91,180,8);//eyebrow
                setfillstyle(1,BLACK);
                floodfill(x1+30,y1-13,BLACK);
                setcolor(WHITE);



                delay(150);
                x1++;

                if(x1==120)
                return;

    }
}

void stableimg(int x1,int y1){


                /* image 1  - first position of dog*/

                arc(x1+43,y1-5,150,175,40);
                arc(x1+43,y1-25,130,180,35);
                line(x1+20,y1-50,x1+26,y1-25);
                arc(x1+53,y1-20,120,150,35);
                line(x1+36,y1-50,x1+40,y1-25);
                line(x1+26,y1-25,x1+66,y1-22);
                arc(x1+38,y1-22,270,358,30);
                line(x1+46,y1+5,x1+45,y1+20);
                line(x1+2,y1-7,x1-2,y1+10);
                line(x1-4,y1+10,x1+47,y1+20);
                line(x1-6,y1+18,x1+47,y1+28);
                arc(x1+42,y1+24,305,40,7);
                arc(x1+5,y1+15,155,195,11);
                line(x1+44,y1+13,x1+37,y1+7);



                //body

                line(x1-2,y1+18,x1-55,y1+38);
                arc(x1-45,y1+20,170,240,20);
                arc(x1-42,y1+37,135,213,30);
                arc(x1-40,y1+62,155,190,30);

                line(x1+44,y1+33,x1+44,y1+28);

                //circles
                ellipse(x1+42,y1+42,0,360,5,10);
                circle(x1-30,y1+52,5);
                ellipse(x1-60,y1+10,248,335,27,50);
                arc(x1+64,y1-20,168,272,10);//nose



                setfillstyle(1,BLACK);
                floodfill(x1+64,y1-20,WHITE);
                floodfill(x1+44,y1+36,WHITE);
                setfillstyle(1,GREEN);
                floodfill(x1+44,y1+26,WHITE);
                setfillstyle(1,LIGHTGRAY);
                floodfill(x1+40,y1+15,WHITE);
                setfillstyle(1,RED);

                //floodfill(x-40,y+65,WHITE);

                setfillstyle(1,BLACK);
                floodfill(x1-30,y1+52,WHITE);
                floodfill(x1-55,y1+43,WHITE);
                setfillstyle(1,BLACK);
                floodfill(x1+30,y1-40,WHITE);


                //legs

                line(x1-70,y1+65,x1-65,y1+95);
                arc(x1-60,y1+66,262,290,30);
                line(x1-50,y1+93,x1-45,y1+60);
                arc(x1-17,y1-15,249,295,80);
                line(x1+16,y1+57,x1+26,y1+67);
                arc(x1+18,y1+71,350,20,10);
                line(x1+27,y1+72,x1+20,y1+80);
                line(x1+20,y1+80,x1+32,y1+87);
                line(x1+32,y1+87,x1+50,y1+64);
                arc(x1+27,y1+59,345,10,25);
                line(x1+50,y1+53,x1+45,y1+47);
                //back legs
                arc(x1-60,y1+68,340,10,30);
                arc(x1-47,y1+65,270,315,20);
                line(x1+5,y1+60,x1+10,y1+95);
                line(x1+10,y1+95,x1+28,y1+94);
                line(x1+28,y1+94,x1+27,y1+85);

                setfillstyle(1,LIGHTGRAY);
                //  putpixel(x+15,y+85,WHITE);
                floodfill(x1-20,y1+50,WHITE);
                setfillstyle(1,BLACK);
                floodfill(x1-40,y1+68,WHITE);
                floodfill(x1+15,y1+85,WHITE);
                setcolor(BLACK);
                ellipse(x1+43,y1-28,90,160,10,20);//ear hair1
                ellipse(x1+28,y1-30,90,160,10,20);//ear hair2
                circle(x1+30,y1-13,4);//eye
                arc(x1+30,y1-13,91,180,8);//eyebrow
                setfillstyle(1,BLACK);
                floodfill(x1+30,y1-13,BLACK);
                setcolor(WHITE);
                arc(x1+59,y1-9,225,250,10);
                //arc(x+60,y+15,75,110,20);


    }

    void stableimg1(int x1,int y1){



                /* image 1  - first position of dog*/

                arc(x1+43,y1-5,150,175,40);
                arc(x1+43,y1-25,130,180,35);
                line(x1+20,y1-50,x1+26,y1-25);
                arc(x1+53,y1-20,120,150,35);
                line(x1+36,y1-50,x1+40,y1-25);
                line(x1+26,y1-25,x1+66,y1-22);
                arc(x1+38,y1-22,270,358,30);
                line(x1+46,y1+5,x1+45,y1+20);
                line(x1+2,y1-7,x1-2,y1+10);
                line(x1-4,y1+10,x1+47,y1+20);
                line(x1-6,y1+18,x1+47,y1+28);
                arc(x1+42,y1+24,305,40,7);
                arc(x1+5,y1+15,155,195,11);
                line(x1+44,y1+13,x1+37,y1+7);



                //body

                line(x1-2,y1+18,x1-55,y1+38);
                arc(x1-45,y1+20,170,240,20);
                arc(x1-42,y1+37,135,213,30);
                arc(x1-40,y1+62,155,190,30);

                line(x1+44,y1+33,x1+44,y1+28);

                //circles
                ellipse(x1+42,y1+42,0,360,5,10);
                circle(x1-30,y1+52,5);
                ellipse(x1-60,y1+10,248,335,27,50);
                arc(x1+64,y1-20,168,272,10);//nose

                //circle(x+30,y-13,4);//eye
                //arc(x+30,y-13,91,180,8);//eyebrow
                //ellipse(x+43,y-28,90,160,10,20);//ear hair1
                //ellipse(x+28,y-30,90,160,10,20);//ear hair2

                setfillstyle(1,BLACK);
                floodfill(x1+64,y1-20,WHITE);
                floodfill(x1+44,y1+36,WHITE);
                setfillstyle(1,GREEN);
                floodfill(x1+44,y1+26,WHITE);
                setfillstyle(1,LIGHTGRAY);
                floodfill(x1+40,y1+15,WHITE);
                setfillstyle(1,RED);

                //floodfill(x-40,y+65,WHITE);

                setfillstyle(1,BLACK);
                floodfill(x1-30,y1+52,WHITE);
                floodfill(x1-55,y1+43,WHITE);
                setfillstyle(1,BLACK);
                floodfill(x1+30,y1-40,WHITE);


                //legs

                line(x1-70,y1+65,x1-65,y1+95);
                arc(x1-60,y1+66,262,290,30);
                line(x1-50,y1+93,x1-45,y1+60);
                arc(x1-17,y1-15,249,295,80);
                line(x1+16,y1+57,x1+26,y1+67);
                arc(x1+18,y1+71,350,20,10);
                line(x1+27,y1+72,x1+20,y1+80);
                line(x1+20,y1+80,x1+32,y1+87);
                line(x1+32,y1+87,x1+50,y1+64);
                arc(x1+27,y1+59,345,10,25);
                line(x1+50,y1+53,x1+45,y1+47);
                //back legs
                arc(x1-60,y1+68,340,10,30);
                arc(x1-47,y1+65,270,315,20);
                line(x1+5,y1+60,x1+10,y1+95);
                line(x1+10,y1+95,x1+28,y1+94);
                line(x1+28,y1+94,x1+27,y1+85);

                setfillstyle(1,LIGHTGRAY);
                //  putpixel(x+15,y+85,WHITE);
                floodfill(x1-20,y1+50,WHITE);
                setfillstyle(1,BLACK);
                floodfill(x1-40,y1+68,WHITE);
                floodfill(x1+15,y1+85,WHITE);
                setcolor(BLACK);
                ellipse(x1+43,y1-28,90,160,10,20);//ear hair1
                ellipse(x1+28,y1-30,90,160,10,20);//ear hair2
                circle(x1+30,y1-13,4);//eye
                arc(x1+30,y1-13,91,180,8);//eyebrow
                setfillstyle(1,WHITE);
                floodfill(x1+30,y1-13,BLACK);
                setcolor(WHITE);
                setfillstyle(1,WHITE);
                ellipse(x1+56,y1-3,0,360,5,3);
                floodfill(x1+54,y1-3,WHITE);
                //arc(x+60,y+15,75,110,20);
    }
    
void truck(int i){
    rectangle(800-i,100,1250-i,360);
    rectangle(780-i,210,800-i,360);

    //rectangle(605-i,300,625-i,320);
    int pt[12]={650-i,180,600-i,270,600-i,360,780-i,360,780-i,180,650-i,180};
    drawpoly(6,pt);
    int pt2[10]={660-i,200,620-i,270,760-i,270,760-i,200,660-i,200};
    drawpoly(5,pt2);
    setfillstyle(1,4);
        floodfill(700-i,190,15);
        floodfill(1248-i,190,15);
    setfillstyle(1,15);
        floodfill(700-i,260,15);
        //floodfill(610-i,310,15);
    setfillstyle(1,7);
        floodfill(790-i,260,15);
        settextstyle(8,HORIZ_DIR,15);
        outtextxy(900-i,200,"choco PVT LTD");
        setcolor(14);
rectangle(600-i,320,620-i,330);
setfillstyle(1,14);
floodfill(601-i,321,14);
    setcolor(0);
    circle(1170-i,380,40);
    circle(740-i,380,40);
//circle(1170-i,380,20);
  //  circle(740-i,380,20);
    setfillstyle(1,0);
        floodfill(1140-i,380,0);
        floodfill(710-i,380,0);

setcolor(15);
    circle(1170-i,380,20);
    circle(740-i,380,20);
        setfillstyle(1,15);
        floodfill(1170-i,380,15);
        floodfill(740-i,380,15);
}

void brake_truck(int i){
    int pts[10]={785-i,110,800-i,360,1250-i,340,1240-i,90,785-i,110};
    drawpoly(5,pts);
    line(780-i,360,800-i,360);
    line(780-i,210,790-i,210);
    int pt[12]={650-i,180,600-i,270,600-i,360,780-i,360,780-i,180,650-i,180};
    drawpoly(6,pt);
    int pt2[10]={660-i,200,620-i,270,760-i,270,760-i,200,660-i,200};
    drawpoly(5,pt2);

    setfillstyle(1,4);
        floodfill(700-i,190,15);
        floodfill(1000-i,190,15);
    setfillstyle(1,15);
        floodfill(700-i,260,15);
    setfillstyle(1,7);
        floodfill(790-i,260,15);
    setcolor(14);
    rectangle(600-i,320,620-i,330);
    setfillstyle(1,14);
    floodfill(601-i,321,14);
    setcolor(0);
    circle(1170-i,360,40);
    circle(740-i,380,40);
    setfillstyle(1,0);
        floodfill(1170-i,360,0);
        floodfill(740-i,380,0);

    setcolor(15);
    circle(1170-i,360,40);
    circle(740-i,380,40);
    settextstyle(8,HORIZ_DIR,15);
     outtextxy(900-i,200,"choco PVT LTD");
}

void obs(){
ellipse(100,420,0,180,20,10);
    setfillstyle(1,YELLOW);
        floodfill(100,418,15);
}

void chocolate_throw(int i,int j){
    //i=i+310;
    //j=k+200;
    rectangle(50+i,405+j,80+i,420+j);
    settextstyle(2,HORIZ_DIR,4);
    outtextxy(53+i,406+j,"choco");
    int points1[10]={50+i,405+j,45+i,400+j,45+i,420+j,50+i,420+j,50+i,405+j};
    drawpoly(5,points1);
    int points2[10]={80+i,420+j,85+i,420+j,85+i,400+j,80+i,405+j,80+i,420+j};
    drawpoly(5,points2);
    setfillstyle(1,COLOR(139,0,139));
        floodfill(65+i,419+j,15);
        floodfill(46+i,419+j,15);
        floodfill(84+i,419+j,15);
}

void road(){
    setfillstyle(1,9);
        floodfill(5,5,15);
    line(0,420,1300,420);
    setfillstyle(1,7);
        floodfill(635,650,15);
    ellipse(100,420,0,180,25,12);
}

void school(int i){
    //school
    int points[16]={300-i,15,100-i,150,150-i,150,150-i,420,450-i,420,450-i,150,500-i,150,300-i,15};
    drawpoly(8,points);
    line(300-i,50,120-i,150);
    line(300-i,50,480-i,150);
    int points1[10]={150-i,180,100-i,180,15-i,250,150-i,250,150-i,180};
    drawpoly(5,points1);
    int points2[10]={450-i,180,500-i,180,585-i,250,450-i,250,450-i,180};
    drawpoly(5,points2);
    rectangle(50-i,250,150-i,420); //leftside
    rectangle(70-i,270,130-i,350);
    rectangle(450-i,250,550-i,420); //rightside
    rectangle(470-i,270,530-i,350);
    setfillstyle(1,CYAN);
            floodfill(90-i,300,15);
            floodfill(490-i,300,15);
    line(500-i,270,500-i,350);
    line(470-i,310,530-i,310);
    line(100-i,270,100-i,350);
    line(70-i,310,130-i,310);
    rectangle(235-i,220,365-i,420); //door
    rectangle(245-i,230,355-i,420);

            /**setfillstyle(1,COLOR(255,255,153));
            floodfill(470-i,75,15);**/
            setfillstyle(1,COLOR(138,82,26)); //door
            floodfill(237-i,222,15);
            setfillstyle(1,COLOR(139,69,19)); //door
            floodfill(300-i,400,15);
            setfillstyle(1,COLOR(238,232,170)); //sides and center
            floodfill(300-i,180,15);
            setfillstyle(1,COLOR(253,253,165));
            floodfill(60-i,300,15);
            floodfill(540-i,300,15);
            setfillstyle(1,COLOR(216,30,30)); //sidesup
            floodfill(120-i,200,15);
            floodfill(460-i,200,15);
            floodfill(300-i,30,15);
            //setfillstyle(1,15);
            //floodfill(300-i,100,15);
    settextstyle(8,HORIZ_DIR,5);
    outtextxy(225-i,130,"SCHOOL");
}


int main(){
    int gdriver=DETECT, gmode;
    initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
    initwindow(1300,700);
    int radius = 10, x1, y1, midy,z1;//jhh
    x1=50;//
    z1=getmaxx()-100;//
    y1=324;//
    int r=33;//
    int x=getmaxx();
    int y=getmaxy();
    //x is 639 changed to 1300
    //y is 479 changed to 700
    int i;
    //
    sun();
    Env();
    Entrance();
    door1();
    delay(2000);
    cleardevice();
    sun();
    Env();
    Entrance();
    door2();
    delay(2000);
    cleardevice();
    sun();
    Env();
    Entrance();
    door3();
    delay(2000);
    cleardevice();
    sun();
    Env();
    Entrance();
    door4();
    delay(2000);
    cleardevice();
    sun();
    Env();
    Entrance();
    girlimg();

    delay(2000);
//
   //going sadly to school
     child c1;
    background();
    c1.draw_child(0);
    for(i=-750;i<=-500;i=i+5)
        {
        cleardevice();
        background();
        grass_final(100,50);
        grass_final(-700,150);

        sun();
        c1.draw_child(i);
        if(i%10==0){c1.draw_leg(i);}
        else{c1.draw_shoes(i); c1.draw_legs(i);}
        if(i!=-500){c1.expressions_sad(i); thoughts(i);}
        else{c1.expressions_surprise(i);}
        delay(450);
        }
    delay(2000);
    cleardevice();

    //truck moving and choco falls
    for(i=0;i<=600;i=i+10){
        cleardevice();
        background();
        truck(i);
        obs();
        delay(70);
    }
    cleardevice();
    background();
    brake_truck(600);
    obs();
    delay(700);
    cleardevice();
    background();
    truck(600);
    obs();

    int j=-200;
    for(i=620;i<=750 && j<0;i=i+2){
        j=(j+10);
        cleardevice();
        background();
        truck(600);
        obs();
        chocolate_throw(i,j);
        delay(55);
        }

    for(i=600;i<=1300;i=i+10){
        cleardevice();
        background();
        chocolate(680);
        truck(i);
        obs();
        delay(70);
    }
    delay(2000);

    //seeing chocolate bar happily
    for(i=-750;i<=-270;i=i+10){
        cleardevice();
        background();
        sun();
        chocolate(680);
        if(i<-270){
            c1.draw_child(i);
            if(i>=-650 && i<=-550){thoughts2(i); text1(i);}
            if(i%20==0){c1.draw_leg(i);}
            else{c1.draw_shoes(i); c1.draw_legs(i);}
            c1.expressions_happy(i);
        }
        else{
            c1.bend_body(i,10);
            c1.bend_face(-230,60+i,20);
            background();
            delay(100);}
    delay(250);

    }

    //delay(2000);
    int p=120,q=324;

    cleardevice();
    //going to eat choco but sees dog
    child c2;
        for(i=-270;i<=270;i=i+5)
        {

        cleardevice();

        background();
        sun();
            c2.draw_child(i);
            if(i==-270){ moving_img(x1,y1,c2);delay(1000);continue;}
            if(i%10==0){c2.draw_leg(i);stableimg(p,q);}
            else{c2.draw_shoes(i); c2.draw_legs(i);stableimg(p,q);}
            //if(i<200) {c2.expressions_happy(i); c2.right_arm(i); c2.hold_choco(i,0);stableimg(p,q);}
            //if(i<40) {c2.expressions_surprise(i);c2.right_arm(i); c2.hold_choco(i,0);stableimg(p,q);}
            if(i>-270 && i<270){c2.expressions_sad(i); c2.right_arm(i); c2.hold_choco(i,0);stableimg(p,q);
                                        if(i==265){delay(3000);stableimg(p,q);}
                                        if(i>=-250 && i<-150){thoughts2(i); text3(i);}
                                        if(i>=-150 && i<-50){thoughts2(i); text4(i);}
                                        if(i>=-50 && i<50){thoughts2(i); text5(i);}
                                        if(i>=50 && i<150){thoughts2(i); text7(i);}
                                        }
            else{c2.expressions_happy(i); c2.right_arm2(i); c2.hold_choco(i,30); thoughts2(i-100); text6(i-100); stableimg1(p,q);}
            delay(350);
}

    delay(3000);
    cleardevice();

    //end scene
        for(i=-600;i<=-300;i=i+5)
        {
        cleardevice();
        background();
        int   t=370;
        int o=30;
        //tree body
        line(t+283,o+290,t+283,o+338);
        line(t+290,o+290,t+290,o+342);
        line(t+283,o+290,t+290,o+290);
        arc(t+290,o+276,270,90,15);
        arc(t+285,o+272,90,270,20);
        arc(t+284,o+233,90,270,20);
        arc(t+284,o+193,90,270,20);
        arc(t+287,o+244,270,90,18);
        arc(t+287,o+210,270,90,18);
        arc(t+287,o+183,270,110,11);

        //bush
        arc(t+220,o+390,0,180,40);
        arc(t+270,o+370,0,153,35);

        line(t+340,o+390,t+340,o+370);
        line(t+340,o+370,t+255,o+370);

        //TREE
        setfillstyle(1,BROWN);
        floodfill(t+285,o+300,WHITE);
        setfillstyle(1,GREEN);
        floodfill(t+285,o+280,WHITE);
        floodfill(t+220,o+388,15);
        floodfill(t+270,o+368,15);
        setfillstyle(1,RED);
        floodfill(t-390,o+385,WHITE);
        floodfill(t-265,o+385,WHITE);
        floodfill(t+285,o+380,WHITE);
        setfillstyle(1,DARKGRAY);
        floodfill(t-240,o+370,WHITE);
        grass_final(100,50);
        grass_final(-700,150);

        school(0);
        sun();
        c1.draw_child(i);
        if(i%10==0){c1.draw_leg(i);}
        else{c1.draw_shoes(i); c1.draw_legs(i);}
        c1.expressions_happy(i);

        if(i>=-500 && i<-400){settextstyle(8,HORIZ_DIR,3);
    outtextxy(700,50,"Indeed!! HAPPINESS comes from SHARING");}
        delay(450);
        }
    delay(2000);

    settextstyle(8,HORIZ_DIR,3);
    outtextxy(850,50,"SHOW your LOVE and CONCERN");
    delay(1000);
    outtextxy(850,100,"to ANIMALS also. :) ");
    delay(3000);
    cleardevice();
    background();
    sun();
    settextstyle(5,HORIZ_DIR,5);
    outtextxy(600,150,"THANK");
    outtextxy(626,200,"YOU");
    delay(2000);
    cleardevice();
    background();
    sun();
    settextstyle(5,HORIZ_DIR,3);
    outtextxy(600,50,"Presented By:");
    delay(1000);
    outtextxy(626,100,"2017CSA1092");
    delay(1000);
    outtextxy(626,150,"2017CSA1093");
    delay(1000);
    outtextxy(626,200,"2017CSA1096");
    delay(1000);
    outtextxy(626,250,"2017CSA1097");
    delay(1000);
    outtextxy(626,300,"2017CSA1099");

    getch();
    closegraph();
    return 0;
}


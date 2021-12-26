#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
#include <bios.h>
#include <ctype.h>
#include<process.h>
	int v,p,r,key;
	char a[100],c[2],d[2],sto[100][2];
	char movies[][500]={"Titanic","Die Another Day","The Social Network","Fight Club","The Godfather","Octopussy","Argo","The Wolf of Wall Street","The Day the Earth stood still","The Wizard of Oz","Eragon","Armageddon","The Pursuit of Happyness","Jumanji","Godzilla","The Italian Job","The Grand Budapest","The Golden Compass","The Theory of Everything","Rush","Quarantine","Drunken Master","The Iron Fist","Shaolin Soccer"};
	char sports[][500]={"Yaya Sanogo","Lionel Messi","Cristiano Ronaldo","Luis Suarez","Mesut Ozil","Alexis Sanchez","Aaron Ramsey","Neymar","David Silva","Segio Aguero","Eden Hazard","Arjen Robben","Marco Reus","Gareth Bale","Robin van Persie","Santi Cazorla","Diego Godin","Phillip Lahm","Manuel Neuer","Paul Pogba","Zlatan Ibrahimvic","James Rodriguez","Tomas Rosicky","Nicklas Bendtner"};
	char books[][500]={"The Lord of the Rings","And Then There Were None","The Da Vinci Code","The Catcher in the Rye","The Alchemist","Charlotte's Web","The Art of War","A Game of Thrones","The Hunger Games","Great Expectations","To Kill a Mockingbird","The Great Gatsby","Wuthering Heights","Anna Karerina","Gulliver's Travels","The Time Machine","Robinson Crusoe","Les Miserables","The Treasure Island","The Invisible Man","A Study in Scarlet","A Sign of Four","The Hounds of Baskerville","The Valley of Fear","Pride of Prejudice","The Jungle Book:","A Tale of Two Cities","The Odyssey"};
	int i,j,l,k=0,flag=0,nf=0,x=0,m=0,q=0,y=0,genre=1;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//LOADING
int I;
void a_face(int I)
   {
   //b
   setcolor(0);
   ellipse(319, 238-I,0,360,12,20);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(319,238-I,0);
   delay(1);
   //o
   setcolor(15);
   ellipse(319, 239-I,0,360,12,20);
   setfillstyle(SOLID_FILL,6);
   floodfill(319,239-I,15);
   }

void a_eyes(int I)
   {
    //b
   ellipse(316, 233-I-1, 0, 360, 2, 5);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(316,233-1-I,getmaxcolor());

   ellipse(323, 233-1-I, 0, 360, 2, 5);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(323,233-1-I,getmaxcolor());
   //nose
   ellipse(319, 243-1-I, 0, 360, 2,1);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(319,243-1-I,getmaxcolor());
   delay(1);
   //o
   ellipse(316, 233-I, 0, 360, 2, 5);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(316,233-I,getmaxcolor());

   ellipse(323, 233-I, 0, 360, 2, 5);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(323,233-I,getmaxcolor());
   //nose
   ellipse(319, 243-I, 0, 360, 2,1);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,5);
   floodfill(319,243-I,getmaxcolor());
   }

void a_mouth(int I)
   {
      //b
      setcolor(0);
      ellipse(319,247-1-I,180,360,5,3);
      delay(1);
      //o
      setcolor(15);
      ellipse(319,247-I,180,360,5,3);
   }

void a_shirt(int I)
   {
   //b
   int poly[18];
   poly[0] = 319;
   poly[1] = 261-I-1;

   poly[2] = 292;
   poly[3] = 280-I-1;

   poly[4] = 295;
   poly[5] = 290-I-1;

   poly[6] = 308;
   poly[7] = 282-I-1;

   poly[8]= 308;
   poly[9]= 330-I-1;

   poly[10]=330;
   poly[11]=330-I-1;

   poly[12]=330;
   poly[13]=282-I-1;

   poly[14]=343;
   poly[15]=290-I-1;

   poly[16]=346;
   poly[17]=280-I-1;

    fillpoly(9, poly);
   ellipse(319,264-I-1,180,360,5,3);
   setfillstyle(9,0);
   floodfill(319,290-I-1,0);

    setfillstyle(SOLID_FILL,0);
   floodfill(319,263-I,0);

   delay(1);
   //o
   int Poly[18];
   Poly[0] = 319;
   Poly[1] = 261-I;

   Poly[2] = 292;
   Poly[3] = 280-I;

   Poly[4] = 295;
   Poly[5] = 290-I;

   Poly[6] = 308;
   Poly[7] = 282-I;

   Poly[8]= 308;
   Poly[9]= 330-I;

   Poly[10]=330;
   Poly[11]=330-I;

   Poly[12]=330;
   Poly[13]=282-I;

   Poly[14]=343;
   Poly[15]=290-I;

   Poly[16]=346;
   Poly[17]=280-I;

    fillpoly(9, poly);
   ellipse(319,264-I,180,360,5,3);
   setfillstyle(9,3);
   floodfill(319,290-I,15);

    setfillstyle(SOLID_FILL,0);
   floodfill(319,263-I,15);

   }

void a_shorts(int I)
   {
  //b
   ellipse(326,355-I-1,180,70,7,30);
   ellipse(312,355-I-1,110,0,7,30);

  setfillstyle(6,0);
  floodfill(326,355-I-1,0);

  delay(1);
  //o
   ellipse(326,355-I,180,70,7,30);
   ellipse(312,355-I,110,0,7,30);

  setfillstyle(6,15);
  floodfill(326,355-I,15);
   }

void a_shoes(int I)
   {
   //b
   setfillstyle(1,0);
   //left shoe
   ellipse(308,385-I-1,180,360,6,3);
   ellipse(308,389-I-1,180,360,6,3);
   line(302,385-I-1,302,389-I-1);
   line(314,385-I-1,314,389-I-1);
   floodfill(308,389-I-1,0);
   //right shoe
   ellipse(330,385-I-1,180,360,6,3);
   ellipse(330,389-I-1,180,360,6,3);
   line(324,385-I-1,324,389-I-1);
   line(336,385-I-1,336,389-I-1);
   floodfill(330,389-I-1,0);
   delay(1);

   //0
    setfillstyle(1,6);
   //left shoe
   ellipse(308,385-I,180,360,6,3);
   ellipse(308,389-I,180,360,6,3);
   line(302,385-I,302,389-I);
   line(314,385-I,314,389-I);
   floodfill(308,389-I,15);
   //right shoe
   ellipse(330,385-I,180,360,6,3);
   ellipse(330,389-I,180,360,6,3);
   line(324,385-I,324,389-I);
   line(336,385-I,336,389-I);
   floodfill(330,389-I,15);
   }

void a_hair(int I)
   {
    //b
    setcolor(0);
    ellipse(326,217-I-1,90,180,6,7);
    ellipse(330,219-I-1,90,180,6,3);
    ellipse(311,217-I-1,0,90,6,3);
    delay(1);

    //o
    setcolor(15);
    ellipse(326,217-I,90,180,6,7);
    ellipse(330,219-I,90,180,6,3);
    ellipse(311,217-I,0,90,6,3);
   }

void a_body(int I)
   {
    //b
    setcolor(0);
    line(319,260-1-I,319,335-1-I);
    line(319,268-1-I,289,285-1-I);
    line(319,268-1-I,349,285-1-I);
    delay(1);

    //o
    setcolor(15);
    line(319,260-I,319,335-I);
    line(319,268-I,289,285-I);
    line(319,268-I,349,285-I);
   }


void a_hands(int I)
   {
    //b
    setfillstyle(1,0);
    ellipse(291,287-I-1,360,0,4,4);
    ellipse(347,287-I-1,360,0,4,4);
    floodfill(291,287-I-1,0);
    floodfill(347,287-I-1,0);
    delay(1);

    //o
    setfillstyle(1,6);
    ellipse(291,287-I,360,0,4,4);
    ellipse(347,287-I,360,0,4,4);
    floodfill(291,287-I,15);
    floodfill(347,287-I,15);
   }

////////PLAY//////////////////////////////////////////

/////////executor/////////////////////////////////
void peface()
   {
   int stangle = 0, endangle = 360;
   int xradius = 12, yradius = 20;
   ellipse(319+255, 239, stangle, endangle,xradius, yradius);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,6);
   floodfill(319+255,239,getmaxcolor());
   }

void peeyes()
   {
   ellipse(316+255, 233,150, 360, 2, 5);
   line(318+255,233,314+255,230);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(316+255,233,getmaxcolor());

   ellipse(323+255, 233, 180, 30, 2, 5);
   line(321+255,233,324+255,231);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(323+255,233,getmaxcolor());
   //nose
   ellipse(319+255, 243, 0, 360, 2,1);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,5);
   floodfill(319+255,243,getmaxcolor());
   }

void pemouth()
   { setcolor(0);
     ellipse(319+255,252,30,150,7,3);
     ellipse(319+255,253,30,150,7,3);
     ellipse(319+255,251,30,150,7,3);
     ellipse(319+255,250,30,150,7,3);
     ellipse(319+255,249,30,150,7,3);

     setcolor(15);
    }

void peshirt()
   {
   line(319+255,261,285+255,285);
   line(285+255,285,288+255,298);
   line(288+255,298,305+255,285);
   line(305+255,285,308+255,330);
   line(308+255,330,330+255,330);
   line(330+255,330,333+255,285);
   line(333+255,285,350+255,298);
   line(350+255,298,353+255,285);
   line(353+255,285,319+255,261);

   ellipse(319+255,264,180,360,5,3);
   setfillstyle(11,6);
   floodfill(319+255,290,getmaxcolor());

    setfillstyle(SOLID_FILL,0);
   floodfill(319+255,263,getmaxcolor());
   }

void peshorts()
   {
   ellipse(326+255,355,180,70,7,30);
   ellipse(312+255,355,105,20,7,30);

   setfillstyle(6,7);
   floodfill(326+255,355,getmaxcolor());
   }

void peshoes()
   {
   setfillstyle(1,6);
   //left shoe
   ellipse(308+255,385,180,360,6,3);
   ellipse(308+255,389,180,360,6,3);
   line(302+255,385,302+255,389);
   line(314+255,385,314+255,389);
   floodfill(308+255,389,getmaxcolor());
   //right shoe
   ellipse(330+255,385,180,360,6,3);
   ellipse(330+255,389,180,360,6,3);
   line(324+255,385,324+255,389);
   line(336+255,385,336+255,389);
   floodfill(330+255,389,getmaxcolor());
   }

void pehair()
   {
    setcolor(14);
    line(319+255,218,319+255,212);
    line(316+255,219,315+255,213);
    line(322+255,218,323+255,213);
    line(314+255,222,311+255,216);
    line(324+255,222,327+255,216);
    line(311+255,224,307+255,220);
    line(327+255,224,331+255,220);
    line(309+255,227,305+255,224);
    line(329+255,227,333+255,224);
   }

void pehands()
   { setfillstyle(1,6);

    ellipse(283+255,292,360,0,4,4);
    ellipse(355+255,292,360,0,4,4);
    floodfill(284+255,292,getmaxcolor());
    floodfill(354+255,292,getmaxcolor());

    setcolor(15);
   }
/////////////gaao wali///////////////////////////////
void pgface()
   {
   int stangle = 0, endangle = 360;
   int xradius = 12, yradius = 20;

   ellipse(319, 239, stangle, endangle,xradius, yradius);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,6);
   floodfill(319,239,getmaxcolor());
   }

void pgg()
   {
    ellipse(319,239,0,180,15,23);
    line(304,239,303,273);
    line(334,239,335,273);
    setcolor(getmaxcolor());
   setfillstyle(5,5);
   floodfill(324,258,getmaxcolor());
   }

void pgeyes()
   {
   ellipse(316, 233, 180, 360, 2, 5);
   line(314,233,318,233);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(316,235,getmaxcolor());

   ellipse(323, 233, 180, 360, 2, 5);
   line(321,233,325,233);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(323,235,getmaxcolor());
   //nose
   ellipse(319, 243, 0, 360, 2,1);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,5);
   floodfill(319,243,getmaxcolor());
   }

void pgmouth()
   { ellipse(319,247,180,360,5,3); }

void pg2mouth()
   { ellipse(319,247,180,360,5,3);
     ellipse(319,248,0,180,5,3);
     setfillstyle(SOLID_FILL,4);
   floodfill(319,248,15);
   }


void pgblouse()
   {
   line(319,261,292,280);
   line(292,280,295,290);
   line(295,290,305,285);
  // line(308,330,330,330);
   line(333,285,343,290);
   line(343,290,346,280);
   line(346,280,319,261);
   ellipse(319,264,180,360,5,3);

   ellipse(308,294,120,290,5,10);
   ellipse(330,294,270,60,5,10);
   line(307,305,308,320);
   line(331,305,330,320);
   line(308,320,330,320);

   setfillstyle(9,2);
   floodfill(319,290,15);
   }

void pgskirt()
   {
    line(308,330,330,330);
    line(308,330,303,395);
    line(303,395,335,395);
    line(335,395,330,330);

     setcolor(15);
     setfillstyle(5,5);
   floodfill(314,365,15);
   }

void pgl()
    {
     setcolor(0);
    line(314,320,320,320);
    line(305,330,318,330);

     setcolor(15);
    line(306,350,326,264);
    line(305,389,334,269);
     setfillstyle(4,5);
   floodfill(328,269,15);
    }

void pgp()
    {
    setcolor(15);
     line(309,330,309,320);
     line(329,330,329,320);
   setfillstyle(1,6);
   floodfill(310,322,15);
   floodfill(325,325,15);
    }

void pgshoes()
   {
   setfillstyle(1,6);
   //left shoe
   ellipse(308,385,180,360,6,3);
   ellipse(308,389,180,360,6,3);
   line(302,385,302,389);
   line(314,385,314,389);
   floodfill(308,389,getmaxcolor());
   //right shoe
   ellipse(330,385,180,360,6,3);
   ellipse(330,389,180,360,6,3);
   line(324,385,324,389);
   line(336,385,336,389);
   floodfill(330,389,getmaxcolor());
   }

void pghands()
   { setfillstyle(1,6);

    ellipse(291,287,360,0,4,4);
    ellipse(347,287,360,0,4,4);
    floodfill(291,287,getmaxcolor());
    floodfill(347,287,getmaxcolor());
   }

///////////////gaao wala////////////////////////////////////////////////
void plface(int I)
   {
   setcolor(15);
   ellipse(319-215-I, 239,0,360,12,20);
   setfillstyle(SOLID_FILL,6);
   floodfill(319-215-I,239,15);
   }

void pleyes(int I)
   {
   ellipse(316-215-I, 233, 0, 360, 2, 5);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(316-215-I,233,getmaxcolor());

   ellipse(323-215-I, 233, 0, 360, 2, 5);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(323-215-I,233,getmaxcolor());
   //nose
   ellipse(319-215-I, 243, 0, 360, 2,1);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,5);
   floodfill(319-215-I,243,getmaxcolor());
   }


void plmouth(int I)
   {
       setcolor(15);
      ellipse(319-215-I,247,180,360,5,3);
   }

void plshirt(int I)
   {
    int Poly[18];
   Poly[0] = 319-215-I;
   Poly[1] = 261;

   Poly[2] = 292-215-I;
   Poly[3] = 280;

   Poly[4] = 295-215-I;
   Poly[5] = 290;

   Poly[6] = 308-215-I;
   Poly[7] = 282;

   Poly[8]= 308-215-I;
   Poly[9]= 330;

   Poly[10]=330-215-I;
   Poly[11]=330;

   Poly[12]=330-215-I;
   Poly[13]=282;

   Poly[14]=343-215-I;
   Poly[15]=290;

   Poly[16]=346-215-I;
   Poly[17]=280;

    fillpoly(9, Poly);
   ellipse(319-215-I,264,180,360,5,3);
   setfillstyle(9,3);
   floodfill(319-215-I,290,15);

    setfillstyle(SOLID_FILL,0);
   floodfill(319-215-I,263,15);

   }

void plshorts(int I)
   {
   ellipse(326-215-I,355,180,70,7,30);
   ellipse(312-215-I,355,110,0,7,30);

  setfillstyle(6,15);
  floodfill(326-215-I,355,15);
   }

void plshoes(int I)
   {
    setfillstyle(1,6);
   //left shoe
   ellipse(308-215-I,385,180,360,6,3);
   ellipse(308-215-I,389,180,360,6,3);
   line(302-215-I,385,302-215-I,389);
   line(314-215-I,385,314-215-I,389);
   floodfill(308-215-I,389,15);
   //right shoe
   ellipse(330-215-I,385,180,360,6,3);
   ellipse(330-215-I,389,180,360,6,3);
   line(324-215-I,385,324-215-I,389);
   line(336-215-I,385,336-215-I,389);
   floodfill(330-215-I,389,15);
   }

void plhair(int I)
   {
    setcolor(15);
    ellipse(326-215-I,217,90,180,6,7);
    ellipse(330-215-I,219,90,180,6,3);
    ellipse(311-215-I,217,0,90,6,3);
   }

void plbody(int I)
   {
    setcolor(15);
    line(319-215-I,260,319-215-I,335);
    line(319-215-I,268,289-215-I,285);
    line(319-215-I,268,349-215-I,285);
   }


void plhands(int I)
   {
    setfillstyle(1,6);
    ellipse(291-215-I,287,360,0,4,4);
    ellipse(347-215-I,287,360,0,4,4);
    floodfill(291-215-I,287,15);
    floodfill(347-215-I,287,15);
   }

////////////gaao wala 2////////////////////////////////////////////
void pl2face()
   {
   setcolor(15);
   ellipse(319-65, 239,0,360,12,20);
   setfillstyle(SOLID_FILL,6);
   floodfill(319-65,239,15);
   }

void pl2eyes()
   {
   ellipse(316-65, 233, 0, 360, 2, 5);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(316-65,233,getmaxcolor());

   ellipse(323-65, 233, 0, 360, 2, 5);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(323-65,233,getmaxcolor());
   //nose
   ellipse(319-65, 243, 0, 360, 2,1);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,5);
   floodfill(319-65,243,getmaxcolor());
   }

void pl2mouth()
   {
       setcolor(15);
      ellipse(319-65,247,180,360,5,3);
   }

void pl2shirt()
   {
    int Poly[18];
   Poly[0] = 319-65;
   Poly[1] = 261;

   Poly[2] = 292-65;
   Poly[3] = 280;

   Poly[4] = 295-65;
   Poly[5] = 290;

   Poly[6] = 308-65;
   Poly[7] = 282;

   Poly[8]= 308-65;
   Poly[9]= 330;

   Poly[10]=330-65;
   Poly[11]=330;

   Poly[12]=330-65;
   Poly[13]=282;

   Poly[14]=343-65;
   Poly[15]=290;

   Poly[16]=346-65;
   Poly[17]=280;

    fillpoly(9, Poly);
   ellipse(319-65,264,180,360,5,3);
   setfillstyle(9,3);
   floodfill(319-65,290,15);

    setfillstyle(SOLID_FILL,0);
   floodfill(319-65,263,15);

   }

void pl2shorts()
   {
   ellipse(326-65,355,180,70,7,30);
   ellipse(312-65,355,110,0,7,30);

  setfillstyle(6,15);
  floodfill(326-65,355,15);
   }

void pl2shoes()
   {
    setfillstyle(1,6);
   //left shoe
   ellipse(308-65,385,180,360,6,3);
   ellipse(308-65,389,180,360,6,3);
   line(302-65,385,302-65,389);
   line(314-65,385,314-65,389);
   floodfill(308-65,389,15);
   //right shoe
   ellipse(330-65,385,180,360,6,3);
   ellipse(330-65,389,180,360,6,3);
   line(324-65,385,324-65,389);
   line(336-65,385,336-65,389);
   floodfill(330-65,389,15);
   }

void pl2hair()
   {
    setcolor(15);
    ellipse(326-65,217,90,180,6,7);
    ellipse(330-65,219,90,180,6,3);
    ellipse(311-65,217,0,90,6,3);
   }

void pl2body()
   {
    setcolor(15);
    line(319-65,260,319-65,335);
    line(319-65,268,289-65,285);
    line(319-65,268,349-65,285);
   }


void pl2hands()
   {
    setfillstyle(1,6);
    ellipse(291-65,287,360,0,4,4);
    ellipse(347-65,287,360,0,4,4);
    floodfill(291-65,287,15);
    floodfill(347-65,287,15);
   }

///MAIN///////////////////
void main1()
   {

//LOADING
for(int I=300;I>0;I-=1)
 {
   if(I%4==0)
   ellipse(321,217-I-4,0,360,1,4);

   a_shoes(I);
   a_hands(I);
   a_shirt(I);
   a_shorts(I);
   a_face(I);
   a_eyes(I);
   a_mouth(I);
   a_hair(I);

 delay(1);
 }

   char H[7][2]={"H","A","N","G","M","A","N"};
    int d=0;

 for(I=45; I<278; I++)
  {setcolor(I);

    if(I==91||I==142||I==199||I==251)
    {setcolor(12);
     settextstyle(GOTHIC_FONT,HORIZ_DIR,7);
     outtextxy(I-30, 180, H[d]);
	d++;
    }

    else
    {
     int poly[8];
     poly[0] = 45;
     poly[1] = 250;
     poly[2] = 45;
     poly[3] = 260;
     poly[4] = I;
     poly[5] = 260;
     poly[6] = I;
     poly[7] = 250;

    delay(10);
     fillpoly(4, poly);
     setfillstyle(1,I);
     floodfill(45,255,I);
    }
  }



  for(I=365; I<566; I++)
  {setcolor(I);

    if(I==402||I==470||I==528)
    {setcolor(12);
     settextstyle(GOTHIC_FONT,HORIZ_DIR,7);
     outtextxy(I-30, 180, H[d]);
	d++;
    }

    else
    {
     int poly[8];
     poly[0] = 365;
     poly[1] = 250;
     poly[2] = 365;
     poly[3] = 260;
     poly[4] = I;
     poly[5] = 260;
     poly[6] = I;
     poly[7] = 250;

    delay(10);
     fillpoly(4, poly);
     setfillstyle(1,I);
     floodfill(365,255,I);
    }
  }
 delay(100);
 cleardevice();

//PLAY
  //gaao wali
   setcolor(15);
  pgface();
   pgeyes();
   pgmouth();
   pghands();
   pgblouse();
   pgskirt();
   pgg();
   pgl();
   pgp();

 delay(3000);  //3000

for(I=130;I>=0;I-=1)  //I=130
 {
   plshoes(I);
   plhands(I);
   plshirt(I);
   plshorts(I);
   plface(I);
   pleyes(I);
   plmouth(I);
   plhair(I);

   //gaao wali
   setcolor(15);
   pgface();
   pgeyes();
   pgmouth();
   pghands();
   pgblouse();
   pgskirt();
   pgg();
   pgl();
   pgp();

  delay(50);
 if(I!=0) cleardevice();
  }
delay(500); //500

int D=30;

 do{
   if(D%2==0)
   { setcolor(4);
     settextstyle(0,0,1);
     outtextxy(108,231,"\3");
     outtextxy(95,231,"\3");  }

   else
   { setcolor(13);
     settextstyle(0,0,2);
     outtextxy(105,228,"\3");
     outtextxy(91,228,"\3");  }

   delay(100);
   D--;
  }while(D>0);

setcolor(15);
 delay(50);

cleardevice();
 //gaao wali
   setcolor(15);
   pgface();
   pgeyes();
   pgmouth();
   pghands();
   pgblouse();
   pgskirt();
   pgg();
   pgl();
   pgp();

 ///gaao wala 2
   pl2shoes();
   pl2hands();
   pl2shirt();
   pl2shorts();
   pl2face();
   pl2eyes();
   pl2mouth();
   pl2hair();

 settextstyle(0,0,1);
 outtextxy(159,200,"Helloou..Beautiful!!");
   delay(1500);

  setcolor(0);
  settextstyle(0,0,1);
  outtextxy(159,200,"Helloou..Beautiful!!");
   pg2mouth();

  setcolor(15);
  settextstyle(0,0,2);
  outtextxy(279,200,"AAAAAAAAAAA...");

   delay(4000);
   setcolor(0);
  settextstyle(0,0,2);
  outtextxy(279,200,"AAAAAAAAAAA...");

//executioner
   setcolor(15);
   peface();
   peeyes();
   pemouth();
   pehands();
   peshirt();
   peshorts();
   peshoes();
   pehair();

  setcolor(15);
  settextstyle(0,0,1);
  outtextxy(379,195,"You will pay for this.");

   delay(3000);
   setcolor(0);
  settextstyle(0,0,1);
  outtextxy(379,195,"You will pay for this.");

    setcolor(15);
  settextstyle(0,0,1);
  outtextxy(375,195,"I will take you to the king.");

   delay(3000);
   setcolor(0);
  settextstyle(0,0,1);
  outtextxy(375,195,"I will take you to the king.");

     setcolor(15);
  settextstyle(0,0,1);
  outtextxy(375,195,"He will decide your punishment.");

   delay(3000);
   setcolor(0);
  settextstyle(0,0,1);
  outtextxy(375,195,"He will decide your punishment.");
  }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void podium()
	{
	line(0,460,200,460);
	line(210,460,230,460);
	line(200,460,200,190);
	line(210,460,210,170);
	line(200,190,125,190);
	line(200,180,125,180);
	line(0,460,0,480);
	line(230,460,230,480);
	line(125,180,125,190);
	line(210,170,200,170);
	line(200,170,200,180);
	line(90,430,160,430);
	line(90,430,90,460);
	line(160,430,160,460);
	setfillstyle(SOLID_FILL,11);
	floodfill(105,470,15);
	setfillstyle(SOLID_FILL,8);
	floodfill(125,445,15);
	}
void r_podium()
   {
    line(500,393,650,393);
    line(500,393,450,500);
    setcolor(15);
    setfillstyle(2,14);
    floodfill(550,470,15);
   }
void rope()
	{
	ellipse(130,192,0,360,1,2);
	ellipse(130,196,0,360,1,2);
	ellipse(130,200,0,360,1,2);
	ellipse(130,204,0,360,1,2);
	ellipse(130,208,0,360,1,2);
	ellipse(130,212,0,360,1,2);
	ellipse(130,216,0,360,1,2);
	ellipse(130,220,0,360,1,2);
	ellipse(130,224,0,360,1,2);
	ellipse(130,228,0,360,3,2);
	ellipse(130,232,0,360,3,2);
	ellipse(130,236,0,360,3,2);
	//noose
	//LHS
	ellipse(129,240,0,360,1,2);
	ellipse(128,244,0,360,1,2);
	ellipse(127,248,0,360,1,2);
	ellipse(125,252,0,360,1,2);
     //	ellipse(125,256,0,360,1,2);
       //	ellipse(124,252,0,360,1,2);
	//RHS
	ellipse(131,240,0,360,1,2);
	ellipse(133,244,0,360,1,2);
	ellipse(135,248,0,360,1,2);
	ellipse(137,252,0,360,1,2);
	ellipse(139,256,0,360,1,2);
	ellipse(141,260,0,360,1,2);
	ellipse(142,264,0,360,1,2);
	ellipse(142,268,0,360,1,2);
	ellipse(142,272,0,360,1,2);
	ellipse(141,276,0,360,1,2);
	ellipse(140,280,0,360,1,2);
	ellipse(139,284,0,360,1,2);
	ellipse(138,288,0,360,1,2);
	ellipse(136,292,0,360,1,2);
	ellipse(133,295,0,360,2,1);
	ellipse(128,297,0,360,3,1);
	ellipse(123,297,0,360,2,1);
	ellipse(120,295,0,360,2,1);
	setfillstyle(SOLID_FILL,6);
	floodfill(130,228,15);
	floodfill(130,232,15);
	floodfill(130,236,15);
	}
//raja
void r_crown()
   {
    line(309+231,223,329+231,223);         //+231
    line(309+231,223,301+231,203);
    line(301+231,203,313+231,215);
    line(313+231,215,319+231,195);
    line(319+231,195,325+231,215);
    line(329+231,223,337+231,203);
    line(337+231,203,325+231,215);

    line(308+231,210,310+231,197);
    line(310+231,197,316+231,207);
    line(330+231,210,328+231,197);
    line(322+231,207,328+231,197);

    setfillstyle(SOLID_FILL,14);
    floodfill(319+231,200,15);
    floodfill(319+231,222,15);

     setfillstyle(9,4);
    floodfill(311+231,210,15);
    floodfill(327+231,210,15);

    ellipse(301+231, 203, 0, 360, 2,1);
    ellipse(310+231, 197, 0, 360, 2,1);
    ellipse(337+231, 203, 0, 360, 2,1);
    ellipse(328+231, 197, 0, 360, 2,1);

   setcolor(15);
   ellipse(319+231,195,0,360,3,2);
   setfillstyle(SOLID_FILL,4);
   floodfill(319+231,194,15);
   }

void r_face()
   {
   setcolor(15);
   ellipse(319+231,239,0,360,12,20);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,12);
   floodfill(319+231,239,getmaxcolor());
   }

void r_eyes()
   {
   ellipse(315+231, 233, 0, 360, 3, 3);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,3);
   floodfill(316+231,233,getmaxcolor());

   ellipse(324+231, 233, 0, 360, 3, 3);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,3);
   floodfill(323+231,233,getmaxcolor());
   //nose
   ellipse(319+231, 243, 0, 360, 2,1);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,5);
   floodfill(319+231,243,getmaxcolor());
   }

void r_mouth()
   { ellipse(319+231,247,180,360,5,3); }


void r_shirt()
   {
   line(319+231,261,285+231,285);
   line(285+231,285,288+231,298);
   line(288+231,298,305+231,285);
  // line(305,285,308,330);
   line(308+231,330,330+231,330);
  // line(330,330,333,285);
   line(333+231,285,350+231,298);
   line(350+231,298,353+231,285);
   line(353+231,285,319+231,261);
   ellipse(319+231,264,180,360,5,3);

   ellipse(308+231,300,150,270,5,30);
   ellipse(330+231,300,270,30,5,30);
   setfillstyle(9,4);
   floodfill(319+231,290,15);
   }

void r_skirt()
   {
    line(308+231,330,330+231,330);
    line(308+231,330,300+231,370);
    line(300+231,370,338+231,370);
    line(338+231,370,330+231,330);

     setcolor(15);
     setfillstyle(6,2);
   floodfill(314+231,365,15);
   }

void r_legs()
   {
    setcolor(15);
    line(313+231,386,315+231,370);
    line(309+231,388,307+231,370);
    line(325+231,386,323+231,370);
    line(329+231,388,331+231,370);
   setfillstyle(1,12);
   floodfill(311+231,384,15);
   floodfill(327+231,384,15);
   }

void r_shoes()
   {
   setfillstyle(1,6);
   //left shoe
   ellipse(308+231,385,180,360,6,3);
   ellipse(308+231,389,180,360,6,3);
   line(302+231,385,302+231,389);
   line(314+231,385,314+231,389);
   floodfill(308+231,389,getmaxcolor());
   //right shoe
   ellipse(330+231,385,180,360,6,3);
   ellipse(330+231,389,180,360,6,3);
   line(324+231,385,324+231,389);
   line(336+231,385,336+231,389);
   floodfill(330+231,389,getmaxcolor());
   }

void r_hands()
   { setfillstyle(1,12);

    ellipse(284+231,292,360,0,4,4);
    ellipse(354+231,292,360,0,4,4);
    floodfill(284+231,292,getmaxcolor());
    floodfill(354+231,292,getmaxcolor());
   }

void r_swag()
   {
   setcolor(14);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(304+231,294,"$WAG");
   line(326+231,264,319+231,294);
   line(319+231,294,312+231,264);
   }
//gaowala
void face()
   {
   int stangle = 0, endangle = 360;
   int xradius = 12, yradius = 20;

   ellipse(125, 276, stangle, endangle,xradius, yradius);    //319,239...-184,-29
   setcolor(15);
   setfillstyle(SOLID_FILL,6);
   floodfill(125,276,15);
   }

void eyes()
   {
   ellipse(122, 270, 0, 360, 2, 5);
   setcolor(15);
   setfillstyle(SOLID_FILL,0);
   floodfill(122,270,15);

   ellipse(129, 270, 0, 360, 2, 5);
   setcolor(15);
   setfillstyle(SOLID_FILL,0);
   floodfill(129,270,15);
   //nose
   ellipse(125, 280, 0, 360, 2,1);
   setcolor(15);
   setfillstyle(SOLID_FILL,5);
   floodfill(125,280,15);
   }

void mouth()
   { ellipse(125,284,180,360,5,3); }

void shirt()
   {
   int poly[18];
   poly[0] = 125;
   poly[1] = 298;

   poly[2] = 98;
   poly[3] = 317;

   poly[4] = 101;
   poly[5] = 327;

   poly[6] = 114;
   poly[7] = 319;

   poly[8]= 114;
   poly[9]= 367;

   poly[10]=136;
   poly[11]=367;

   poly[12]=136;
   poly[13]=319;

   poly[14]=149;
   poly[15]=327;

   poly[16]=152;
   poly[17]=317;
    //setfillstyle(1, 9);
    fillpoly(9, poly);
   ellipse(125,301,180,360,5,3);
   setfillstyle(9,3);
   floodfill(125,327,15);

    setfillstyle(SOLID_FILL,0);
   floodfill(125,300,15);
   }

void shorts()
   {
   ellipse(132,392,180,70,7,30);
   ellipse(118,392,105,20,7,30);

   setfillstyle(6,15);
   floodfill(132,392,15);
   }

void vest()
   {
    ellipse(125,304,180,360,5,13);

    ellipse(112,304,300,0,5,17);
    ellipse(138,304,180,244,5,17);

    line(117,304,120,304);
    line(131,304,132,304);

    line(113,319,113,367);
    line(137,319,137,367);
    line(113,367,137,367);
    setfillstyle(SOLID_FILL,15);
    floodfill(121,362,15);
   }

void chaddi()
   {
    line(113,371,137,371);
    line(112,374,138,374);
    ellipse(112,391,0,90,9,17);
    ellipse(138,391,90,180,9,17);
    line(113,371,112,374);
    line(137,371,138,374);
    line(121,391,129,391);
    setfillstyle(SOLID_FILL,5);
    floodfill(121,377,15);
    floodfill(131,377,15);
    floodfill(126,382,15);
    floodfill(121,372,15);
    floodfill(131,372,15);
    setcolor(5);
    line(124,372,121,391);
    line(126,372,129,391);
    setcolor(15);
   }
void shoes()
   {
   setfillstyle(1,4);
   //left shoe
   ellipse(114,422,180,360,6,3);  //308,385-->114,422  i.e -194,+37
   ellipse(114,426,180,360,6,3);
   line(108,422,108,426);
   line(120,422,120,426);
   floodfill(114,426,15);
   //right shoe
   ellipse(136,422,180,360,6,3);     //
   ellipse(136,426,180,360,6,3);
   line(130,422,130,426);
   line(142,422,142,426);
   floodfill(136,426,15);
   }

void feet()
	{
	setcolor(15);
	line(118,423,118,430);
	line(132,423,132,430);
	}
void hair()
   {
    ellipse(132,254,90,180,6,7);  //326,217...-184,
    ellipse(136,256,90,180,6,3);
    ellipse(117,254,0,90,6,3);
   }

void body()
   {
    line(125,297,125,372);//335
    line(125,305,95,322);
    line(125,305,155,322);
   // line(319,335,304,375);
   // line(319,335,334,375);
   }
void legs()
   {
   line(125,372,110,430);
   line(125,372,140,430);
   }

void hands()
   { setfillstyle(1,6);

    ellipse(97,324,360,0,4,4);
    ellipse(153,324,360,0,4,4);
    floodfill(97,324,15);
    floodfill(153,324,15);
   }


//executor
void eface()
   {
   int stangle = 0, endangle = 360;
   int xradius = 12, yradius = 20;
   ellipse(39, 304, stangle, endangle,xradius, yradius);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,6);
   floodfill(39,304,getmaxcolor());
   }

void eeyes()
   {
   ellipse(36, 298,150, 360, 2, 5);
   line(38,298,34,295);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(36,298,getmaxcolor());

   ellipse(43, 298, 180, 30, 2, 5);
   line(41,298,44,296);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,0);
   floodfill(43,298,getmaxcolor());
   //nose
   ellipse(39, 308, 0, 360, 2,1);
   setcolor(getmaxcolor());
   setfillstyle(SOLID_FILL,5);
   floodfill(39,308,getmaxcolor());
   }

void emouth()
   { setcolor(0);
     ellipse(39,317,30,150,7,3);
     ellipse(39,318,30,150,7,3);
     ellipse(39,316,30,150,7,3);
     ellipse(39,315,30,150,7,3);
     ellipse(39,314,30,150,7,3);

     setcolor(15);
    }

void eshirt()
   {
   line(39,326,5,350);
   line(5,350,8,363);
   line(8,363,25,350);
   line(25,350,28,395);
   line(28,395,50,395);
   line(50,395,53,350);
   line(53,350,70,363);
   line(70,363,73,350);
   line(73,350,39,326);

   ellipse(39,329,180,360,5,3);
   setfillstyle(11,6);
   floodfill(39,355,getmaxcolor());

    setfillstyle(SOLID_FILL,0);
   floodfill(39,328,getmaxcolor());
   }

void eshorts()
   {
   ellipse(46,420,180,70,7,30);
   ellipse(32,420,105,20,7,30);

   setfillstyle(6,7);
   floodfill(46,420,getmaxcolor());
   }

void eshoes()
   {
   setfillstyle(1,6);
   //left shoe
   ellipse(28,450,180,360,6,3);
   ellipse(28,455,180,360,6,3);
   line(22,450,22,455);
   line(34,450,34,455);
   floodfill(28,455,getmaxcolor());
   //right shoe
   //
   ellipse(50,450,180,360,6,3);
   ellipse(50,455,180,360,6,3);
   line(44,450,44,455);
   line(56,450,56,455);
   floodfill(50,455,getmaxcolor());
   }

void ehair()
   {
    setcolor(14);
    line(39,283,39,277);
    line(36,284,35,278);
    line(42,283,43,278);
    line(34,287,31,281);
    line(44,287,47,281);
    line(31,289,27,285);
    line(47,289,51,285);
    line(29,292,25,289);
    line(49,292,53,289);
   }

void ehands()
   { setfillstyle(1,6);

    ellipse(4,357,360,0,3,4);
    ellipse(75,357,360,0,3,4);
    floodfill(4,357,getmaxcolor());
    floodfill(74,357,getmaxcolor());
   }

void conversation()
	{
	outtextxy(500,140,"You are here to");
	outtextxy(500,160,"get executed for ");
	outtextxy(500,180,"your crime.");
	delay(3000);
	setcolor(0);
	outtextxy(500,140,"You are here to");
	outtextxy(500,160,"get executed for ");
	outtextxy(500,180,"your crime.");

	setcolor(14);
	outtextxy(500,120,"But I am in a");
	outtextxy(500,140,"good mood today.");
	outtextxy(500,160,"I will give you");
	outtextxy(500,180,"a chance.");
	delay(3000);
	setcolor(0);
	outtextxy(500,120,"But I am in a");
	outtextxy(500,140,"good mood today.");
	outtextxy(500,160,"I will give you");
	outtextxy(500,180,"a chance.");

	setcolor(14);
	outtextxy(500,140,"What do you like");
	outtextxy(500,160,"the most?");
	}

void choice()
	{
	line(234,243,238,243);
	line(236,241,236,245);
	outtextxy(240,240,"Movies");
	outtextxy(240,260,"Football");
	outtextxy(240,280,"Books");
	p=243;
	r=243;
	for(v=0;;v++){
	key=bioskey(0);
	if(key==7181)
		{
		 goto End;
		 }
	else if((key==20480)&&(p!=283))
		{setcolor(0);
		 line(234,p,238,p);
		 line(236,r-2,236,r+2);
		 setcolor(15);
		 line(234,p+20,238,p+20);
		 line(236,r+18,236,r+22);
		 p=p+20;
		 r=r+20;
		 genre++;}
	else if((key==18432)&&(p!=243))
		{setcolor(0);
		 line(234,p,238,p);
		 line(236,r-2,236,r+2);
		 setcolor(15);
		 line(234,p-20,238,p-20);          //replace p with m
		 line(236,r-22,236,r-18);
		 p=p-20;
		 r=r-20;
		 genre--;
		 }
	   }
	End:
	   }
	void game()
	{
		randomize();

		if(genre==1)
		{strcpy(a,movies[random(24)]);}
		else if(genre==2)
		{strcpy(a,sports[random(5)]);}
		else if(genre==3)
		{strcpy(a,books[random(20)]);}
		delay(1000);
		for(l=0;a[l]!='\0';l++);
			x=0;
			for(i=0;i<l;i++)
				{
				settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
				if (a[i]==' ')
				outtextxy(60+i*40,80," ");
				else {
				      m++;
				      outtextxy(60+i*20,80,"_ ");}
				}
			while(k<5)
				{
				setcolor(15);
				m:
				settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
				cin>>c;
				if (strlen(c)>1)
					{
					settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
					setcolor(15);
					outtextxy(220,400,"Invalid guess");
					delay(800);
					setcolor(0);
					outtextxy(220,400,"Invalid guess");
					goto m;}
				strcpy(sto[y],c);
				c[1]='\0';
				sto[y][1]='\0';
				for(q=0;q<y;q++)
				{if(strcmpi(c,sto[q])==0)
				 {
					settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
					setcolor(15);
					outtextxy(220,400,"Already Guessed");
					delay(800);
					setcolor(0);
					outtextxy(220,400,"Already Guessed");
				goto m;}
				}
				y++;
				nf=0;
				for(j=0;j<l;j++)
					{d[0]=a[j];
					 d[1]='\0';
					 if(strcmpi(d,c)==0)
					{
					flag=1;
					setcolor(15);
					outtextxy(61+j*20,78,d);}
					else flag=0;
					nf=nf+flag;
				 }
				 x=x+nf;
				 if(x==m)
				 {settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
				  outtextxy(340,140,"Congrats!");
				  outtextxy(340,160,"You are a free man.");
				  delay(4000);
				  break;
				 }
				 if(nf==0)
					{
				       //;

			     //	 gotoxy(30,24);
				 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
				 setcolor(15);
				 outtextxy(320,360,"Incorrect");
				 k++;
				 delay(800);
				 outtextxy(80,115,"You have   chance(s) left");
				 setcolor(0);
				 if(k==0){
					settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
					setcolor(15);
					outtextxy(250,115,"5");}
				 else if(k==1)
				       {setcolor(0);
					int poly[8];
					  poly[0]=90;
					  poly[1]=245;

					  poly[2]=90;
					  poly[3]=430;

					  poly[4]=160;
					  poly[5]=430;

					  poly[6]=160;
					  poly[7]=245;

					setfillstyle(SOLID_FILL,0);
					fillpoly(4,poly);
					 setcolor(15);
					 face();
					 eyes();
					 mouth();
					 hands();
					 body();
					 shirt();
					 shorts();
					 feet();
					// shoes();
					 hair();
					 podium();
					 r_podium();
					 rope();
   eeyes();
   emouth();
   ehands();
   eshirt();
   eshorts();
   eshoes();
   ehair();

   r_face();
   r_eyes();
   r_mouth();
   r_hands();
   r_shirt();
   r_skirt();
   r_shoes();
   r_legs();
   r_crown();
   r_swag();
					settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
					setcolor(0);
					outtextxy(225,115,"5");
					setcolor(15);
					outtextxy(225,115,"4");}
				 else if(k==2)
				       {
					//setcolor(0);
					 setcolor(0);
					int poly[8];
					  poly[0]=90;
					  poly[1]=245;

					  poly[2]=90;
					  poly[3]=430;

					  poly[4]=160;
					  poly[5]=430;

					  poly[6]=160;
					  poly[7]=245;

					setfillstyle(SOLID_FILL,0);
					fillpoly(4,poly);
					setcolor(15);
					 face();
					 eyes();
					 mouth();
					 hands();
					 vest();
					 body();
					 feet();
					// shirt();
					 shorts();
					// shoes();
					 hair();
					 podium();
  					 r_podium();
					 rope();

   eface();
   eeyes();
   emouth();
   ehands();
   eshirt();
   eshorts();
   eshoes();
   ehair();

   r_face();
   r_eyes();
   r_mouth();
   r_hands();
   r_shirt();
   r_skirt();
   r_shoes();
   r_legs();
   r_crown();
   r_swag();

					settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
					setcolor(0);
					outtextxy(225,115,"4");
					setcolor(15);
					outtextxy(225,115,"3");}
				 else if(k==3)
				       {
					setcolor(0);
					int poly[8];
					  poly[0]=90;
					  poly[1]=245;

					  poly[2]=90;
					  poly[3]=430;

					  poly[4]=160;
					  poly[5]=430;

					  poly[6]=160;
					  poly[7]=245;

					setfillstyle(SOLID_FILL,0);
					fillpoly(4,poly);
					setcolor(15);
					 face();
					 eyes();
					 mouth();
					 hands();
					 vest();
					 body();
				     //	 feet();
					 legs();
					 chaddi();
					// shirt();
					// shorts();
					// shoes();

					 hair();
					 podium();
					 r_podium();					 
rope();

   eface();
   eeyes();
   emouth();
   ehands();
   eshirt();
   eshorts();
   eshoes();
   ehair();

   r_face();
   r_eyes();
   r_mouth();
   r_hands();
   r_shirt();
   r_skirt();
   r_shoes();
   r_legs();
   r_crown();
   r_swag();
					settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
					setcolor(0);
					outtextxy(225,115,"3");
					setcolor(15);
					outtextxy(225,115,"2");}
				 else if(k==4)
				       {
					setcolor(0);
					int poly[8];
					  poly[0]=90;
					  poly[1]=245;

					  poly[2]=90;
					  poly[3]=430;

					  poly[4]=160;
					  poly[5]=430;

					  poly[6]=160;
					  poly[7]=245;

					setfillstyle(SOLID_FILL,0);
					fillpoly(4,poly);
					setcolor(15);
					 face();
					 eyes();
					 mouth();
					 hands();
				      //	 vest();
					 body();
				     //	 feet();
					// shirt();
					// shorts();
					// shoes();
					 legs();
					 chaddi();
					 hair();
					 podium();
  					 r_podium();
					 rope();

   eface();
   eeyes();
   emouth();
   ehands();
   eshirt();
   eshorts();
   eshoes();
   ehair();

   r_face();
   r_eyes();
   r_mouth();
   r_hands();
   r_shirt();
   r_skirt();
   r_shoes();
   r_legs();
   r_crown();
   r_swag();
					settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
					setcolor(0);
					outtextxy(225,115,"2");
					setcolor(15);
					outtextxy(225,115,"1");}
				 else if(k==5)
				       {
					settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
					setcolor(0);
					outtextxy(225,115,"1");
					setcolor(15);
					outtextxy(225,115,"0");}
				// outtextxy(150,450,5-k);
				 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
				 setcolor(0);
				 outtextxy(320,360,"Incorrect");
				 settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
			       //	 outtextxy(,,);
			       }
			       }
    }
void main()
	{
	int gdriver = DETECT, gmode, errorcode;/* initialize graphics and local variables */
	initgraph(&gdriver, &gmode, "C:\\turboc3\\bgi");
   
   main1();

   cleardevice();
   setcolor(15);

   face();
   eyes();
   mouth();
   hands();
   body();
   shirt();
   shorts();
   shoes();
   hair();
   podium();
   r_podium();
   rope();

   eface();
   eeyes();
   emouth();
   ehands();
   eshirt();
   eshorts();
   eshoes();
   ehair();

   r_face();
   r_eyes();
   r_mouth();
   r_hands();
   r_shirt();
   r_skirt();
   r_shoes();
   r_legs();
   r_crown();
   r_swag();

   conversation();
   setcolor(15);
   choice();
	  cleardevice();
   setcolor(15);
   face();
   eyes();
   mouth();
   hands();
   body();
   shirt();
   shorts();
   shoes();
   hair();
   podium();
   r_podium();
   rope();

   eface();
   eeyes();
   emouth();
   ehands();
   eshirt();
   eshorts();
   eshoes();
   ehair();

   r_face();
   r_eyes();
   r_mouth();
   r_hands();
   r_shirt();
   r_skirt();
   r_shoes();
   r_legs();
   r_crown();
   r_swag();
		game();
   settextstyle(DEFAULT_FONT,HORIZ_DIR,6);
   cleardevice();
   setcolor(15);
   outtextxy(120,230,"GAME OVER");
   delay(2000);
	}
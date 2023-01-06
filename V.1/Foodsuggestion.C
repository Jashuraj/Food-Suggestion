#include<stdio.h>
#include<conio.h>
int main()
{
int num,time,tiffen,lunch,dinner;
printf(" #Title    : A Food Suggestion Menu List. \n");
printf(" #Version  : Demo \n");
printf(" #Coded By : Jashwanth Raj J.R\n");
printf(" #Website  : https://jashwanth-raj.github.io/website.github.io/#\n");
printf(" #Note     : This is an open source project it contain bugs.\n\n");
printf("  Usage:--->\n 1.Enter the number according to timing.\n 2.Enter random value till range exist.\n\n");
printf(" Tiffen -->[1]\n Lunch -->[2]\n Dinner -->[3]\n Enter Value Here: ");
scanf("%d",&time);
//
if(time>=1)
{
printf("*******************************************\n");
printf("* Tiffen List [1-13]:");
scanf("%d",&tiffen);
}
switch(tiffen){
case 1:printf("Dosa\n");
break;
case 2:printf("Puliyogara\n");
break;
case 3:printf("chitranna\n");
break;
case 4:printf("Daddojanam\n");
break;
case 5:printf("Dosa 1.Masala Dosa 2.Benne Dosa 3.Neer Dosa\n");
break;
case 6:printf("Roti or Chapata with  chatni\n");
break;
case 7:printf("Semiya Uppma\n");
break;
case 8:printf("Puri\n");
break;
case 9:printf("Raagi Balls\n");
break;
case 10:printf("Egg Rice\n");
break;
case 11:printf("Pongal 1.Rava Pongal 2.Sweet Pongal\n");
break;
case 12:printf("Poha(Avalakki) \n");
break;
case 13:printf("Aloo Paratha\n");
break;
default: printf("Uppma");
break;
}
if(time>=2)
{
printf("*******************************************\n");
printf("\n* Lunch [1-12]:");
scanf("%d",&lunch);
}
//
switch(lunch){
case 1:printf("Rice + pappu \n");
break;
case 2:printf("Rice + Onion Samber \n");
break;
case 3:printf("Rice + Ladyfinger Samber \n");
break;
case 4:printf("Rice + Mulangi Samber\n");
break;
case 5:printf("Dosa\n");
break;
case 6:printf("Pulav + Kachamber \n");
break;
case 7:printf("Biriyani\n");
break;
case 8:printf("Mutton\n");
break;
case 9:printf("Raagi Balls\n");
break;
case 10:printf("Egg Rice\n");
break;
case 11:printf("Fish Biriyaani\n");
break;
case 12:printf("Bendekaayi Gojju\n");
break;
default: printf("Rice + Samber");
break;
}
if(time>=3)
{
printf("*******************************************\n");
printf("\n* Dinner [1-12]:");
scanf("%d",&dinner);
}
//
switch(dinner){
case 1:printf("Rice + pappu \n");
break;
case 2:printf("Rice + Onion Samber \n");
break;
case 3:printf("Rice + Ladyfinger Samber \n");
break;
case 4:printf("Rice + Mulangi Samber\n");
break;
case 5:printf("Dosa\n");
break;
case 6:printf("Pulav + Kachamber \n");
break;
case 7:printf("Biriyani\n");
break;
case 8:printf("Mutton\n");
break;
case 9:printf("Raagi Balls\n");
break;
case 10:printf("Egg Rice\n");
break;
case 11:printf("Fish Biriyaani\n");
break;
case 12:printf("Bendekaayi Gojju\n");
break;
default: printf("Rice + Samber");
}
printf("*******************************************\n");
printf("Thanks For Using");
getch();
return 0;
}
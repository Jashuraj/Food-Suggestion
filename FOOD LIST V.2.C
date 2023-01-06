//Code Written Jashwanth Raj
#include<stdio.h>
#include<conio.h>
int main()
{
int num,time,tiffen,lunch,dinner;
printf("###########################  PROTOTYPE PROGRAM ###########################\n\n");
printf(" #Title    : A Food Suggestion Menu List. \n");
printf(" #Version  : Demo \n");
printf(" #Coded By : Jashwanth Raj J.R\n");
printf(" #Code Link: https://github.com/Jashraj/Food-Suggestion \n");
printf(" #My Web   : https://jashwanth-raj.github.io/website.github.io/#\n");
printf(" #Note     : This is an open source project it contain bugs.\n\n");
printf("#########################  SOUTH INDIAN DISH MENU  #########################\n\n");
printf("<---:Usage:--->\n 1.Enter the number according to timing.\n 2.Enter random value till range exist.\n\n");
printf(" Tiffen -->[1]\n Lunch -->[2]\n Dinner -->[3]\n About Me -->[4]\n\n Enter Value Here: ");
scanf("%d",&time);
switch(time)
{
case 1 : printf("\n*******************************************\n");
printf("* Tiffen List [1-23]:");
scanf("%d",&tiffen);
switch(tiffen)
{
case 1:printf("Idli+Sambar+vada\n");
break;
case 2:printf("Pongal+Chatni+vada\n");
break;
case 3:printf("Bisi Bele Baath\n");
break;
case 4:printf("Daddojanam\n");
break;
case 5:printf("Uppma\n");
break;
case 6:printf("Paalav\n");
break;
case 7:printf("Menthe Baath\n");
break;
case 8:printf("Dosa \n1.Masala Dosa\n 2.Benne Dosa\n 3.Neer Dosa\n 4.Set Dosa\n 5.Neer Dosa\n 6.Benne Dosa\n 7.Thuppada Dosa\n 8.Onion Dosa\n 9.Egg Dosa\n 10.Goobi Dosa\n");
break;
case 9:printf("Vaangi Baath\n");
break;
case 10:printf("Lemon Rice(Chittranna)\n");
break;
case 11:printf("Pulihoogra\n");
break;
case 12:printf("Poha(Avalakki)\n");
break;
case 13:printf("Vaada Paav\n");
break;
case 14:printf("Puri+Saagu\n");
break;
case 15:printf("Chapathi\n");
break;
case 16:printf("Rooti\n");
break;
case 17:printf("Ugaarne Mandakki\n");
break;
case 18:printf("Gee Rice\n");
break;
case 19:printf("Mashroom Paalav\n");
break;
case 20:printf("Pudinaa Baath\n");
break;
case 21:printf("Sweet Pongal\n");
break;
case 22:printf("Syawige Uppma\n");
break;
case 23:printf("Aloo Parathaa\n");
break;
default: printf("Invalid choice");
break;
}
break;
//Case 2 Starts Here (Lunch)
case 2 : printf("\n*******************************************\n");
printf("\n* Lunch [1-12]:");
scanf("%d",&lunch);
switch(lunch){
case 1:printf("Raagi Balls(Mudde) \n");
break;
case 2:printf("Rice \n+ Onion Samber\n+ Saambar\n + Rasam\n + Majjigee \n +Pappu\n +Ladyfinger(Bendekayi) Sambar\n");
break;
case 3:printf("Egg Rice\n");
break;
case 4:printf("Gee Rice\n");
break;
case 5:printf("Mashroom Palaav\n");
break;
case 6:printf("Zira Rice\n");
break;
case 7:printf("Biriyani\n +Donne Biriyani\n +Egg Biriyani\n+Mutton Biriyani +Mushroom Biriyani\n+Hydrabad Biriyani\n +Dumm Biriyani\n+Matka Biriyani\n+Bamboo Biriyani\n");
break;
case 8:printf("Goobi Rice\n");
break;
case 9:printf("Rumaal Rooti\n");
break;
case 10:printf("Pudinaa Baath\n");
break;
case 11:printf("Chapaathi\n");
break;
case 12:printf("Gee Rice\n");
break;
default: printf("Invalid choice");
break;
}
break;
//Case 3 Starts Here (Dinner)
case 3 : printf("\n*******************************************\n");
printf("\n* Dinner [1-21]:");
scanf("%d",&dinner);
switch(dinner){
case 1:printf("Paroota \n");
break;
case 2:printf("Raagi Balls \n");
break;
case 3:printf("Raagi Rooti \n");
break;
case 4:printf("Aakki Rooti\n");
break;
case 5:printf("Rumaal Rooti\n");
break;
case 6:printf("Goobi Rice \n");
break;
case 7:printf("Mushroom rice\n");
break;
case 8:printf("Dosa \n1.Masala Dosa\n 2.Benne Dosa\n 3.Neer Dosa\n 4.Set Dosa\n 5.Neer Dosa\n 6.Benne Dosa\n 7.Thuppada Dosa\n 8.Onion Dosa\n 9.Egg Dosa\n 10.Goobi Dosa\n");
break;
case 9:printf("Vaangi Baath\n");
break;
case 10:printf("Lemon Rice(Chittranna)\n");
break;
case 11:printf("Pulihoogra\n");
break;
case 12:printf("Poha(Avalakki)\n");
break;
case 13:printf("Vaada Paav\n");
break;
case 14:printf("Puri+Saagu\n");
break;
case 15:printf("Chapathi\n");
break;
case 16:printf("Rooti\n");
break;
case 17:printf("Ugaarne Mandakki\n");
break;
case 18:printf("Gee Rice\n");
break;
case 19:printf("Mashroom Paalav\n");
break;
case 20:printf("Pudinaa Baath\n");
break;
case 21:printf("Aloo Parathaa\n");
break;
default:printf("Invalid choice");
}
break;
default:printf("Invalid choice");
//Case 4 Starts Here:
case 4 : printf("\n*******************************************\n");
printf("\n Hello Guy's My Name Is Jashwanth Raj.\n + Currently Perceiving My Bachelore Of Computer Application (BCA) At Government First Grade College,Chikkabalapura.\n + This Is My First Project In C Language.\n + I Created This Mini Time-Pass Project During First SEM Of My College.\n + This Program Is Specially Designed For Mother's.\n ");
}
printf("\n********************************************\n");
printf("             Thanks For Using\n");
printf("********************************************\n");
getch();
return 0;
}
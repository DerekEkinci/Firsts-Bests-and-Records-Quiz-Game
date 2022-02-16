#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int
main ()
{ printf("-------------------------------------------\n");
  printf("*******************************************\n");
  printf("-------------------------------------------\n");
  printf("|*|Welcome to Firsts, Bests and Records |*|\n");
  printf("-------------------------------------------\n");
  printf("*******************************************\n");
  printf("-------------------------------------------\n");
  printf ("Press enter to start");
  int point;
  char cd;
  cd = getchar ();
  if ((int) cd == 10)
    {
      printf ("Please Prees ; A:Geography B:Sport C:Cinema E:Science\n");
    }  
  char pr;
  pr = getch();
  switch(pr){
  	case 65:
  		system("cls");
      printf ("Welcome to Geography Test\n");
      printf("Question 1 : World's tallest waterfall ?\n A: Iguazu Falls B:Yosemite Falls C:Niagara Falls D:Angel Falls \n");
	  char ans;  
   ans = getch();
	  switch(ans){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
}   system("pause");
    system("cls");
	   printf("\nQuestion 2 : World's largest river ?\n A: AMAZON RIVER B:NILE RIVER C:MISSISSIPPI RIVER D:NIGER RIVER\n");
	  char ans2;  
   ans2 = getch();
	  switch(ans2){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Correct Answer\n");
	  		point+=5;
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  system("pause");
	  system("cls");
      printf("\n Question 3 : The highest mountain in the world ?\n A:EVEREST MOUNTAIN B:KILIMANJARO MOUNTAIN C:K2 MOUNTAIN D:KANCHENJUNGA MOUNTAIN\n");
	  char ans3;  
   ans3 = getch();
	  switch(ans3){
	  	case 65:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  system("pause");
	  system("cls");
	  printf("\n Question 4 : World's largest desert? \n A:Great Victoria  B:Patagonian C: Sahara D:Antarctic \n");
	  char ans4;  
   ans4 = getch();
	  switch(ans4){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  system("pause");
	  system("cls");
	  printf("\n Question 5 :World's highest volcano ? \n A: San Jose  B: Nevados Ojos del Salado C:Llullaillaco  D: El Condor \n");
	  char ans5;  
   ans5 = getch();
	  switch(ans5){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  system("pause");
	  system("cls");
	  printf("\n Question 6 : World's largest cave? \n A: Lechuguilla Cave B: Optymistychna Cave C:Mammoth Cave D:Jewel Cave  \n");
	  char ans6;  
   ans6 = getch();
	  switch(ans6){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  } 
	  system("pause");
	  system("cls");
	  printf("\n Question 7 : World's largest lake? \n A: Huron  B: Victoria C: Caspian Sea D: Superior\n");
	  char ans7;  
   ans7 = getch();
	  switch(ans7){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  system("pause");
	  system("cls");
	  printf("\n Question 8 : World's largest island? \n A: Madagascar B: Borneo  C: New Guinea  D: Greenland\n");
	  char ans8;  
   ans8 = getch();
	  switch(ans8){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  system("pause");
	  system("cls");
	  printf("\n Question 9 : ? \n A: Al'Aziziyah  B: Riyad C: Kahira  D: Death Valley\n");
	  char ans9;  
   ans9 = getch();
	  switch(ans9){
	  	case 65:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  system("pause");
	  system("cls");
	  printf("\n Question 10 : Coldest place in the world? \n A: Moscow  B: Rostock C : Yakutsk D: Vostock II\n");
	  char ans10;  
   ans10 = getch();
	  switch(ans10){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  break;
	  case 66:
	    printf ("Welcome to Sport Test\n");
	    printf("\n Question 1 : Where were the first modern Olympics held? ? \n A: Moscow  B: Stockholm C : Oslo D: Atina\n");
	  char ansp;  
   ansp = getch();
	  switch(ansp){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  system("pause");
	  system("cls");
	 printf("\n Question 2 : What is the name of the first football team? \n A: Sheffield Football Club  B: Castlemaine Football Club C : Cambridge University Association Football Club D: Melbourne Football Club\n");
	  char ansp2;  
   ansp2 = getch();
	  switch(ansp2){
	  	case 65:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  }system("pause");
	  system("cls");
	 printf("\n Question 3 : NBA founding date? \n A: October 5 1956  B: November 3 1911 C : March 15 1915 D: June 6 1946\n");
	  char ansp3;  
   ansp3 = getch();
	  switch(ansp3){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  system("pause");
	  system("cls");
	 printf("\n Question 4 : Who is the top scorer in NBA history? \n A: Kareem Abdul-Jabbar  B: Ray Allen C : Lebron James D: Stephen Curry\n");
	  char ansp4;  
   ansp4 = getch();
	  switch(ansp4){
	  	case 65:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 66:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 67:
	  		printf("Correct Answer\n");
	  		point+=10;
	  		printf("Your Point : %d\n",point);
	  		break;
	  	case 68:
	  		printf("Wrong Answer\n");
	  		printf("Your Point : %d\n",point);
	  		break;
	  }
	  break;
	  case 67:
	  	printf ("Welcome to Cinema Test\n");
	  	break;
	  case 68:
	  	printf("Welcome to Science Test\n");
	  	break;
	  }
	  
	   return 0;
    }
    
     
 

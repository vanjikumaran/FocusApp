/*============================================================
Program 		:- Sales system for Tailor shop (focus.c)
programmers		:- S.vanjikumaran, Pubudu
Tested / Compiled	:- Turbo C++ 3.0
=============================================================*/


/* Header Files */


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


/* Gobal Variables*/

char user_name[20];							/* user name identifier*/
char n_outfit[3][10];							/* array > detail of outfits*/
char n_size[3][15];							/* array > detail of  size*/
char n_type[3][10];							/* array > detail of  type*/
char n_extra[4][15];							/* array > detail of  extras*/
char n_paid_mode[2][6];							/* array > detail of  paid mode*/

char visa,acc,shoes,belt,glass;						/*Indicators to visa card, ACCESSORIES(acc), shoes,belt,glass*/

int p=5,q=5,r=5,no_cloth,l=0,m=0,n=0,v_c;				/*Indicators type(p),outfit(q),size(r),no.of outfit,shoes,belt,glass,visa or cash*/


float prize,extra,total,grant_total,amount,cash,blance,discount;	/*accounts identifier*/





/* Function Prototype declaration */


void main_form();
void cloth_type();
void access_selection();
void account();
void bill();




/* Strcuture */


/* price  strcuture*/
struct csize{

float c_type[3][3];


}csize;







void main()

{      
	char password_1[10];
        char password_2[10]="kothume"; /*password declaration */
	int a=0;
	char ab;
	do
	   {
		clrscr();
		printf("\n\n\n");
		textcolor(MAGENTA);
		    for(a=0;a<80;a++)
			       cprintf("#");
		printf("\n\n\n\n");



											/*Printing title*/
				
		      textcolor(LIGHTBLUE);
		      printf("\t\t\t\t\t\t\t\t");
		      cprintf(" TM\r\n");
		      printf("\t\t\t");
		      cprintf("*****    *      *****  **   **     *****\r\n");
		      printf("\t\t\t");
		      cprintf("**     ** **   ***     **   **    ***\r\n");
		      printf("\t\t\t");
		      cprintf("****  *** ***  **      **   **     **\r\n");
		      printf("\t\t\t");
		      cprintf("*      ** **   ***     **   **     ***\r\n");
		      printf("\t\t\t");
		      cprintf("*        *      *****    ***    *****\r\n");
		      printf("\n\n\n\t\t\t\t");
		      textcolor(GREEN);
		      cprintf("     FOCUS (Pvt) Ltd\r\n\n\n");
	       textcolor(MAGENTA);
		    for(a=0;a<80;a++)
			       cprintf("#");
	      printf("\n\n\n");
	      printf("\t\t       ");
	      textcolor(YELLOW);
		    for(a=0;a<40;a++)
			       cprintf("#");
	     printf("\r\n\n\t\t\t  ");
			textcolor(LIGHTRED);
	     cprintf("          FOCUS SALES SYSTEM \r\n\n");
	     printf("\t\t         ");
	     textcolor(YELLOW);
		    for(a=0;a<40;a++)
			       cprintf("#");
	 
	 textcolor(BROWN);
	 cprintf("\r\n\n");
	 cprintf("\n\n                          Enter Username       : ");
	 scanf("%s",user_name);
	 cprintf("\n\n                          \aEnter the passward   : ");
	 scanf("%s",password_1);
	 printf("\n\n\t\t       ");

	if(strcmp(password_1,password_2)==0)						/*Check the password for valid*/
	   {
		main_form();								/*Calling the main_form function*/

	    }
	else
	   {
		textcolor(YELLOW);
		for(a=0;a<40;a++)
			cprintf("#");
		printf("\n\n\t\t\t  ");
		 textcolor(RED+BLINK);
			cprintf("\aYour Access Deined %s\r",user_name);			/*Error Message*/

		printf("\n\n\t\t       ");
		textcolor(YELLOW);
		 for(a=0;a<40;a++)
			 cprintf("#");
		printf("\n\n\t\t\t    ");
		textcolor(CYAN);
			cprintf("Do you want Try Again [ Y/N ] :"); 			/*Geting request from the user to Continue the Program*/
		fflush(stdin);
		ab=getch();
	  }

	if (ab=='N'||ab=='n')
	  {
	    exit(0);									/*Quitting from System*/
	  }
	}while (ab=='y'||ab=='Y');
	getch();
}





/*main menu*/

void main_form()
{

	int x=0;
	int user_r;
	do
	{
	 clrscr();
	 printf("\n\n");
	 textcolor(GREEN);
	 cprintf("\n\n                             FOCUS TEXTILES (Pvt) Ltd.\r\n\n");
	 cprintf("                       # 388, Union Place, Colombo-02, Srilanka\r\n\n\n");
	 textcolor(CYAN);
	 for(x=0;x<80;x++)
	 cprintf("%");
	 printf("\r\n\n");
	 textcolor(LIGHTBLUE);
	 cprintf("                               STAFF : %s\n\n\n",user_name);
	 printf("\r");
	 textcolor(CYAN);
	 for(x=0;x<80;x++)
	 cprintf("%");
	 printf("\r\n");
	 textcolor(BROWN);
	 cprintf("\n\n                              ***** Main Menu *****\r\n\n");
	 cprintf("                              &&&&&&&&&&&&&&&&&&&&&\r\n\n\n");
	 cprintf("                              [1] NEW ORDER\r\n\n");
	 cprintf("                              [2] LAST ORDER INVOICE\r\n\n");
	 cprintf("                              [3] EXIT\r\n\n\n\n");
	 textcolor(CYAN);
	 for(x=0;x<80;x++)
	  cprintf("%");
	 printf("\n\n\n\t\t\t     Enter Your Request:- ");
	 scanf("%d",&user_r);/*Geting a request form user*/
	 
	
	switch(user_r)
	       {
		 case 1:
		 	{		l=0;
				m=0;
				n=0;
				extra=0;
				total=0;
				grant_total=0;
				no_cloth=0;
				amount=0;
				cash=0;
				discount=0;
				blance=0;
			



				cloth_type();		/*Calling the cloth_type function*/
				break;
			}
		
		
		case 2:
			{
				bill();			/*Calling the bill function*/
				break;
			}

		case 3:
			{
				exit(0);		/*Quitting from System*/
				break;
			}



		default:
			{
				printf("\n\n\n\t\t\t Please Enter A Vaild Key\n\n");
			}
		  
		}


	}while(user_r!=0);
	getch();
}













/* Selecting type of cloth,type of out fit,size of out fit */

void cloth_type()
{

int a;
char size;
int z;
char type,outfit;



/*	TYPES OF CLOTH > Graphics 	*/


clrscr();

printf("\n");
textcolor(MAGENTA);
for(a=0;a<80;a++)
cprintf("%");
printf("\n\n");
textcolor(BROWN);
cprintf("                                 TYPES OF CLOTH\r\n\n");


textcolor(LIGHTCYAN);
cprintf("   $$$$$$$$$$$$$$");
textcolor(GREEN);
cprintf("             **************");
textcolor(LIGHTMAGENTA);
cprintf("             ~~~~~~~~~~~~~~~\r\n");
textcolor(LIGHTCYAN);
cprintf("   $$$$$$$$$$$$$$");
textcolor(GREEN);
cprintf("             **************");
textcolor(LIGHTMAGENTA);
cprintf("             ~~~~~~~~~~~~~~~\r\n");
textcolor(LIGHTCYAN);
cprintf("   $$");
textcolor(WHITE+BLINK);
cprintf(" RAW SILK ");
textcolor(LIGHTCYAN);
cprintf("$$");
textcolor(GREEN);
cprintf("             ***");
textcolor(WHITE+BLINK);
cprintf(" COTTON ");
textcolor(GREEN);
cprintf("***");
textcolor(LIGHTMAGENTA);
cprintf("             ~~");
textcolor(WHITE+BLINK);
cprintf(" SYNTHETIC ");
textcolor(LIGHTMAGENTA);
cprintf("~~\r\n");
textcolor(LIGHTCYAN);
cprintf("   $$$$$$$$$$$$$$");
textcolor(GREEN);
cprintf("             **************");
textcolor(LIGHTMAGENTA);
cprintf("             ~~~~~~~~~~~~~~~\r\n");
textcolor(LIGHTCYAN);
cprintf("   $$$$$$$$$$$$$$");
textcolor(GREEN);
cprintf("             **************");
textcolor(LIGHTMAGENTA);
cprintf("             ~~~~~~~~~~~~~~~\r\n");
textcolor(LIGHTCYAN);
cprintf("   $$");
textcolor(WHITE+BLINK);
cprintf(" RAW SILK ");
textcolor(LIGHTCYAN);
cprintf("$$");
textcolor(GREEN);
cprintf("             ***");
textcolor(WHITE+BLINK);
cprintf(" COTTON ");
textcolor(GREEN);
cprintf("***");
textcolor(LIGHTMAGENTA);
cprintf("             ~~");
textcolor(WHITE+BLINK);
cprintf(" SYNTHETIC ");
textcolor(LIGHTMAGENTA);
cprintf("~~\r\n");
textcolor(LIGHTCYAN);
cprintf("   $$$$$$$$$$$$$$");
textcolor(GREEN);
cprintf("             **************");
textcolor(LIGHTMAGENTA);
cprintf("             ~~~~~~~~~~~~~~~\r\n");
textcolor(LIGHTCYAN);
cprintf("   $$$$$$$$$$$$$$");
textcolor(GREEN);
cprintf("             **************");
textcolor(LIGHTMAGENTA);
cprintf("             ~~~~~~~~~~~~~~~\r\n");


printf("\n\n\n");

printf("    RAW SILK [R]                COTTON [C]                SYNTHETIC [S]");

printf("\n\n\n");
textcolor(MAGENTA);
for(a=0;a<80;a++)
cprintf("%");
printf("\n\n\n\n");
textcolor(BROWN);
cprintf("                   WHAT IS THE TYPE OF CLOTH REQUIRE ( R / C / S )?\r\n");

type=getch();



/* Assign value to TYPE OF CLOTH(p) Indicators*/



	if(type=='R' || type=='r')
		p=0;
	else if(type=='c' || type=='C')
		p=1;
	else if (type=='s' || type=='S')
		p=2;
	else{
		textcolor(RED+BLINK);
		cprintf("\n                      INVALID COMMAND FOR TYPE\n\r");
		getch();
		main_form();											/*Return to main_form*/
	    }





/*	TYPES OF OUTFIT > Graphics 	*/


clrscr();
printf("\n");
textcolor(MAGENTA);
for(a=0;a<80;a++)
cprintf("%");
printf("\n\n");
textcolor(BROWN);
cprintf("                                 TYPES OF OUTFIT\r\n\n");

textcolor(WHITE);
cprintf("         ____\n\r");
cprintf("  ======");
textcolor(CYAN);
cprintf("(    )");
textcolor(WHITE);
cprintf("======");
textcolor(LIGHTBLUE);
cprintf("                 ====");
textcolor(RED);
cprintf("(    )");
textcolor(LIGHTBLUE);
cprintf("====");
textcolor(BROWN);
cprintf("                ==\n\r");//1st line
textcolor(WHITE);
cprintf("==========");
textcolor(CYAN);
cprintf("::");
textcolor(WHITE);
cprintf("==========");
textcolor(LIGHTBLUE);
cprintf("              ================");
textcolor(BROWN);
cprintf("               ==\n\r");//2nd line
textcolor(WHITE);
cprintf("======================");
textcolor(LIGHTBLUE);
cprintf("             ==================");
textcolor(BROWN);
cprintf("              ==\n\r");//3rd line
textcolor(WHITE);
cprintf("===  =====");
textcolor(CYAN);
cprintf("::");
textcolor(WHITE);
cprintf("=====  ===");
textcolor(LIGHTBLUE);
cprintf("            =======");
textcolor(RED+BLINK);
cprintf("adidas");
textcolor(LIGHTBLUE);
cprintf("=======");
textcolor(BROWN);
cprintf("             ==\n\r");//4th line
textcolor(WHITE);
cprintf("===  ============  ===");
textcolor(LIGHTBLUE);
cprintf("            ==== ========== ====");
textcolor(GREEN);
cprintf("            _++_\n\r");//5th line
textcolor(WHITE);
cprintf("===  =====");
textcolor(CYAN);
cprintf("::");
textcolor(WHITE);
cprintf("=====  ===");
textcolor(LIGHTBLUE);
cprintf("                 ==========");
textcolor(BROWN);
cprintf("                (~~~~)\n\r");//6th line
textcolor(WHITE);
cprintf("===  ============  ===");
textcolor(LIGHTBLUE);
cprintf("                 ==========");
textcolor(BROWN);
cprintf("                (~~~~)\n\r");//7th line
textcolor(WHITE);
cprintf("===  =====");
textcolor(CYAN);
cprintf("::");
textcolor(WHITE);
cprintf("=====  ===");
textcolor(LIGHTBLUE);
cprintf("                 ==========");
textcolor(BROWN);
cprintf("                (");
textcolor(BLUE+BLINK);
cprintf("MRF");
textcolor(BROWN);
cprintf("~)\n\r");//8th line
textcolor(WHITE);
cprintf("===  ============  ===");
textcolor(LIGHTBLUE);
cprintf("                 ==========");
textcolor(BROWN);
cprintf("                (~~~~)\n\r");//9th line
textcolor(WHITE);
cprintf("=");
textcolor(CYAN);
cprintf("+");
textcolor(WHITE);
cprintf("=  =====");
textcolor(CYAN);
cprintf("::");
textcolor(WHITE);
cprintf("=====  =");
textcolor(CYAN);
cprintf("+");
textcolor(WHITE);
cprintf("=");
textcolor(LIGHTBLUE);
cprintf("                 ==========");
textcolor(BROWN);
cprintf("                (~~~~)   ");
textcolor(RED+BLINK);
cprintf("==\n\r");//10th line
textcolor(WHITE);
cprintf("---  ============  ---");
textcolor(LIGHTBLUE);
cprintf("                 ==========");
textcolor(BROWN);
cprintf("                (~~~~)");
textcolor(RED+BLINK);
cprintf("  =~~=\n\r");
textcolor(WHITE);
cprintf("     =====");
textcolor(CYAN);
cprintf("::");
textcolor(WHITE);
cprintf("=====");
textcolor(LIGHTBLUE);
cprintf("                      ==========");
textcolor(BROWN);
cprintf("                (~~~~)");
textcolor(RED+BLINK);
cprintf("  =~~=\n\r");
textcolor(WHITE);
cprintf("     ============");
textcolor(LIGHTBLUE);
cprintf("                      ==========");
textcolor(BROWN);
cprintf("                 ~~~~");
textcolor(RED+BLINK);
cprintf("    ==\n\r");
printf("\n\n\n");

printf("      FORMAL [F]                       CASUAL [C]               SPORTS [S]");

printf("\n\n\n");
textcolor(MAGENTA);
for(a=0;a<80;a++)
cprintf("%");
printf("\n\n\n\n");
textcolor(BROWN);
cprintf("                   WHAT IS THE OUTFIT YOU REQUIRE ( F / C / S )?\r\n");
fflush(stdin);
outfit=getch();



/* Assign value to TYPE OF OUTFIT(q) Indicators*/



	if(outfit=='F' || outfit=='f')
		q=0;
	else if(outfit=='C' || outfit=='c')
		q=1;
	else if (outfit=='S' || outfit=='s')
		q=2;

	else{
		textcolor(RED);
		cprintf("\n                      INVALID COMMAND FOR TYPE\n\r");
		getch();
		main_form();											/*Return to main_form*/
	    }





/*	SIZE OF OUTFIT > Graphics 	*/

clrscr();
printf("\n");
textcolor(MAGENTA);
for(a=0;a<80;a++)
cprintf("%");
printf("\n\n");
textcolor(BROWN);
cprintf("                                 SIZE OF OUTFIT\r\n\n");

textcolor(CYAN);
cprintf("          ########\r\n");
cprintf("           ^^^^^^                     iiiiii \r\n");

textcolor(BROWN);
cprintf("          |(*)(*)|");

textcolor(CYAN);
cprintf("                    ++++++\r\n");

textcolor(BROWN);
cprintf("          |  <>  |                    |()()| \r\n");
textcolor(BROWN);
cprintf("          (");

textcolor(RED+BLINK);
cprintf("  ==");

textcolor(BROWN);
cprintf("  )");


textcolor(BROWN);
cprintf("                    (");

textcolor(RED+BLINK);
cprintf(" ~~");

textcolor(BROWN);
cprintf(" )");

textcolor(CYAN);
cprintf("                    ***\r\n");
textcolor(WHITE);
cprintf("           ______                      ____");
textcolor(BROWN);
cprintf("                    (. .)\r\n");
textcolor(WHITE);
cprintf("       ==============");
textcolor(LIGHTBLUE);
cprintf("               ==========");
textcolor(BROWN);
cprintf("                 (");
textcolor(RED+BLINK);
cprintf(" @");
textcolor(BROWN);
cprintf(" )\r\n");

textcolor(WHITE);
cprintf("      ================");

textcolor(LIGHTBLUE);
cprintf("             ============");

textcolor(GREEN);
cprintf("              ===");

textcolor(WHITE);
cprintf("_~_");

textcolor(GREEN);
cprintf("===\r\n");

textcolor(WHITE);
cprintf("      === ======== ===");

textcolor(LIGHTBLUE);
cprintf("             ========= ==");

textcolor(GREEN);
cprintf("             ===========\r\n");

textcolor(WHITE);
cprintf("      === ======== ===");

textcolor(LIGHTBLUE);
cprintf("             == ====== ==");

textcolor(GREEN);
cprintf("             == ===== ==\r\n");

textcolor(WHITE);
cprintf("      === ======== ===");

textcolor(LIGHTBLUE);
cprintf("             == ====== ==");

textcolor(GREEN);
cprintf("             == ===== ==\r\n");

textcolor(WHITE);
cprintf("      === ======== ===");

textcolor(LIGHTBLUE);
cprintf("             == ====== ==");

textcolor(GREEN);
cprintf("                =====\r\n");

textcolor(WHITE);
cprintf("      === ======== ===");

textcolor(LIGHTBLUE);
cprintf("             == ====== ==");

textcolor(GREEN);
cprintf("                =====\r\n");

textcolor(WHITE);
cprintf("      === ======== ===");

textcolor(LIGHTBLUE);
cprintf("             == ====== ==");

textcolor(GREEN);
cprintf("                =====\r\n");


printf("\n\n\n");
textcolor(RED);
cprintf("          ADULT[A]               ADULT MEDIUM [M]             CHILD [C]\r\n");

printf("\n\n\n");
textcolor(MAGENTA);
for(a=0;a<80;a++)
cprintf("%");
printf("\n\n\n\n");
textcolor(BROWN);
cprintf("              WHAT IS THE SIZE OF OUTFIT REQUIRE ( A / M / C ) ?\r\n");
fflush(stdin);
size=getch();

/* Assign value to SIZE OF OUTFIT(r) Indicators*/

	if(size=='A' || size=='a')
		r=0;
	else if(size=='M' || size=='m')
		r=1;
	else if(size=='C' || size=='c')
		r=2;

	else{
		textcolor(RED);
		cprintf("\n                      INVALID COMMAND FOR TYPE\n\r");
		getch();
	    }




/*lable la*/

la:

	clrscr();
	no_cloth=0;
	printf("\n\n\n");
	textcolor(MAGENTA);
	for(a=0;a<80;a++)
	cprintf("%");
	printf("\n\n\n\n");
	textcolor(GREEN);
	cprintf("        HOW MANY OUTFITS OF THE SPECIFIED TYPE DOES CUSTOMER REQUIRE \r\n");
	printf("\n                                  ");
	scanf("%d",&no_cloth);

		if(no_cloth >0 && no_cloth<=5)										/* check no.of cloth input valid */
			access_selection();			/*Calling the access_selection function*/
		else 
		{	textcolor(RED+BLINK);
			cprintf("\n                      Required cloths are not in stock\n\r");
			getch();
			goto la;											/*Return to lable la*/
		}


}





//access_selection

void access_selection()

{

int a;

clrscr();
printf("\n\n\n");
textcolor(MAGENTA);
for(a=0;a<80;a++)
cprintf("%");
printf("\n\n\n");
textcolor(LIGHTMAGENTA);
cprintf("                           DOES CUSTOMER NEED ANY ACCESSORIES ? ");
printf("\n\n\n");
textcolor(MAGENTA);
for(a=0;a<80;a++)
cprintf("%");
printf("\n\n\n\n");
textcolor(BROWN);
cprintf("                                  [Y]  YES\r\n");
cprintf("                                  [N]  NO\r\n");
fflush(stdin);
acc=getch();



	if(acc=='y' || acc=='Y')						/* check acc input valid */

	{
 	
		/*	Shose > Graphics 	*/

			clrscr();
			printf("\n");
			textcolor(MAGENTA);
			for(a=0;a<80;a++)
			cprintf("%");
			printf("\n\n\n");
			textcolor(BROWN);
			cprintf("                                    SHOES\r\n");
			printf("\n\n\n\n");
			textcolor(WHITE);
			cprintf("                               *             *\n\r");
			cprintf("                             (**)           (**)\n\r");
			cprintf("                            ()()()         ()()()\n\r");
			cprintf("                          ()");
			textcolor(RED+BLINK);
			cprintf(" NIKE");
			textcolor(WHITE);
			cprintf(" ()     ()");
			textcolor(RED+BLINK);
			cprintf(" NIKE");
			textcolor(WHITE);
			cprintf(" ()\n\r");
			cprintf("                         ()()()()()()   ()()()()()()\n\r");
			cprintf("                         ()()()()()()   ()()()()()()\n\r");
			cprintf("                          ()");
			textcolor(LIGHTBLUE+BLINK);
			cprintf("()");
			textcolor(WHITE);
			cprintf("()");
			textcolor(LIGHTBLUE+BLINK);
			cprintf("()");
			textcolor(WHITE);
			cprintf("()");
			cprintf("     ()");
			textcolor(LIGHTBLUE+BLINK);
			cprintf("()");
			textcolor(WHITE);
			cprintf("()");
			textcolor(LIGHTBLUE+BLINK);
			cprintf("()");
			textcolor(WHITE);
			cprintf("()\n\r");
			textcolor(LIGHTBLUE+BLINK);
			cprintf("                            ()");
			textcolor(WHITE);
			cprintf("()");
			textcolor(LIGHTBLUE+BLINK);
			cprintf("()");
			cprintf("         ()");
			textcolor(WHITE);
			cprintf("()");
			textcolor(LIGHTBLUE+BLINK);
			cprintf("()\n\r");
			textcolor(LIGHTBLUE+BLINK);
			cprintf("                            ()");
			textcolor(WHITE);
			cprintf("()");
			textcolor(LIGHTBLUE+BLINK);
			cprintf("()");
			cprintf("         ()");
			textcolor(WHITE);
			cprintf("()");
			textcolor(LIGHTBLUE+BLINK);
			cprintf("()\n\r");
			textcolor(WHITE);
			cprintf("                            ||||||         ||||||\n\r");
			cprintf("                           (      )       (      )\n\r");
			cprintf("                          (        )     (        )\n\r");
			cprintf("                           (      )       (      )\n\r");
			cprintf("                            **  **         **  **\n\r");
			cprintf("                             ****           ****");
			printf("\n\n");
			textcolor(LIGHTRED+BLINK);
			cprintf("                                     3000/=");
			printf("\n\n");
			textcolor(LIGHTMAGENTA);
			cprintf("                               DOES CUSTOMER NEED SHOES ? ");//if yes how many
			printf("\n\n\n");
			textcolor(MAGENTA);
			for(a=0;a<80;a++)
			cprintf("%");
			printf("\n\n\n\n");
			textcolor(BROWN);
			cprintf("                                  [Y]  YES\r\n");
			cprintf("                                  [N]  NO\r\n");
			fflush(stdin);
			shoes=getch();
		









/*	Belt > Graphics 	*/

			clrscr();
			printf("\n");
			textcolor(MAGENTA);
			for(a=0;a<80;a++)
			cprintf("%");
			printf("\n\n\n");
			textcolor(BROWN);
			cprintf("                                     BELT\r\n");
			printf("\n\n\n\n");
			textcolor(BLUE);
			cprintf("                                      ==                   \n\r");
			cprintf("                                    ==");
			textcolor(RED+BLINK);
			cprintf("@@");
			textcolor(BLUE);
			cprintf("==                 \n\r");
			cprintf("                 8888888888888");
			textcolor(WHITE);
			cprintf("()()");
			textcolor(BLUE);
			cprintf("===");
			textcolor(RED+BLINK);
			cprintf("@");
			textcolor(YELLOW);
			cprintf("::");
			textcolor(RED+BLINK);
			cprintf("@");
			textcolor(BLUE);
			cprintf("===");
			textcolor(WHITE);
			cprintf("()()");
			textcolor(BLUE);
			cprintf("8888888888888\n\r");
			cprintf("                 8888888888888");
			textcolor(WHITE);
			cprintf("()()");
			textcolor(BLUE);
			cprintf("===");
			textcolor(RED+BLINK);
			cprintf("@");
			textcolor(YELLOW);
			cprintf("::");
			textcolor(RED+BLINK);
			cprintf("@");
			textcolor(BLUE);
			cprintf("===");
			textcolor(WHITE);
			cprintf("()()");
			textcolor(BLUE);
			cprintf("8888888888888\n\r");
			cprintf("                                    ==");
			textcolor(RED+BLINK);
			cprintf("@@");
			textcolor(BLUE);
			cprintf("==                 \n\r");
			cprintf("                                      ==                   \n\r");
			printf("\n\n");
			textcolor(LIGHTRED+BLINK);
			cprintf("                                     1000/=");
			printf("\n\n");
			textcolor(LIGHTMAGENTA);
			cprintf("                               DOES CUSTOMER NEED BELT ? ");//if yes how many
			printf("\n\n\n");
			textcolor(MAGENTA);
			for(a=0;a<80;a++)
			cprintf("%");
			printf("\n\n\n\n");
			textcolor(BROWN);
			cprintf("                                  [Y]  YES\r\n");
			cprintf("                                  [N]  NO\r\n");
			fflush(stdin);
			belt=getch();



		/*	Sun glasses > Graphics 	*/
			

			clrscr();
			printf("\n");
			textcolor(MAGENTA);
			for(a=0;a<80;a++)
			cprintf("%");
			printf("\n\n\n");
			textcolor(BROWN);
			cprintf("                                  SUN GLASSES\r\n");
			printf("\n\n\n\n");
			textcolor(WHITE);
			cprintf("                           =                      =\n\r");
			cprintf("                           =                      =\n\r");
			cprintf("                           =");
			textcolor(GREEN+BLINK);
			cprintf(" $$$$$$        $$$$$$");
			textcolor(WHITE);
			cprintf(" =\n\r");
			cprintf("                           =");
			textcolor(GREEN+BLINK);
			cprintf("$$$$$$$$      $$$$$$$$");
			textcolor(WHITE);
			cprintf("=\n\r");
			cprintf("                           =");
			textcolor(GREEN+BLINK);
			cprintf("$$$$$$$$");
			textcolor(LIGHTGRAY);
			cprintf("(:)(:)");
			textcolor(GREEN+BLINK);
			cprintf("$$$$$$$$");
			textcolor(WHITE);
			cprintf("=\n\r");
			textcolor(GREEN+BLINK);
			cprintf("                            $$$$$$$$      $$$$$$$$\n\r");
			cprintf("                             $$$$$$        $$$$$$\n\r");
			printf("\n\n");
			textcolor(LIGHTRED+BLINK);
			cprintf("                                     2000/=");
			printf("\n\n");
			textcolor(LIGHTMAGENTA);
			cprintf("                           DOES CUSTOMER NEED SUN GLASSES ? ");
			printf("\n\n\n");
			textcolor(MAGENTA);
			for(a=0;a<80;a++)
			cprintf("%");
			printf("\n\n\n\n");
			textcolor(BROWN);
			cprintf("                                  [Y]  YES\r\n");
			cprintf("                                  [N]  NO\r\n");
			fflush(stdin);
			glass=getch();
		



/*assing prices to extra*/



if(shoes=='Y' || shoes=='y')
	{extra = extra + 3000;
	l=1;
	}
if(belt=='Y' || belt=='y')
	{extra = extra + 1000;
	m=2;	
	}
if(glass=='Y' || glass=='y')
	{extra = extra +2000;
	n=3;
	}



}

account();	/*Calling the account function*/				

}





/*assinning all the values & visa card Graphics*/

void account()

{ 


int a;


/*price declaration to price  strcuture*/


csize.c_type[0][0] =10000;
csize.c_type[0][1] =6000;
csize.c_type[0][2] =3000;
csize.c_type[1][0] =7500;
csize.c_type[1][1] =5000;
csize.c_type[1][2] =2000;
csize.c_type[2][0] =5000;
csize.c_type[2][1] =4000;
csize.c_type[2][2] =1000;


/*price Deciding > prize identifier*/

{
if(p==0)
	prize = csize.c_type[q][r];

else if(p==1)
	prize = csize.c_type[q][r]*0.9;

else if(p==2)
	prize = csize.c_type[q][r]*0.8;
}

amount=prize*no_cloth;  /* total cloth price*/

total= amount + extra;	/*Entire price */


/*money lable*/
money :


cash=0;



clrscr();
		printf("\n\n");
		textcolor(RED+BLINK);
		cprintf("\n\n           $$$$$$$$");
                textcolor(YELLOW);
		cprintf("         SUB TOTAL :%0.2f         ",total);
           	textcolor(RED+BLINK);
		cprintf("$$$$$$$$");





//visa card and 10,0000

if(total>=10000)
{




	printf("\n\n\n");
	textcolor(MAGENTA);
	for(a=0;a<80;a++)
	cprintf("%");
	printf("\n\n\n");
	textcolor(LIGHTBLUE);
	cprintf("                           $$$$$$$$$$$$$$$$$$$$$$$$$$\n\r");
	cprintf("                          $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\r");
	cprintf("                          $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\r");
	cprintf("                          $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\r");
	

	textcolor(WHITE);
	cprintf("                          ============================\n\r");
	cprintf("                          ====");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("===");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("==");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("==");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("****");
	textcolor(WHITE);
	cprintf("====");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("=====\n\r");




	textcolor(WHITE);
	cprintf("                          ====");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("===");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("==");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("==");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("======");
	textcolor(LIGHTBLUE+BLINK);	
	cprintf("*");
	textcolor(WHITE);
	cprintf("=");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("====\n\r");
	






	cprintf("                          ====");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("===");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("==");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("==");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("****");
	textcolor(WHITE);
	cprintf("==");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*****");
	textcolor(WHITE);
	cprintf("===\n\r");

	cprintf("                          =====");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("=");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");	
	textcolor(WHITE);
	cprintf("===");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("=====");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");	
	textcolor(WHITE);
	cprintf("==");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("===");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("===\n\r");


	cprintf("                          ======");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("====");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("==");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("****");
	textcolor(WHITE);
	cprintf("==");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("===");
	textcolor(LIGHTBLUE+BLINK);
	cprintf("*");
	textcolor(WHITE);
	cprintf("===\n\r");
	
	cprintf("                          ============================\n\r");


	textcolor(BROWN);
	cprintf("                          $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\r"); 
	cprintf("                          $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\r");
	cprintf("                          $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\r");
	cprintf("                           $$$$$$$$$$$$$$$$$$$$$$$$$$\n\r");
	



		printf("\n\n");
		textcolor(LIGHTMAGENTA);
		cprintf("                   DOES CUSTERMER PAY BY VISA CREDIT CARD ? ");//if yes how many
		printf("\n\n\n");
		textcolor(MAGENTA);
		for(a=0;a<80;a++)
		cprintf("%");
		printf("\n\n\n\n");
		textcolor(BROWN);
		cprintf("                                  [Y]  YES\r\n");
		cprintf("                                  [N]  NO\r\n");
		fflush(stdin);
		visa=getch();


			
				if(visa=='y' || visa=='Y')
					{
						grant_total = total * 0.9;
						discount=total*0.1;
						v_c=0;
						blance=0;
					}
				else
					{
						grant_total = total;
		
						textcolor(YELLOW);
						cprintf("\n\n\n                              CASH :");
						scanf("%f",&cash);
						blance=cash-grant_total;		
						v_c=1;


							//cash return

							if(cash<grant_total)
								{	printf("enter correct amount of money");
									getch();
									cash=0;
									goto money;				/*Retrun to money lable*/
								}									

						

					}

			
}


else
{
		grant_total = total;
		textcolor(YELLOW);
		cprintf("\n\n\n                              CASH :");
		scanf("%f",&cash);
		blance=cash-grant_total;
		v_c=1;
			

					//cash return

					if(cash<grant_total)
						{	printf("enter correct amount of money");
							getch();
							cash=0;
							goto money;
}



}








bill();												/*Calling the bill function*/

}







/*creatting the bill*/



void bill()

{


char *n_outfit[3] = {

			"Formal",
			"Casual",
			"Sports"

		};


char *n_size[3] = {
		
			"Adult",
			"Adult Medium",
			"Child"

		};


char *n_type[3] = {
			
			"Raw Silk",
			"Cotton",
			"Synthetic",
		
		};


char *n_extra[4] = {	"*****",
                        "Shose",
			"Belt",
			"Sunglasses",
		};


char *n_paid_mode[2] = {"Visa", "Cash"};




clrscr();
textcolor(GREEN);
cprintf(" ______________________________________________________________________________\n\r");
cprintf("\n|                        $: FOCUS TEXTILES (Pvt) Ltd :$                        |\n\r");
cprintf("|                  # 388, Union Place, Colombo-02, Srilanka                    |\n\r");
cprintf(" ______________________________________________________________________________|\n\r");
cprintf("|     |                 |               |                |                     |\n\r");
cprintf("| Qty | PRICE OF OUTFIT | TYPE OF CLOTH | TYPE OF OUTFIT |   SIZE OF OUTFIT    |\n\r");
cprintf("   %d     %0.0f             %s             %s            %s                       \n\r",no_cloth,prize,n_type[p],n_outfit[q],n_size[r]);

cprintf("|______________________________________________________________________________|\n\r");
cprintf("     TOTAL PRICE OF OUTFIT                             | %0.0f                 \n\r",amount);
cprintf("\n     EXTRA ACCESSORIES                                 | %s                      \n\r",n_extra[l]);
cprintf("                                                       | %s                      \n\r",n_extra[m]);
cprintf("                                                       | %s                      \n\r",n_extra[n]);
cprintf("\n     TOTAL PRICE OF EXTRA ACCESSORIES                  | %0.0f                 \n\r",extra);
cprintf("\n                                        SUB TOTAL      | %0.0f                 \n\r",total);
cprintf("                                        PAID MODE      | %s                      \n\r",n_paid_mode[v_c]);
cprintf("                                        DISCOUNT       | %0.0f                      \n\r",discount);
cprintf("                                        GRAND TOTAL    | %0.0f                 \n\r",grant_total);
cprintf("                                        CASH           | %0.0f                 \n\r",cash);
cprintf("                                        BALANCE        | %0.0f                  \n\r",blance);

cprintf("\n\n    CASHIER:- %s \n\r",user_name);
cprintf("\n                   Exchanges possible within 7 days with Receipt");

printf("\n\n");
cprintf(" ______________________________________________________________________________ \n\r");
cprintf("|                                                                              |\n\r");
cprintf("| (c) EVER BLOOM SoftSolutions << Contact Vanji CB002753 or Pubudu CB002753 >> |\n\r");
cprintf("|______________________________________________________________________________|\n\r");

getch();

}






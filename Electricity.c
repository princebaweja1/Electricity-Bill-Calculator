//                          Program To Calculate Electric Bill
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

			
// variable declaration
int i,j,k,l,p;
float cost,surchrg,cpu;    //cpu : charge per unit
char ch,X1,X2,X3,X4,X5; 

// structure
struct electric_bill {
	char custname[1000];
	int unit, custid,house_no;
	float phone_no;
	float total_bill;	 
}a;


int main()
{
//	system("color 4E");   //color                         
		printf("\t\t\t\t\t\tWelcome To Prince Project\n");
			printf("\n\t\t\t\tELECTRICITY BOARD DEPARTMENT\n");
				printf("Enter Password : ");           // pswrd start 
					scanf("%c %c %c",&X1,&X2,&X3);
										
	if(X1=='a' && X2=='b' && X3=='c' )	
	{	
		printf("\n-----------------------------------");
			printf("\nELECTRICITY BOARD RATE CHARGE");
				printf("\nif units are (<=100),then cost  is 0.5 rupee per unit.");
  					printf("\nif units are between 100 and 200, then cost is 1.0 rupee per unit.");
 						 printf("\nif units are between 200 and 300, then cost is 1.5 rupees per unit.");
							printf("\nif units are between 300 and 400,then cost is 2.0 rupees per unit.");
  								printf("\nelse cost is 3.0 rupees per unit.");
  									printf("\nsurcharge is 10 %.");
										printf("\n-----------------------------------");
                    
		scanf("%c");
		//details of customer	
			printf("\nENTER CUSTOMER NAME : ");
				gets(a.custname);
					printf("\nENTER CUSTOMER ID NO : ");
						scanf("%d",&a.custid);
							printf("\nENTER HOUSE NO : ");
								scanf("%d",&a.house_no);
									//printf("\n ENTER PHONE NO : " );
									//	scanf("%.0f",&a.phone_no);
									//	fflush(stdin);
											printf("\nENTER UNITS CONSUMED BY USER : " );
												scanf("%d",&a.unit);
									
		
		// ELECTRICITY RATE CHART.                                            
		if(a.unit<=100)
		{
			cpu=0.5;
			cost= a.unit*cpu;
		}
		else if (a.unit <=200)
		{
			cpu=1;
			cost=  50+((a.unit-100)*cpu);
		}
		else if (a.unit<=300)
		{
			cpu=1.5;
			cost=  150+((a.unit-200)*cpu);
		}
		else if(a.unit<=400)
		{
			cpu=2;
			cost=300+((a.unit-300)*cpu);
		}
		else
		{
			cpu=3;
			cost=  500+((a.unit-100)*cpu);
		}
    
		surchrg=cost*0.10;            // surchrg =  10 %   this is standard charge per unit
		a.total_bill=cost+surchrg;
		system("cls");			//clrscr  (cls) 
		printf("\t\t\t\t\t\tELECTRICITY BILL \n");
		printf("\nName           :  %s",a.custname);
		printf("\nCustomer Id    :  %d",a.custid);
		
		printf("\nHouse NO       :  %d",a.house_no);
		printf("\nUnits Consumed :  %d",a.unit);
		printf("\nTotal Bill     :  %.3f",a.total_bill);
		printf("\n");
	}    // end of if block (password)
	else 
	{
		printf("\tWrong Password\n\n");	
		X1='A'; X2='B';X3='C';
	}	
		
} // end of main();


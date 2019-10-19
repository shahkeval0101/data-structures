#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
struct admin* items(struct admin *p); 
void pay(struct admin *st);
struct admin* display(struct admin *start);
void menu();
void createMenu();
void insertnew();
void admin();
void staff();
void createstaff();
void del();
void change_price();

int static sell=0;
struct node
{
	int no;
	char name[10];
	char post[20];
	struct node *nxt;
};
struct node *beg=NULL,*d=NULL;

struct admin
{
	int no;
	char food[10];
	int price;
	struct admin *next;
};
struct admin *st=NULL,*start=NULL,*p;
 
int main()
{
	int dt,mn,yr;
	FILE *fp;
	fp=fopen("project.txt","a");
	printf("Enter todays date\n");
	scanf("%d",&dt);
	printf("Enter month\n");
	scanf("%d",&mn);
	printf("Enter the year\n");
    scanf("%d",&yr);
	system("cls");	
	int choice;
	createMenu();
	do
	{
		printf("\nRESTURANT \n\n\n");
    	printf("1.menu\n2.Admin level\n3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: menu();
			st=NULL;
			break;
			case 2: admin();
			break;
			case 3:fprintf(fp,"\n\nSale done on date %d-%d-%d is %d",dt,mn,yr,sell);
					//printf("file has been edited\n");
					fclose(fp); 
			printf("Thanks, visit again \n");
			break;
			default:printf("Invalid choice\n");
		}
 	}while(choice!=3);
return 0;
}

void createMenu()
{
	struct admin *ptr=NULL;
	system("color 4E");
	
	
	{
	char line1[20]="Sandwich";
	struct admin *temp1;
	temp1=(struct admin*)malloc(sizeof(struct admin));
	temp1->next=NULL;
	temp1->no=01;
    strcpy(temp1->food,line1);
	temp1->price=50;
	start=temp1;
	ptr=start;
	}
	
	{
	char line1[20]="Pav Bhaji";
	struct admin *temp1;
	temp1=(struct admin*)malloc(sizeof(struct admin));
	temp1->next=NULL;
	temp1->no=02;
    strcpy(temp1->food,line1);
	temp1->price=100;
	ptr->next=temp1;
	ptr=ptr->next;
	}
	
	{char line3[20]="Noodles";
	struct admin *temp3;
	temp3=(struct admin*)malloc(sizeof(struct admin));
	temp3->next=NULL;
	temp3->no=03;
    strcpy(temp3->food,line3);
	temp3->price=80;
	ptr->next=temp3;
	ptr=ptr->next;}
	
	{char line4[20]="Misal Pav";
	struct admin *temp4;
	temp4=(struct admin*)malloc(sizeof(struct admin));
	temp4->next=NULL;
	temp4->no=04;
    strcpy(temp4->food,line4);
	temp4->price=60;
	ptr->next=temp4;
	ptr=ptr->next;}
	
	{char line5[20]="Rice";
	struct admin *temp5;
	temp5=(struct admin*)malloc(sizeof(struct admin));
	temp5->next=NULL;
	temp5->no=05;
    strcpy(temp5->food,line5);
	temp5->price=30;
	ptr->next=temp5;
	ptr=ptr->next;}
	
	{char line6[20]="Rasgulla";
	struct admin *temp6;
	temp6=(struct admin*)malloc(sizeof(struct admin));
	temp6->next=NULL;
	temp6->no=06;
    strcpy(temp6->food,line6);
	temp6->price=40;
	ptr->next=temp6;
	ptr=ptr->next;}
	
	{char line7[20]="Manchurian";
	struct admin *temp7;
	temp7=(struct admin*)malloc(sizeof(struct admin));
	temp7->next=NULL;
	temp7->no=7;
    strcpy(temp7->food,line7);
	temp7->price=50;
	ptr->next=temp7;
	ptr=ptr->next;}
	
	{char line8[20]=" Biryani";
	struct admin *temp8;
	temp8=(struct admin*)malloc(sizeof(struct admin));
	temp8->next=NULL;
	temp8->no=8;
    strcpy(temp8->food,line8);
	temp8->price=50;
	ptr->next=temp8;
	ptr=ptr->next;}

	{char line9[20]="Lassi";
	struct admin *temp9;
	temp9=(struct admin*)malloc(sizeof(struct admin));
	temp9->next=NULL;
	temp9->no=9;
    strcpy(temp9->food,line9);
	temp9->price=20;
	ptr->next=temp9;
	ptr=ptr->next;}

	
	{char line10[20]="Buttermilk";
	struct admin *temp10;
	temp10=(struct admin*)malloc(sizeof(struct admin));
	temp10->next=NULL;
	temp10->no=10;
    strcpy(temp10->food,line10);
	temp10->price=20;
	ptr->next=temp10;
	ptr=ptr->next;}
	
	{char line11[20]="Chappati";
	struct admin *temp11;
	temp11=(struct admin*)malloc(sizeof(struct admin));
	temp11->next=NULL;
	temp11->no=11;
    strcpy(temp11->food,line11);
	temp11->price=50;
	ptr->next=temp11;
	ptr=ptr->next;}
	
	{char line12[20]="Idli Vada";
	struct admin *temp12;
	temp12=(struct admin*)malloc(sizeof(struct admin));
	temp12->next=NULL;
	temp12->no=12;
    strcpy(temp12->food,line12);
	temp12->price=30;
	ptr->next=temp12;
	ptr=ptr->next;}
	
	{char line13[20]="Dosa";
	struct admin *temp13;
	temp13=(struct admin*)malloc(sizeof(struct admin));
	temp13->next=NULL;
	temp13->no=13;
    strcpy(temp13->food,line13);
	temp13->price=50;
	ptr->next=temp13;
	ptr=ptr->next;}
	
	{
	char line14[20]="Samosa Pav";
	struct admin *temp14;
	temp14=(struct admin*)malloc(sizeof(struct admin));
	temp14->next=NULL;
	temp14->no=14;
    strcpy(temp14->food,line14);
	temp14->price=20;
	ptr->next=temp14;
	ptr=ptr->next;
	}
	
	{char line15[20]="Vada Pav";
	struct admin *temp15;
	temp15=(struct admin*)malloc(sizeof(struct admin));
	temp15->next=NULL;
	temp15->no=15;
    strcpy(temp15->food,line15);
	temp15->price=20;
	ptr->next=temp15;
	ptr=ptr->next;}
	
	{char line16[20]="Frankie";
	struct admin *temp16;
	temp16=(struct admin*)malloc(sizeof(struct admin));
	temp16->next=NULL;
	temp16->no=16;
    strcpy(temp16->food,line16);
	temp16->price=70;
	ptr->next=temp16;
	ptr=ptr->next;}
	
	{char line17[20]="Bhel";
	struct admin *temp17;
	temp17=(struct admin*)malloc(sizeof(struct admin));
	temp17->next=NULL;
	temp17->no=17;
    strcpy(temp17->food,line17);
	temp17->price=30;
	ptr->next=temp17;
	ptr=ptr->next;}
	
	{char line18[20]="Tea";
	struct admin *temp18;
	temp18=(struct admin*)malloc(sizeof(struct admin));
	temp18->next=NULL;
	temp18->no=18;
    strcpy(temp18->food,line18);
	temp18->price=20;
	ptr->next=temp18;
	ptr=ptr->next;}
	
	{char line19[20]="Coffee";
	struct admin *temp19;
	temp19=(struct admin*)malloc(sizeof(struct admin));
	temp19->next=NULL;
	temp19->no=19;
    strcpy(temp19->food,line19);
	temp19->price=20;
	ptr->next=temp19;
	ptr=ptr->next;}
	
	{char line20[20]="Cold Drink";
	struct admin *temp20;
	temp20=(struct admin*)malloc(sizeof(struct admin));
	temp20->next=NULL;
	temp20->no=20;
    strcpy(temp20->food,line20);
	temp20->price=20;
	ptr->next=temp20;}
}

void menu()
{
	int ch,a,found=0;
	start=display(start);
	printf("Enter the choice of serial no. you want order\n");
    scanf("%d",&a);
    for(p=start;p->food!=NULL;p=p->next)
    {
    	 if(p->no==a)
    	 {
    	 	found=1;
    	 	break;
		 }
	}
	if(found==1)
	printf("The entered entry is  %-20s %4d\n",p->food,p->price);
	else
	{
		 printf("The entry not found");
		 exit (1);
    }
	printf("\nEnter 1. To select more items\n 2.Continue and pay\n");
	scanf("%d",&a);
	if(a==1)
	{
	st=items(p);
   	menu(); 
	}
	else
	{
	st=items(p);
	pay(st);
    system("cls");
	}
}



struct admin* items(struct admin *a)
{
	struct admin *ptr,*temp;
  	temp=(struct admin*)malloc(sizeof(struct admin));
	if(st==NULL)
	{		
	temp->no=a->no;
	strcpy(temp->food,a->food);
	temp->price=a->price;
	temp->next=NULL;
	st=temp;
	return st;
	}
	else
	{
	ptr=st;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	temp->no=a->no;
	strcpy(temp->food,a->food);
	temp->price=a->price;
	ptr->next=temp;
	temp->next=NULL;
 	return st;
	}
}

void pay(struct admin *p)
{
	system("cls");
	time_t now;
	time(&now);
	int sum=0,ch,details,yr,cvv,i,count;
	struct admin *q;
	 char ac_no[13];
	printf("The total items purchased is ");
	st=display(st);
	for(q=st;q!=NULL;q=q->next)
	sum+=q->price;
	printf("the price for order is %d \n",sum);
	printf("Enter the medium through which you want to pay\n");
	printf("1.COD\n2.Online Banking\n");
	scanf("%d",&ch);
	
		if(ch==1)
		{printf("The entered medium of payment is Cash on delivery so delivery will be recieved  in 2 hrs from current time \n");
			sell=sell+sum;
			system("pause");
		}
		else 
		{
		printf("\nThe entered payment option is Online banking\n");
		printf("enter the bank details\n ");
		printf("1.debit card\n2.credit card\n");
		scanf("%d",&details);
		if(details==1)
		{
		printf("We never remember the details\n");	
		do{
		printf("Enter the 12 digit Debit card no");
		scanf("%s",&ac_no);
		count=0;
		for(i=0;ac_no[i]!='\0';i++)
		count++;
		}while(count!=12);
		printf("Enter the year of expiry\n");
		scanf("%d",&yr);
		printf("enter the cvv no:");
		scanf("%d",&cvv);
		printf("the account %s has been verified and amount deducted is %d ",ac_no,sum);
	    sell=sell+sum;
	    system("pause");
		}
	   else
	  {
	  	printf("We never remember the details\n");	
		do{
		printf("Enter the 12 digit Debit card no");
		scanf("%s",&ac_no);
		count=0;
		for(i=0;ac_no[i]!='\0';i++)
		count++;
		}while(count!=12);
		printf("Enter the year of expiry\n");
		scanf("%d",&yr);
		printf("enter the cvv no:");
		scanf("%d",&cvv);
		printf("the account %s has been verified and amount deducted is %d ",ac_no,sum);
	    sell=sell+sum;
	    system("pause");
		   }
	}
}


struct admin* display(struct admin *a)
{
	struct admin *b=NULL;
	printf("ITEMS\n");
	b=a;
    printf("_______________________________\n");
	while(b!=NULL)
	{	
		printf("|%3d)|%-20s|%4d|\n",b->no,b->food,b->price);
    	b=b->next;
    }
    printf("_______________________________\n");
    return a;   
}

void admin()
{
	char user[10],pass[10],c;
	int ch, total=0,i;
    printf("Enter the username access admin section\n");
  	scanf("%s",user);
  	printf("Enter the password\n");
	scanf("%s",pass);
	 if((strcmp(user,"admin") && strcmp(pass,"1234"))==0)
  	{
  		printf("\nWELCOME TO ADMIN SECTION\n");
  		do
  		{
		printf("1.Insert a Today's special item to the list\n2.Delete a item from the list\n3.Change a price of a particular item\n4.View Staff\n5.Today's sell\n6.Exit\n");
  		printf("Enter the choice\n");
  		scanf("%d",&ch);
  		switch(ch)
  		{
  			case 1:insertnew();
  			break;
  			case 2:del();
  			break;
  			case 3:change_price();
  			break;
  			case 4:staff();
  			break;
  			case 5:
			printf("Todays selling done is %d\n",sell);
         	break;
  			default:printf("Invalid choice\n");
  		}
  	    
	  }while(ch!=6);
}

		else
		{
	     printf("Invalid password\n");
	     admin();
		}
}

void insertnew()
{
	struct admin *ptr = start;
	char str[20];
     int i=0;
	printf("Enter New Item Name \n");
	scanf("%s",str); 
	//scanf("%[^\n]",&str);
	struct admin *temp;
	ptr=start;
	temp =(struct admin*) malloc(sizeof(struct admin));
	strcpy(temp->food, str);
	printf("Enter the Price of the Item \n");
	scanf("%d",&temp -> price);
	printf("Enter the Serial No of the Item \n");
	scanf("%d",&temp -> no);
	temp -> next =NULL;
	while(ptr -> next !=NULL)
	ptr = ptr-> next;
	ptr->next=temp;
	free(temp);
	system("cls");
}
void del()
{
	struct admin *ptr,*preptr;
	int m;
	start=display(start);
	ptr=start;
	printf("Enter the Serial No of Food Item to be Removed \n");
	scanf("%d", &m);
	while(ptr -> no != m)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}
	if(ptr == start)
	{
		start = start -> next;
	}
	/*else if(ptr -> next == NULL)
	{
		preptr -> next = NULL;
	}*/
	else
	{
		preptr -> next = ptr -> next;
	}
	system("cls");
}
void staff()
{
	createstaff();
	system("cls");
	struct node *a;
	a=beg;
	printf("_______________________________\n");
	while(a!=NULL)
	{	
		printf("|%3d)|%-20s|%-20s|\n",a->no,a->name,a->post);
    	a=a->nxt;
    }
    printf("_______________________________\n");
}


void createstaff()
{
	{
	char nm[10]="Ramesh";
	char pt[20]="chef";
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->nxt=NULL;
	temp->no=1;
    strcpy(temp->name,nm);
	strcpy(temp->post,pt);
	beg=temp;
	d=beg;
	}
	
	{
	char nm[10]="Suresh";
	char pt[20]="chef";
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->nxt=NULL;
	temp->no=2;
    strcpy(temp->name,nm);
	strcpy(temp->post,pt);
	d->nxt=temp;
	d=d->nxt;
	}	
	
	{
	char nm[10]="Sneha";
	char pt[20]="Reception";
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->nxt=NULL;
	temp->no=3;
    strcpy(temp->name,nm);
	strcpy(temp->post,pt);
	d->nxt=temp;
	d=d->nxt;
}	
	
	{
	char nm[10]="Raju";
	char pt[20]="Delivery boy";
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->nxt=NULL;
	temp->no=4;
    strcpy(temp->name,nm);
	strcpy(temp->post,pt);
	d->nxt=temp;
	d=d->nxt;
   }
	
	{
	char nm[10]="Ramu";
	char pt[20]="Delivery boy";
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->nxt=NULL;
	temp->no=5;
    strcpy(temp->name,nm);
	strcpy(temp->post,pt);
	d->nxt=temp;
	}	
}

void change_price()
{
	int a,pr,found=0;
	start=display(start);
	printf("Enter the serial no whose price is to be changed\n");
	scanf("%d",&a);
	for(p=start;p->food!=NULL;p=p->next)
    {
    	 if(p->no==a)
    	 {
    	 	found=1;
    	 	break;
		 }
	}
	if(found==1)
	printf("The entered entry is  %-20s %4d\n",p->food,p->price);
	else
	{
		 printf("The entry not found");
		 change_price();
    }
    printf("Enter the price you want change\n");
    scanf("%d",&pr);
    p->price=pr;
}


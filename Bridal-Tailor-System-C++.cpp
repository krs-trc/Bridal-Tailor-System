#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>
using namespace std;

struct node             //Creating linked list
{
	int stackTop;
	int orderid;
	string size[5]; 
	string type[5];
	float price[5];
	int quantity[5];
	
	node *next;
	
}receipt[10]; 


class orderr
{
	
	private:
		int totalReceipt;      //Holds the value of the total number of receipts inside the linked list

    public:
    	orderr()
    	{
    		totalReceipt = 0;

		}
		void menu();                                                                                      //display menu function
    	void make_order();                                                                                //make order function
    	void make_order(int top, string typ[], string s[], int q[], float p[]);                           //make order function
    	void display_current_order();                                                                     //display current order function
    	void display_menu();                                                                              //display order menu function
    	void display_orderidonly();                                                                       //display order ID only function
    	void display_clothingtypeonly();																  //display clothing type only function
    	void edit_order();                                                                                //edit current order function
    	void delete_order();                                                                              //delete the fisrt clothing type un current order function
    	void preset();                                                                                    //declaring preset order function
    	void binary_searching();                                                                          //binary searching function
    	void linear_searching();																		  //linear seaarching function
    	void view_finalized_order();                                                                      //view all finalized order function
    	void summary_report();                                                                            //display summary report function
    	void Bubble_Sort(string type[],string size[],float price[],int quantity[],float amo[], int n);	  //bubble sort by clothing type function
		void Bubble_SortInt(string type[],string size[],float price[],int quantity[],float amo[], int n); //bubble sort by quantity function	
    	node *front = NULL;
    	node *rear = NULL;
};

int main()
{
	
	int choice, choice2, choice3;
	bool exit = false;
	orderr cloth;
	cloth.preset();
	
	system("cls");																			    //Clearing the screen
	cout<<"\n\n\n\n\n\n\n\n\n \t\t\t\t - >> WELCOME TO BRIDAL BLOSSOMS TAILOR << - " << endl;	//Character output
	cout<<"\n\n\n\n\t\t\t\t       [Press any key to continue]" << endl;						    //Character output
	getch();																			     	//Get character
	system("cls");	
	
	while(choice!=5)
	{
		A1:
		system("cls");
		cout<<"\n\n\t\t================================================================================="<< endl;
		cout<<"\n\n\t\t\t\t\t\tMAIN MENU\n"<< endl;
		cout<<"\n\t\t================================================================================="<< endl;
		cout<<"\n\n\t\t _______________________________________________________________________________";
		cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t|";
		cout<<"\n\t\t|\tCREATE NEW ORDER LIST\t\t\t\t[ENTER-1]\t\t|";
		cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t|";
		cout<<"\n\t\t|\tSEARCH FINALIZED ORDER\t\t\t\t[ENTER-2]\t\t|";
		cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t|";
		cout<<"\n\t\t|\tVIEW ALL FINALIZED ORDER\t\t\t[ENTER-3]\t\t|";
		cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t|";
		cout<<"\n\t\t|\tSUMMARY REPORT\t\t\t\t\t[ENTER-4]\t\t|";
		cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t|";
		cout<<"\n\t\t|\tEXIT\t\t\t\t\t\t[ENTER-5]\t\t|";
		cout<<"\n\t\t|_______________________________________________________________________________|";
		cout<<"\n\n\n\t\t=> ENTER YOUR CHOICE:  ";
		cin>>choice;
			
	
		switch(choice)
		{
			case 1:
				A2:
				system("cls");	
				cout<<"\n\n\t\t================================================================================="<< endl;
				cout<<"\n\n\t\t\t\t\t\tCREATE NEW ORDER LIST\n"<< endl;
				cout<<"\n\t\t================================================================================="<< endl;
				cout<<"\n\n\t\t _______________________________________________________________________________";
				cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t|";
				cout<<"\n\t\t|\tNEW ORDER\t\t\t\t\t[ENTER-1]\t\t|";
				cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t|";
				cout<<"\n\t\t|\tEDIT ORDER\t\t\t\t\t[ENTER-2]\t\t|";
				cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t|";
				cout<<"\n\t\t|\tDELETE ORDER\t\t\t\t\t[ENTER-3]\t\t|";
				cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t|";
				cout<<"\n\t\t|\tVIEW ORDER\t\t\t\t\t[ENTER-4]\t\t|";
				cout<<"\n\t\t|\t\t\t\t\t\t\t\t\t\t|";
				cout<<"\n\t\t|\t<= GO BACK\t\t\t\t\t[ENTER-5]\t\t|";
				cout<<"\n\t\t|_______________________________________________________________________________|";
				cout<<"\n\n\n\t\t=> ENTER YOUR CHOICE :  ";
				cin>>choice2;

			    switch(choice2)
		  		{
		    		case 1:
		    			system("cls");	
		    			cloth.make_order();
		    			system("pause");
		    			goto A2;
		    			break;
		    		case 2:
		    			system("cls");	
		    			cloth.edit_order();
		    			system("pause");
		    			goto A2;
		    			break;
		    		case 3:
		    			system("cls");	
		    			cloth.delete_order();
		    			system("pause");
		    			goto A2;
		    			break;
		    		case 4:
		    			system("cls");	
		    			cloth.display_current_order();
		    			system("pause");
		    			goto A2;
		    			break;
		    		case 5:
		    			system("cls");	
		    			goto A1;
		    			break;
		    		default:
		    			system("cls");	
		    			cout<<"INVALID INPUT! PLEASE TRY AGAIN!\n"<<endl;
		    			system("pause");
		    			goto A2;
				}
		    break;

		case 2:
			cout << "\n\t\tHow do you want to search for the finalized order?";
			cout << "\n\t\t1.Order ID" << endl;					
			cout << "\t\t2.Clothing Type\n" << endl;					
			cout << "\t\tYour choice: ";								
			cin >> choice3;		
			if(choice3 == 1)	
			{
				cloth.binary_searching();
				system("pause");
				break;
			}
			else if(choice3 == 2)	
			{
				cloth.linear_searching();
				system("pause");
				break;
			}
			else	
			{
				cout<<"\t\tINVALID INPUT! PLEASE TRY AGAIN!\n"<<endl;
				system("pause");	
		    	goto A1;
				break;
			}
			cout << "\t\t";
			system("pause");
			break;
		case 3:
			cloth.view_finalized_order();
			system("pause");
			break;
		case 4:
			cloth.summary_report();
			system("pause");
			break;
		case 5:
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t===THANK YOU!===\n"<<endl;
			exit = true;
			break;
		default:
			system("cls");	
			cout<<"INVALID INPUT! PLEASE TRY AGAIN!\n"<<endl;
		    goto A1;
			break;
	}	
	}
	return 0;
} 

//Function to display the menu 
void orderr::menu()
{
	cout<<"\n\t\t========Clothing Type,  Size Measurement Chart (inches),  Price(RM)==============="<<endl;
	cout<<"\t\t=======Groom=========||=======Measurement=============||==========Price(RM)======="<<endl;
	cout<<"\t\t->BAJU MELAYU        ||S=30 M=35 L=40 XL=45           ||        150               "<<endl;
	cout<<"\t\t->TUXEDO             ||S=30 M=35 L=40 XL=45           ||        250               "<<endl;        
	cout<<"\t\t->VEST               ||S=30 M=35 L=40 XL=45           ||        200               "<<endl;                
	cout<<"\t\t->PANT               ||S=30 M=35 L=40 XL=45           ||        80                "<<endl;
	cout<<"\t\t->BOW TIE AND TAILS  ||S=30 M=35 L=40 XL=45           ||        30                "<<endl;
	cout<<"\t\t=======Bride=========||========Measurement============||========================= "<<endl;
	cout<<"\t\t->BAJU KURUNG        ||S=30 M=35 L=40 XL=45           ||        180               "<<endl;
	cout<<"\t\t->WEDDING GOWN       ||S=30 M=35 L=40 XL=45           ||        350               "<<endl;
	cout<<"\t\t->WEDDING SHAWL      ||S=30 M=35 L=40 XL=45           ||        40                "<<endl;


}

//Function to make new order 
void orderr::make_order()
{
	string type,s;
	double p;
	int q;
	char repeat, confirm;
	int maxOrder = 0;
	
	node *newType = new node;
    newType->stackTop = -1;
    
    cout<<"\n\n\t\t================================================================================="<< endl;
	cout<<"\n\t\t\t\t\t\tCREATE NEW ORDER\n"<< endl;
	menu();			
	cout<<"\n\t\t================================================================================="<< endl;
    
	do
	{
		maxOrder++;
		newType->stackTop++; 
		
		cout << "\n\t\tClothing Type #" << newType->stackTop + 1 << endl; 
		
		cout<<"\t\tEnter type clothing that you want to order: ";
		getline(cin >> ws, type);
		fflush(stdin);								
		while (cin.fail())
		{
			cin.clear(); 						
			cin.ignore(INT_MAX, '\n'); 		
			cout << "Invalid input!" << endl;
			getline(cin >> ws, type);					
		}
		newType->type[newType->stackTop] = type;

		cout << "\t\tEnter the size of the clothing (S\\M\\L\\XL) : ";
		cin>>s;
		fflush(stdin);								
		while (cin.fail())
		{
			cin.clear(); 						
			cin.ignore(INT_MAX, '\n'); 		
			cout << "Invalid input!" << endl;
			cin >> s;					
		}
		newType->size[newType->stackTop] = s;

		cout<<"\t\tPlease enter the price: ";
		cin>>p;
		fflush(stdin);								
		while (cin.fail())
		{
			cin.clear(); 						
			cin.ignore(INT_MAX, '\n'); 		
			cout << "Invalid input!" << endl;
			cin >> p;					
		}
		newType->price[newType->stackTop] = p;
	
		cout<<"\t\tPlease enter the quantity: ";
		cin>>q;
		newType->quantity[newType->stackTop] = q;
		

		if (maxOrder == 5) //If the the amount of order is 5
		{
			cout << "\n\t\tYou've reached the maximum amount of order!" << endl;	
			break;	
		}
		else
		{
			
			cout << "\t\tAnother order? (y-yes, n-no): ";		
			cin >> repeat;								
			if (repeat == 'n' || repeat == 'N')		
			break;									
		}
	
	} while (repeat == 'y' || repeat == 'Y');
	
	newType->next = NULL;
	cout << "\n\t\tConfirm the order? (y-yes, n-no)" << endl;	
	cout << "\t\tYour choice : ";							
	cin >> confirm;
	
	if (confirm == 'y' || confirm == 'Y')		
	{
		if (front == NULL)								
		{
			front = newType;
			rear = newType;
		}
		else
		{
			rear->next = newType;
			rear = newType;
		}
		
		rear = newType;
		cout << "\t\tOrder is added!" << endl;
		newType->orderid = totalReceipt + 1;					
		totalReceipt++;

	}
	else if (confirm == 'n' || confirm == 'N')	
	{
		delete newType;					
		cout << endl;				
	}
	
}

//Function to make order 
void orderr::make_order(int top, string typ[], string s[], int q[], float p[])
{
	node *temp = new node;
	temp->stackTop = 0;
	
	temp->orderid = totalReceipt + 1;
	temp->stackTop = top;
	temp->orderid = totalReceipt + 1;
	memcpy(temp->type, typ, sizeof(temp->type));
	memcpy(temp->size, s, sizeof(temp->size));
	memcpy(temp->price, p, sizeof(temp->price));
	memcpy(temp->quantity, q, sizeof(temp->quantity));
	

	temp->next = NULL;
	if (front == NULL)								
	{
		front = temp;
		rear = temp;
	}
	else
	{
		rear->next = temp;
		rear = temp;
	}
	rear = temp;
	totalReceipt++;
	
}

//Function for declaring Pre-set data(s)
void orderr::preset()
{
	//Preset #1
	receipt[0].stackTop = 1;	
	receipt[0].type[0] = "BAJU MELAYU";	
	receipt[0].size[0] = "S";
	receipt[0].price[0] = 150;
	receipt[0].quantity[0] = 2;	
	
	receipt[0].type[1] = "BAJU KURUNG";	
	receipt[0].size[1] = "S";
	receipt[0].price[1] = 180;
	receipt[0].quantity[1] = 2;	
	
	//Preset #2
	receipt[1].stackTop = 2;
	receipt[1].type[0] = "TUXEDO";
	receipt[1].size[0] = "XL";	
	receipt[1].price[0] = 250;
	receipt[1].quantity[0] = 2;	
	
	receipt[1].type[1] = "BAJU KURUNG";
	receipt[1].size[1] = "S";
	receipt[1].price[1] = 180;
	receipt[1].quantity[1] = 3;
	
	receipt[1].type[2] = "BOW TIE AND TAILS";
	receipt[1].size[2] = "L";
	receipt[1].price[2] = 30;
	receipt[1].quantity[2] = 4;
	
	//Preset #3
	receipt[2].stackTop = 4;
	receipt[2].type[0] = "BAJU MELAYU";				
	receipt[2].size[0] = "XL";
	receipt[2].price[0] = 150;				
	receipt[2].quantity[0] = 1;	
	
	receipt[2].type[1] = "BOW TIE AND TAILS";				
	receipt[2].size[1] = "S";
	receipt[2].price[1] = 30;				
	receipt[2].quantity[1] = 4;
	
	receipt[2].type[2] = "TUXEDO";				
	receipt[2].size[2] = "L";
	receipt[2].price[2] = 150;				
	receipt[2].quantity[2] = 2;
	
	
	receipt[2].type[3] = "VEST";				
	receipt[2].size[3] = "M";
	receipt[2].price[3] = 200;				
	receipt[2].quantity[3] = 2;
	
	receipt[2].type[4] = "WEDDING SHAWL";				
	receipt[2].size[4] = "S";
	receipt[2].price[4] = 40;				
	receipt[2].quantity[4] = 1;
	
	//Preset #4
	receipt[3].stackTop = 2;	
	receipt[3].type[0] = "VEST";						
	receipt[3].size[0] = "XL";
	receipt[3].price[0] = 200;				
	receipt[3].quantity[0] = 2;
	
	receipt[3].type[1] = "PANT";						
	receipt[3].size[1] = "L";
	receipt[3].price[1] = 80;				
	receipt[3].quantity[1] = 4;	
	
	receipt[3].type[2] = "WEDDING GOWN";						
	receipt[3].size[2] = "M";
	receipt[3].price[2] = 350;				
	receipt[3].quantity[2] = 1;				

	//Preset #5
	receipt[4].stackTop = 1;	
	receipt[4].type[0] = "WEDDING SHAWL";			
	receipt[4].size[0] = "XL";
	receipt[4].price[0] = 40;				
	receipt[4].quantity[0] = 2;	
	
	receipt[4].type[1] = "WEDDING GOWN";			
	receipt[4].size[1] = "XL";
	receipt[4].price[1] = 350;				
	receipt[4].quantity[1] = 2;				
	
	//Calls the overloading make order function to put the pre-set data into the Queue Linked List. 
	for (int i = 0; i < 5; i++)
		make_order(receipt[i].stackTop, receipt[i].type, receipt[i].size, receipt[i].quantity, receipt[i].price);
}

//Function to display the current order
void orderr::display_current_order()
{
	node *temp = rear;
	int x;
	float amount[50], total[50];
	
	if((front==NULL)&&(rear==NULL))
	{
	    cout<<"\n\t\tEmpty order list." << endl;
		return;
	}
	
	cout << "\n\t\tOrder ID: " << temp->orderid << endl;
	display_menu();
	
	for (int i = temp->stackTop; i >= 0; i--)
	{
		cout<<"\t\t"<<setw(23)<<left<<temp->type[i];
		cout<<setw(17)<<left<<temp->size[i];
		cout<<setw(12)<<left<<temp->price[i];
		cout<<setw(15)<<temp->quantity[i];
		
		amount[i] =+ temp->price[i]*temp->quantity[i];			
			    
		cout<< amount[i] << "\n";		
		total[x] += amount[i];	
		
	}
	cout << "\n\t\t+-----------------------------------------------------------------------------------------+";			//Character Output
		cout << endl << setw(87) << "\t\tTotal(RM):               " << total[x] << endl;											//Display total amount for all products
		cout << "\t\t+-----------------------------------------------------------------------------------------+" << endl;	//Character Output
		x++;
	temp=temp->next;
	cout << "\n\t\t";
	
	
}

//Function to display the order ID only to let the user get to know 
//the available order ID when they want to search for order ID
void orderr::display_orderidonly()
{
	
    	node *tempp = front;
	    cout<<"\t\tORDER ID THAT AVAILABLE: "<<endl;
	
	    while(tempp!=NULL){
		cout<<"\t\t"<<tempp->orderid<<endl;
		tempp=tempp->next;	
	    }	
		
		cout<<"\n"<<endl;				

}

//Function to displat clothing type only
void orderr::display_clothingtypeonly()
{
	
    	cout<<"\n\t\t===========Clothing Type==============="<<endl;
		cout<<"\t\t=======Groom=========||=======BRIDE===="<<endl;
		cout<<"\t\t->BAJU MELAYU        ||->BAJU KURUNG" <<endl;
		cout<<"\t\t->TUXEDO             ||->WEDDING GOWN"<<endl;        
		cout<<"\t\t->VEST               ||->WEDDING SHAWL"<<endl;                
		cout<<"\t\t->PANT               ||                "<<endl;
		cout<<"\t\t->BOW TIE AND TAILS  ||                "<<endl;
	
}

//Function to search for the order based on the order ID
void orderr::binary_searching()
{
	int x;
	float amount[50], subtotal[50];
	display_orderidonly();
	
	node *midtemp = front;

	if (front == NULL)	
	{
		cout << "\t\tThe order list is empty! " << endl;
		system("pause");							
		return;									
	}
	
	else
	{
		int orderid, first, last, mid;	
		double total = 0;					

		cout << "\t\tPlease enter the order ID you want to view: ";	
		cin >> orderid;															

		first = 0;									
		last = totalReceipt - 1;						

		while (first <= last)
		{
			mid = (first + last) / 2;
			midtemp = front;	
			for (int i = 0; i < mid; i++)
				midtemp = midtemp->next;

			if (midtemp->orderid == orderid) 				
			{
				cout << "\n\t\tOrder ID: " << midtemp->orderid << endl;
				display_menu();
				for (int i = midtemp->stackTop; i >= 0; i--)
		    {
				cout<<"\t\t"<<setw(23)<<left<<midtemp->type[i];
				cout<<setw(17)<<left<<midtemp->size[i];
				cout<<setw(12)<<left<<midtemp->price[i];
				cout<<setw(15)<<midtemp->quantity[i];
		
				amount[i] =+ midtemp->price[i]*midtemp->quantity[i];			
			    
				cout<< amount[i] << "\n";		
				subtotal[x] += amount[i];
				
		    }
		    cout << "\n\t\t+-----------------------------------------------------------------------------------------+";			//Character Output
			cout << endl << setw(87) << "\t\tTotal(RM):               " << subtotal[x] << endl;											//Display total amount for all products
			cout << "\t\t+-----------------------------------------------------------------------------------------+" << endl;	//Character Output
			x++;
				break;
			}
			else if (midtemp->orderid < orderid)			
				first = mid + 1;
			else 											
				last = mid - 1;
		}
		if (first > last)						
			cout << "\t\tOrder ID " << orderid << " could not be found!" << endl << "  ";
	}
						
}

//Function to search for the order based on the cloth type
void orderr::linear_searching()
{
	int x;
	float amount[50];
	display_clothingtypeonly();
	
	node *current = front;
	
	if (front == NULL)	
	{
		cout << "\t\tThe order list is empty! " << endl;
		system("pause");							
		return;									
	}
	
	else
	{
		int index=0, position=-1;	
		bool found = false;
		string type;				

		cout << "\t\tPlease enter the clothing type you want to view: ";	
		getline(cin >> ws, type);																				

		cout<<"\n\t\t------------------------------------CLOTHING TYPE: " << type<<"------------------------------------- ";		
		cout<<"\n\t\t____________________________________________________________________________________________\n";	
		cout<<"\n\t\tORDER ID       ||SIZE        || PRICE(RM)  || QUANTITY    || SUB TOTAL(RM)"    ;	          
		cout<<"\n\t\t--------------------------------------------------------------------------------------------\n";
		while (current!=NULL)
		{
			
			for(index= current->stackTop; index >= 0; index--)
			{
				
				if(type.compare(current->type[index])== 0)
				{
					found = true;
					position = index;
					
					cout<<"\t\t"<<setw(17)<<left<<current->orderid;		
					cout<<setw(17)<<left<<current->size[position];
					cout<<setw(12)<<left<<current->price[position];
					cout<<setw(15)<<current->quantity[position];
			
					amount[position] =+ current->price[position]*current->quantity[position];			
			    
					cout<< amount[position] << "\n";
					
				}
						 
			}
		index++; //Go to the next element
		current = current->next;
		
		}

	}
}

//Function to edit the current order
void orderr::edit_order()
{
	int choice, i;
    string type, s, ordertype;
    int p, q;
    
    display_current_order();
    
    node *temp = rear;
    
    cout << "What would you like to edit? " << endl;
    cout << "\t\t1. Add order" << endl;
    cout << "\t\t2. Edit existing order " << endl;
    cout << "\t\t3. Go back " << endl;
    cout << "\t\tEnter your choice:  ";
	cin>>choice;

    
    switch (choice)
    {
    	case 1:
    		if(temp->stackTop == 4)
    		{
    			cout << "\t\tYou've reached the maximum amount of order!" << endl;
				break;	
			}
				menu();
				temp->stackTop++; 				
				cout << "\n\t\tOrder #" << temp->stackTop + 1 << endl; 
	
				cout<<"\t\tEnter type clothing that you want to order: ";
				getline(cin >> ws, type);
				temp->type[temp->stackTop] = type;
	
				cout << "\t\tEnter the size of the clothing (S\\M\\L\\XL): ";
				cin>>s;
				temp->size[temp->stackTop] = s;
	
				cout<<"\t\tPlease enter the price: ";
				cin>>p;
				temp->price[temp->stackTop] = p;
	
				cout<<"\t\tPlease enter the quantity: ";
				cin>>q;
				temp->quantity[temp->stackTop] = q;
				
				cout << "\t\tSuccessfully saved your new order" << endl;	
			
			break;
			
		case 2:
			menu();
			cout << "\n\t\tEnter the clothing type you want to modify: ";	
			getline(cin >> ws, ordertype);
				
			for(i = temp->stackTop; i >= 0; i--)
			{
				if(ordertype.compare(temp->type[i])== 0)
				{
					cout<<"\t\tEnter new clothing type: ";
					getline(cin >> ws, type);
					temp->type[i] = type;
					
					cout << "\t\tEnter the new size of the clothing(S\\M\\L\\XL): ";
					cin>>s;
					temp->size[i] = s;

		  			cout<<"\t\tPlease enter the new price: ";
					cin>>p;
					temp->price[i] = p;

		  	 		cout<<"\t\tPlease enter the new quantity: ";
					cin>>q;
					temp->quantity[i] = q;
					cout << "\t\tSuccessfully modify your order" << endl;		//Character Output
				}	
				
			}
			
			break;
			
		case 3:
			return;
			break;
			
	}
			    
}

//Function to delete the first clothing type in the current order
void orderr::delete_order(){
	
	int i;
	node *current = rear;
	
	if (current->stackTop < 0) 	//If the stack is empty.
	{
		cout << "\t\tYou cannot delete anymore!";	//Character Output
		return;					
	}
	
	current->stackTop--;
	
	cout<<"Successfully deleted."<<endl;

}

//Function to view all the finalized order
void orderr::view_finalized_order()
{	
	int x;
	float amount[50], total[50];
    node *temp = front;
	
	system("cls");
	
	if((front==NULL)&&(rear==NULL))                 
	{
	    cout<<"\n\t\tEmpty order list." << endl;
		return;
	}
	else
	{
		while (temp != NULL)
		{
			cout << "\n\t\tOrder ID: " << temp->orderid << endl;
	display_menu();
	
	for (int i = temp->stackTop; i >= 0; i--)
	{
	
		cout<<"\t\t"<<setw(23)<<left<<temp->type[i];
		cout<<setw(17)<<left<<temp->size[i];
		cout<<setw(12)<<left<<temp->price[i];
		cout<<setw(15)<<temp->quantity[i];
		
		amount[i] =+ temp->price[i]*temp->quantity[i];			
			    
		cout<< amount[i] << "\n";		
		total[x] += amount[i];	
		
	}
	cout << "\n\t\t+-----------------------------------------------------------------------------------------+";			//Character Output
		cout << endl << setw(87) << "\t\tTotal(RM):               " << total[x] << endl;											//Display total amount for all products
		cout << "\t\t+-----------------------------------------------------------------------------------------+" << endl;	//Character Output
		x++;
	temp=temp->next;
	cout << "\n\t\t";
		}
	}
	

	
}

//Function to display the order menu 
void orderr::display_menu()
{
	cout<<"\n\t\t------------------------------------    ORDER ITEMS    ------------------------------------- ";			//Character output
	cout<<"\n\t\t____________________________________________________________________________________________\n";		//Character output
	cout<<"\n\t\tCLOTHING TYPE       ||SIZE        || PRICE(RM)  || QUANTITY    || SUB TOTAL(RM)"    ;	          	//Character output
	cout<<"\n\t\t--------------------------------------------------------------------------------------------\n";		
}

//Function to sort by clothing type using Bubble sort concept 
void orderr::Bubble_Sort(string type[],string size[],float price[],int quantity[],float amo[], int n)
{
	string temptyp;	
	string tempsz;
	float temppr;	
	int tempqu;	
	float tempamo;		
	
    // Sorting strings using bubble sort
    for (int j=0; j<n-1; j++)
    {
        for (int i=j+1; i<n; i++)	//For function for bubble sorting
        {
            if (type[j].compare(type[i]) > 0)		//For function for bubble sorting
            {
            	
            	temptyp = type[j];
            	type[j] = type[i];
            	type[i] = temptyp;
            	
                tempsz = size[j];
                size[j] = size[i];
                size[i] = tempsz;
                
                temppr = price[j];
                price[j] = price[i];
                price[i] = temppr;
                
                tempqu = quantity[j];
                quantity[j] = quantity[i];
                quantity[i] = tempqu;
                
                tempamo = amo[j];
                amo[j] = amo[i];
                amo[i] = tempamo;
                
            }
        }
    }
}

//Function to sort by quantity using Bubble sort concept
void orderr::Bubble_SortInt(string type[],string size[],float price[],int quantity[],float amo[], int n)
{
	string temptyp;	
	string tempsz;
	float temppr;	
	int tempqu;		
	float tempamo;	
		
    // Sorting integers using bubble sort
   for (int i = 0; i < n-1; i++){
      
     
    // Last i elements are already in place
    for (int j = 0; j < n-i-1; j++)
        if (quantity[j] > quantity[j+1])
        {
        	
        	temptyp = type[j];
        	type[j] = type[j+1];
        	type[j+1] = temptyp;
        	
            tempsz = size[j];
            size[j] = size[j+1];
            size[j+1] = tempsz;
            
            temppr = price[j];
            price[j] = price[j+1];
            price[j+1] = temppr;
            
            tempqu = quantity[j];
            quantity[j] = quantity[j+1];
            quantity[j+1] = tempqu;
            
        	tempamo = amo[j];
            amo[j] = amo[j+1];
            amo[j+1] = tempamo;
		}
		} 
}

//Function used to display summary
void orderr::summary_report()
{
	node *temp = front;			
	int x = 0, y = 0;			
	string type[50], sz[50];
	int qu[50], choice;		
	float pr[50], sub[50], total[50], amount[50];		

	if (front == NULL)
	{
		cout << "\n\t\tThe order list is empty! " << endl << "  ";	
		system("pause");											
		return;													
	}
	
		else
	{
		int choice;														
		cout<< setw(59) << "\n\t\tMonthly Sales Summary Report"  << endl;	//Character Output
		display_menu();

		//Totaling up the amount of menu ordered for all nodes
	    while (temp != NULL)
		{
		    for (int i = temp->stackTop; i >= 0; i--)
		    {
		    	
				cout<<"\t\t"<<setw(23)<<left<<temp->type[i];
				cout<<setw(17)<<left<<temp->size[i];
				cout<<setw(12)<<left<<temp->price[i];
				cout<<setw(15)<<temp->quantity[i];
			    
			    amount[i] =+ temp->price[i]*temp->quantity[i];		//Calculating total amount for each product
			    
			    cout<< amount[i] << "\n";		                    //Character Output
			    total[x] += amount[i];								//Calculating total amount for all products
			    
				type[y] = temp->type[i];                    //Setting element to Queue linked list
                sz[y]=temp->size[i];                        //Setting element to Queue linked list
			    qu[y]=temp->quantity[i];					//Setting element to Queue linked list
			    pr[y]=temp->price[i];						//Setting element to Queue linked list
			    sub[y]=amount[i];							//Setting element to Queue linked list
			    
				y++;		
		    }
		    
	    	temp = temp->next;
		}
		
		cout << "\t\t+-----------------------------------------------------------------------------------------+";		
	    cout << endl << setw(87) << "\t\tTotal(RM)):            " << total[x] << endl;										
	    cout << "\t\t+-----------------------------------------------------------------------------------------+" << endl;
			    
	    cout << "\n\t\tHow do you want to sort the summary?" << endl;	
        cout << "\t\t1.Clothing Type" << endl;					
		cout << "\t\t2.Quantity\n" << endl;					
		cout << "\t\tYour choice: ";								
		cin >> choice;										
		        
		while (choice != 1 && choice != 2)
		{
			cin.clear(); 								
			cin.ignore(INT_MAX, '\n'); 					
			cout << "\t\tPlease enter numbers only!" << endl;
			cin >> choice;								
		}
		        
		if (choice == 1)
		{
			int n = y;
		    system("cls");						    //Clearing the screen
			Bubble_Sort(type,sz,pr,qu,sub,n);		//Calling BubbleSort function
			display_menu();
	    
			for (int i=0; i<n; i++)
			{

				cout <<"\t\t"<<setw(23) << left << type[i] 
					 << setw(17) << left << sz[i]
		        	 << setw(12) << left << pr[i] 
					 << setw(15) << left << qu[i]
					 << setw(16) << left << sub[i]
					 << "\n";		
			}
			
			cout << "\t\t+-----------------------------------------------------------------------------------------+";			//Character Output
			cout << endl << setw(87) << "\t\tTotal(RM):          " << total[x] << endl;											//Displaying total products amount
			cout << "\t\t+-----------------------------------------------------------------------------------------+" << endl;	//Character Output
		}
				
		else if(choice == 2)
		{
			int n = y;
			system("cls");						    //Clearing the screen
			Bubble_SortInt(type,sz,pr,qu,sub,n);	//Calling BubbleSortInt function
			display_menu();
			
			for (int i=0; i<n; i++)
			{
			
				cout<<"\t\t"<<setw(23) << left << type[i]
					<< setw(17) << left << sz[i]
					<< setw(12) << left << pr[i] 
					<< setw(15) << left << qu[i]
					<< setw(16)	<< left << sub[i]
				 	<< "\n";
			}
			
			cout << "\t\t+-----------------------------------------------------------------------------------------+";			//Character Output
			cout << endl << setw(87) << "\t\tTotal(RM):            " << total[x] << endl;											//Displaying total amount for all products
			cout << "\t\t+-----------------------------------------------------------------------------------------+" << endl;	//Character Output
				
		}
				
	}		

}

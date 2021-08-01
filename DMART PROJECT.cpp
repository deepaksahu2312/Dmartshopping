#include<iostream>
#include<conio.h>
using namespace std;
    /*                                                  global variable declaration                                   */     
     // static variable
static float totalm=0,totcas=0,totpis=0,tottoor=0,toturd=0,totmas=0,totghadi=0,totlifesoap=0,totxpert=0;    
 // INLINE FUNCTION USED    
inline float bill(float dryf,float dals,float detergent)                          
    {
	return dryf+dals+detergent;
    }
     // Function to calculate the net price of ALMOND
float netprice(float q)                                                
{
	float k;
	k=(500)*q;
	return k;
}
  // Function to calculate the net price of Cashew Nuts
float netprice1(float q)                                             
{
	float k;
	k=(375)*q;
	return k;
}
 // Function to calculate the net price of Pistachio
float netprice2(float q)                                               
{
	float k;
	k=(450)*q;
	return k;
}
class purchasedal;
class detergent;
 // Class For Purchase Dry Fruits
class purchase                                                                   
{
	public:
float total;
	purchase()
	{
 // Introduction part
    cout<<"This Project is about the shopping as DMART\nPRESS ENTER TO CONTINUE";
    getch();	
	}
	 // DESTRUCTOR CALLED
	~purchase()
    {                                                                                                        
    cout<<"Invalid Choice\n";
    }
	purchase(int n)
	{
	cout<<"Enter the quantity \n";
	cin>>n;	
	}
	//Displays the price of Dry fruits
	float dispprice(int n)                                                               
    {
	if(n==1)
	{
		cout<<"Welcome, Do you want to purchase almonds (Y/N)\n";
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
		{
			//For Almonds
		cout<<"The price of Almond is Rs-500, 500gm \n";                                     
		cout<<"Enter the quantity you want like 1,2,3,........:\n";
		float quant;
		cin>>quant;
		totalm=netprice(quant);
		cout<<"Net price of Almond is "<<totalm<<"\n";	
	    }
	}
	if(n==2)
	{
		start1:
		cout<<"Welcome, Do you want to purchase Cashew nuts (Y/N)\n";
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
		{
			// For Cashew nuts 
		cout<<"The price of Cashew nuts is 375 Rs 500gm\n";
		cout<<"Enter the quantity you want like 1,2,3.........:\n";                                             
		float quant;
		cin>>quant;
		totcas=netprice1(quant);
		cout<<"Net price of Cashew Nuts(Kaju) is : "<<totcas<<"\n";
		
    	}
    
	}
	if(n==3)
	{
		start2:
		cout<<"Welcome, Do you want to purchase Pistachio(Pista) (Y/N)\n";
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
		{
		  //For Pista
		cout<<"The price of Pistachio(Pista) is 450 Rs 500gm\n";                                              
		cout<<"Enter the quantity you want like 1,2,3.........:\n";
		float quant;
		cin>>quant;
		totpis=netprice2(quant);
		cout<<"Net price of Pistachio(Pista) is : "<<totpis<<"\n";
	    }
	   
	}
	if(n>3)
	{
		cout<<"Invalid Choice\nPlease Try Again!!!\n";
		exit(0);
	}
	total=totalm+totcas+totpis;
}
 // FRIEND Function called
	friend void get_bill(purchase,purchasedal,detergent);                        
};
 // Function to calculate the net price of TOOR DAL
float netdal(float n)                                                          
{
	float k;
	k=135*n;
	return k;
}
 // Function to calculate the net price of URAD DAL
float netdal1(float n)                                                        
{
	float k;
	k=150*n;
	return k;
}
// Function to calculate the net price of MOONG DAL
float netdal2(float n)                                                          
{
	float k;
	k=140*n;
	return k;
}
class purchasedal
{
	public :
	float total;
	//Displays the price of Dals
	float dispprice1(int n)                                                                
	{
	if(n==1)
	{
		cout<<"Welcome, Do you want to purchase Toor dal (Y/N)\n";
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
		{
			//For Toor dal
		cout<<"The price of Toor dal is Rs-135, 1kg \n";                                     
		cout<<"Enter the quantity you want like 1,2,3,........:\n";
		float quant;
		cin>>quant;
		tottoor=netdal(quant);
		cout<<"Net price of Toor dal is "<<tottoor<<"\n";	
		}
	}
	if(n==2)
	{
		dal1:
		cout<<"Welcome, Do you want to purchase Urad dal (Y/N)\n";
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
		{
			// For Urad dal 
		cout<<"The price of Urad dal is 150 Rs 1kg\n";
		cout<<"Enter the quantity you want like 1,2,3.........:\n";                                             
		float quant;
		cin>>quant;
		toturd=netdal1(quant);
		cout<<"Net price of Urad dal is : "<<toturd<<"\n";
    	}
	}
	if(n==3)
	{
		dal2:
		cout<<"Welcome, Do you want to purchase Moong dal (Y/N)\n";
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
		{
			  //For  Moong dal
		cout<<"The price of Moong dal is 140 Rs 1kg\n";                                                    
		cout<<"Enter the quantity you want like 1,2,3.........:\n";
		float quant;
		cin>>quant;
		totmas=netdal2(quant);
		cout<<"Net price of Moong dal is : "<<totmas<<"\n";
	    }
	}
		if(n>3)
	{
		cout<<"Invalid Choice\nPlease Try Again!!!\n";
		exit(0);
	}
	total=tottoor+toturd+totmas;
}
 // FRIEND Function called
	friend void get_bill(purchase,purchasedal,detergent);                                 
};
 // Function to calculate the net price of DETERGENT
float netdeterg(float n)                                                                 
{
	float k;
	k=55*n;
	return k;
}
 // Function to calculate the net price of LIFEBUOY SOAP
float netlifesoap(float n)                                                           
{
	float k;
	k=95*n;
	return k;
}
// Function to calculate the net price of XPERT SOAP
float netxpert(float n)                                                               
{
	float k;
	k=60*n;
	return k;
}
class detergent
{
	public :
	float total;
	//Displays the price of Detergent
	float disppriced(int n)                                                                      
	{
	if(n==1)
	{
		cout<<"Welcome, Do you want to purchase Ghadi Detergent (Y/N)\n";
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
		{
			 //For Ghadi Detergent
		cout<<"The price of Ghadi Detergent is Rs-55, 1kg \n";                                      
		cout<<"Enter the quantity you want like 1,2,3,........:\n";
		float quant;
		cin>>quant;
		totghadi=netdeterg(quant);
		cout<<"Net price of Ghadi Detergent is "<<totghadi<<"\n";
		}
	}
	else if(n==2)
	{
		deterg:
		cout<<"Welcome, Do you want to purchase Lifebuoy Soap (Y/N)\n";
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
		{
			// For Lifebuoy Soap 
		cout<<"The price of Lifebuoy Soap is Rs-95, 5 Soap\n";
		cout<<"Enter the quantity you want like 1,2,3.........:\n";                                           
		float quant;
		cin>>quant;
		totlifesoap=netlifesoap(quant);
		cout<<"Net price of Lifebuoy Soap is : "<<totlifesoap<<"\n";
    	}
    }
    else if(n==3)
	{
		//For Xpert Soap
		soap:
		cout<<"Welcome, Do you want to purchase Xpert Soap (Y/N)\n";                                
		char c;
		cin>>c;
		if(c=='Y'||c=='y')
		{
		cout<<"The price of Xpert Soap is Rs-60, 5 Soap\n";
		cout<<"Enter the quantity you want like 1,2,3.........:\n";
		float quant;
		cin>>quant;
		totxpert=netxpert(quant);
		cout<<"Net price of Xpert Soap is : "<<totxpert<<"\n";
	    }
	}
	if(n>3)
	{
		cout<<"Invalid Choice\nPlease Try Again!!!\n";
		exit(0);
	}
	total=totghadi+totlifesoap+totxpert;
}
  // FRIEND Function called
    friend void get_bill(purchase,purchasedal,detergent);                            
};
  //Friend function definition
void get_bill(purchase p1,purchasedal p2,purchase p3)                              
{
	float Tot;
	Tot=p1.total+p2.total+p3.total;
	cout<<Tot;
}
int main()
{
	
	purchase p1;
    detergent pds;
    //Static Member variable
	static float totaldry=0,totaldal=0,totaldetergent=0;                             
	purchasedal pd1;
	star2:
	system("cls");
	// Welcome screen for the user
    cout<<"\t\t\t\t**********WELCOME TO DMART**********\t\t\t\t\n";                         
    cout<<"\t\t\tHere is the list of product you can purchase:\t\t\t\n";
    cout<<"Choose the below options:\n";
    cout<<"\t\t\t1.Dry Fruits\t\t\t\n";
	cout<<"\t\t\t2.Dals & pulses\t\t\t\n";
	cout<<"\t\t\t3.Detergent & soap\t\t\t\n";
	cout<<"\t\t\t4.Exit\t\t\t\n";
	int ch;
    cin>>ch;
    switch(ch)
    {
    	case 1:
    	{
    		star:
    			 // Dry fruit section
     		system("cls");                                                                         
    		cout<<"There is a list of Dry fruits\n";
    		cout<<"1.Almonds(badam)\n2.Cashew nuts(kaju)\n3.Pistachio(pista)\n";
    		cout<<"choose your choice\n";
			int n,totl=0;
			cin>>n;
			totaldry=p1.dispprice(n);
			cout<<"Total purchase of dry fruit is "<<totaldry<<"\n";
			cout<<"Do you want to purchase something more (Y/N) \n";
			char c;
			cin>>c;
			if(c=='Y'||c=='y')
			{
				goto star2;
			}
			else if(c=='N'||c=='n')
			{
				cout<<"\nPress Enter to continue and Choose option 4 to Exit\n";
				getch();
				goto star2;
			}
			break;
		}
	    case 2:
	    	{
	    	system("cls");
			int n;
			 // Dals and Pulses section
			cout<<"There is a list of Dals and pulses\n";                                          
			cout<<"1.Toor Dal\n2.Urad dal\n3.Masoor dal\n";
			cout<<"Choose your choice\n";
			cin>>n;
			totaldal=pd1.dispprice1(n);
			cout<<"Total purchase of dal is "<<totaldal<<"\n";
			cout<<"Do you want to purchase something more (Y/N) \n";
			char c;
			cin>>c;
			if(c=='Y'||c=='y')
			{
				goto star2;
			}
			else if(c=='N'||c=='n')
			{
				cout<<"\nPress Enter to continue and Choose option 4 to Exit\n";
				getch();
				goto star2;
			}
			break;
	        }
	    case 3 :
	            {
	            system("cls");
	            int n; 
	             // Deteergent and soaps section
				cout<<"There is a list of Detergent and Soap\n";                                       
				cout<<"1.Ghadi Detergent\n2.Lifebouy Soap\n3.Xpert Soap\n";
				cout<<"Choose your choice\n";
				cin>>n;
				totaldetergent=pds.disppriced(n);
			    cout<<"Total purchase of Detergent and soap is "<<totaldetergent<<"\n";
		    	cout<<"Do you want to purchase something more (Y/N) \n";
		    	char c;
		    	cin>>c;
		    	if(c=='Y'||c=='y')
		    	{
			    	goto star2;
		    	}
		    	else if(c=='N'||c=='n')
		    	{
		    	cout<<"\nPress Enter to continue and Choose option 4 to Exit\n";	
		    	getch();
		        goto star2;
				}
		    	break;
	   }
		case 4:
			{
				//Total Bill to be paid
			cout<<"You will have to pay Rs "<<bill(totaldry,totaldal,totaldetergent)<<"\n";         
			//Greeting message          
			cout<<"THANK YOU!!!!\nSEE YOU SOON\n";                                                             
		    exit(0);		
			}
	}
    return 0;
}



#include<iostream>						//for IO function
#include<string>						//for strings
#include<conio.h>						//for getch(); to accept single character ata a time
#include<fstream>						//for file handling ::: reading or writing
#include<stdlib.h>						// for standards
#include<string>

using namespace std;				

class Entry
{
	public:
     int cID,Prize,Discount,Quantity,i;
	 string Number,carpasscode;
     int search[10];
     char Address[50],City[20],cName[20],Descri[50];
     string Name;
	void Customer()
	{
		cout<<"\n\n\t\tEnter Phone No         :";
		cin>>Number;
		cout<<"\n\n\t\tEnter Customer Name    :";
		cin>>Name;
		cout<<"\n\n\t\tEnter Customer Address :";
		cin>>Address;
		cout<<"\n\n\t\tEnter City Name        :";
		cin>>City;
		
		cout<<"\n!!!!------------------------------------------------------------------------------------!!!!";
		cout<<"\n!!!!------------------------------------------------------------------------------------!!!!";
	
	}
	void Car()
	{	
		cout<<"\n\n\t\tEnter Car passing-code  :";
		cin>>carpasscode;
		cout<<"\n\n\t\tEnter Car Id            :";
		cin>>cID;
		cout<<"\n\n\t\tEnter Car Name          :";
		cin>>cName;
		cout<<"\n\n\t\tEnter Description       :";
		cin>>Descri;
		cout<<"\n\n\t\tEnter The Prize         :";
		cin>>Prize;
		cout<<"\n\n\t\tEnter The Discount      :";
		cin>>Discount;
		cout<<"\n\n\t\tEnter Quantity Of Order :";
		cin>>Quantity;
		cout<<"\n!!!!------------------------------------------------------------------------------------!!!!";
		cout<<"\n!!!!------------------------------------------------------------------------------------!!!!";
	}
	void Order()
	{
		cout<<"\n\n\t\tphone number      :"<<Number;
		cout<<"\n\n\t\tCustomer Came     :"<<Name;
		cout<<"\n\n\t\tCustomer Address  :"<<Address;
		cout<<"\n\n\t\tCity Name         :"<<City;
		cout<<"\n\n\t\tCar Passing-Code  :"<<carpasscode;
		cout<<"\n\n\t\tCar Id            :"<<cID;
		cout<<"\n\n\t\tcar name          :"<<cName;
		cout<<"\n\n\t\tDescription       :"<<Descri;
		cout<<"\n\n\t\tPrize             :"<<Prize;
		cout<<"\n\n\t\tOrder Quantity    :"<<Quantity;
		cout<<"\n\n\t\tItem Prize        :"<<Prize;
		cout<<"\n\n\t\tDiscount          :"<<Discount;
		cout<<"\n!!!!------------------------------------------------------------------------------------!!!!";
		cout<<"\n!!!!------------------------------------------------------------------------------------!!!!";
	}
	void customer_savingfile(string fname)					//function for saving a data into the customer txt file. create=>write data
	{
		ofstream file("customer.txt",ios::out | ios::app);
		
		file<<"\n\n"<<Number<<endl;
		file<<Name<<endl;
		file<<Address<<endl;
		file<<City<<endl<<"\n\n";
		file.close();
	}
	void car_filesaving(string fname)						//function for saving a data into the car txt file. create=>write data
	{
		ofstream file("Car.txt",ios::out | ios::app);
		
		file<<"\n\n"<<carpasscode<<endl;
		file<<cID<<endl;
		file<<cName<<endl;
		file<<Descri<<endl;
		file<<Prize<<endl;
		file<<Discount<<endl;
		file<<Quantity<<endl<<"\n\n";
		file.close();
		
	}
	void order_filesaving(string fname)						//function for saving a data into the order txt file. create=>write data
	{
		ofstream file("order.txt",ios::out | ios::app);
		
		file<<"\n\n"<<Number<<endl;
		file<<Name<<endl;
		file<<Address<<endl;
		file<<City<<endl;
		file<<carpasscode<<endl;
		file<<cID<<endl;
		file<<cName<<endl;
		file<<Descri<<endl;
		file<<Prize<<endl;
		file<<Discount<<endl;
		file<<Quantity<<endl<<"\n\n";
		file.close();
	}
	void sr1()
	{
		int rs=0;
		string s,s2;
		char ss[20];
		string Number;
		ifstream inf("customer.txt");
		cout<<"\n\t\tEnter phoneno : ";
		cin>>Number;
			while(getline(inf,s))
			{
				s2=Number;
				if(s.compare(s2)==0)
				{	
					cout<<"\n";
					cout<<"\t>>mobile_no   :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Name        :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Address     :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>City        :"<<s<<endl;
					getline(inf,s);
    			}
			}
			inf.close();
	}
	void sr2()
	{	
		int rs=0;
		string s,s2;
		char ss[20];
		string carpasscode;
		ifstream inf("Car.txt");
		cout<<"\n\t\tEnter Car Passing-Code : ";
		cin>>carpasscode;
		while(getline(inf,s))
		{
			s2=carpasscode;
			if(s.compare(s2)==0)
			{	
				cout<<"\n";
				cout<<"\t>>Car Passing-Code :"<<s<<endl;
				getline(inf,s);
				cout<<"\t>>Car-Id           :"<<s<<endl;
				getline(inf,s);
				cout<<"\t>>Car-Name         :"<<s<<endl;
				getline(inf,s);
				cout<<"\t>>Car-Description  :"<<s<<endl;
				getline(inf,s);
				cout<<"\t>>Car-Prize        :"<<s<<endl;
				getline(inf,s);
				cout<<"\t>>Car-Discount     :"<<s<<endl;
				getline(inf,s);
				cout<<"\t>>Quantity Of Order:"<<s<<endl;
				getline(inf,s);
			}

		}
		inf.close();
	}
	void sr3()
	{
		int rs=0;
		string s,s2;
		char ss[20];
		string Number;
		ifstream inf("order.txt");
		cout<<"\n\t\tEnter Customer-Ph-No : ";
		cin>>Number;
			while(getline(inf,s))
			{
				s2=Number;
				if(s.compare(s2)==0)
				{	
					cout<<"\n";
					cout<<"\t>>mobile_no        :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Name             :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Address          :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>City             :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Car Passing-Code :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Car-Id           :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Car-Name         :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Car-Description  :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Car-Prize        :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Car-Discount     :"<<s<<endl;
					getline(inf,s);
					cout<<"\t>>Quantity Of Order:"<<s<<endl;
					getline(inf,s);
    			}
			}
			inf.close();
	}	

};  
Entry e;   							// object of class for accessing the function of ENTRY class.


void login()
{
	int temp=0;
    string username="showroom_management";
    string password="car@ltd";
    system("cls");
    cout<<"\n\t\t\t\t\t---------LOGIN PAGE---------\n\n";
    while(temp<3)
    {
         cout<<"\n\n\t\t Enter Username : ";
         cin>>username;
         char c=' ';
		string password="";
		cout<<"\n\n\t\t Enter Password : ";								//password security
		while(c!=13)		//Enter key
		{
			c=getch();
			if(c!=13)
			{
				password+=c;
				cout<<"*";
			}
		}
		if(password=="car@ltd")
		{
			cout<<"\n\t\t\t\t\t---------Password Accepted---------\n\n";
		}
		else
		{
			cout<<"\n\t\t\t\t\t---------Wrong Password---------\n\n";
		}
		 
         if(username=="showroom_management" && password=="car@ltd")
         {
         		system("cls");
         		int c;
                int choice;
                int ch;
				int ID,Number,cID,Prize,Discount,Quantity;
    			char Name[30],Address[50],City[20],cName[20],Descri[50];
                do
                { 
                	cout<<"\n\t\t\t\t\t---------HOME PAGE---------\n\n";
               		cout<<"\n\t\t1.Entry\n\n\t\t2.View\n\n\t\t3.Setting\n\n\t\t4.search\n\n\t\t5.close the apllication\n\n\t\t6.Close The Home Page\n\n\t\t\tEnter Your Choice : ";			//modules
               		cin>>choice;
               		switch(choice)
               		{
               			case 1:
						{
							do
							{	
								cout<<"\n\n\t\t1.Customer Detail Entry Form\n\n\t\t2.Car Detail Entry Form\n\n\t\t3.Order Entry Form\n\n\t\t4.close the apllication\n\n\t\t5.Go To Home Page\n\n\t\t\tEnter Choice :" ;			//submodules
								cin>>ch;
								switch(ch)
								{	
									case 1:
											cout<<"\n\t\t\t\t---------Customer Detail Entry Form---------\n";
											e.Customer();										//function call
									       	e.customer_savingfile("custermer.txt");
									break;
									case 2:	
										    cout<<"\n\t\t\t\t----------Car Detail Entry Form----------\n";
											e.Car();											//function call
				       						e.car_filesaving("car.txt");
									break;
									case 3:	
											cout<<"\n\t\t\t\t----------Current Oredered Form----------\n";
											e.Order();											//function call
				     			  			e.order_filesaving("order.txt");
									break;
									case 4:
										exit(0);
									break;
									case 5:
									break;
									default:cout<<"\n\t\t\t\t\t---------Invalid choice---------\n\n";
								}
							}while(ch!=5);
						}
						break;
						case 2:						//__________VIEW
						{
								do
	 							 {
	 	 							cout<<"\n\n\t\t1.customer list data\n\n\t\t2.Car List Data\n\n\t\t3.Order List data\n\n\t\t4.close the apllication\n\n\t\t5.Go To Home Page\n\n\t\t\tEnter Your choice :";
	 	 							cin>>ch;
  	  								switch(ch)
     								{
     									case 1:
     									{
	     									std::string line;
	     									ifstream file("customer.txt");
     										if(file.is_open())
     										{
     											while(getline(file,line))
												 {
						 							std::cout<<line<< '\n';
												 }	
												file.close();
											}
											else 
											{
												std::cout<<"\n\t\t--------------File Is Not Open--------------"<< '\n';
												std::cin.get();
											}
				 						}
		   								break;
    	   								case 2:
    	   								{
    	   									std::string line;
     										ifstream file("Car.txt");
     										if(file.is_open())
     										{
     											while(getline(file,line))
						 						{
						 							std::cout<<line<< '\n';
												}	
												file.close();
											}
											else 
											{
												std::cout<<"\n\t\t--------------File Is Not Open--------------"<< '\n';
												std::cin.get();
											}
										}
		 						    	break;
   		  								case 3:
   		  								{
   		  									std::string line;
     										ifstream file("order.txt");
     										if(file.is_open())
     										{
     											while(getline(file,line))
												 {
						 							std::cout<<line<< '\n';
												 }	
												file.close();
											}
											else 
											{
											std::cout<<"\n\t\t--------------File Is Not Open--------------"<< '\n';
											std::cin.get();
											}
										}
		  								break;
    									case 4: 
    											exit(0);
	   	  								break;
	   	  								case 5:
	   	  	
	   	  								break;
	   	  								default:cout<<"\n\t\t\t\t\t---------Invalid choice---------\n\n";
									}
								}while(ch!=5);
						}
						break;
						case 3:
						{
								int ch;
								system("cls");
								do
								{
									cout<<"\n\n\t\t1.Search account by username\n\n\t\t2.Search account by password\n\n\t\t3.close the apllication\n\n\t\t4.Go To Home Page\n\n\n\t\t\t Enter your choise : ";
									cin>>ch;
									switch(ch)
									{
										case 1:
										{
											int ex = 0;
											string searchuser,su,sp;
											cout<<"\n\n\t\tEnter your remembered username : ";
											cin>>searchuser;
					
											ifstream search("database.txt");
											while(search>>su>>sp)
											{
												if(su == searchuser)
												{
													ex = 1;
													break;
												}
											}
											search.close();
											if(ex == 1)
											{
												cout<<"\n\n\t\t!!! ...HEY ...Friend!!... Your Account Is Found... !!!";
												cout<<"\n\n\t\t>>>>>>your password is : "<<sp<<"\n\n";
											}
											else
											{
												cout<<"\n\n\t\t>>>>>>Sorry Friend...Your Account is Not Found ....!!"<<"\n\n";
											}
										}
										break;
										case 2:
										{
											int exi = 0;
											string serachpass,su2,sp2;
											cout<<"\n\n\t\tEnter Your Remembered Password : ";
											cin>>serachpass;
					
											ifstream search("database.txt");
											while(search>>su2>>sp2)
											{
												if(sp2 == serachpass)
												{
													exi = 1;
													break;
												}
											}
											search.close();
											if(exi == 1)
											{
												cout<<"\n\n\t\tHEY ...Friend!!... Your Account Is Found... !!!";
												cout<<"\n\n\t\t>>>>>>Your Username Is : "<<su2<<"\n\n";
											}
											else
											{
												cout<<"\n\n\t\t>>>>>>Sorry Friend...Your Account is Not Found ....!!"<<"\n\n";
											}
										}
										break;
										case 3:
												exit(0);
										break;
										case 4:
										break;
										default:
											cout<<"\n\t\t\t\t\t---------Invalid choice---------\n\n";
									}
								}while(ch!=4);
						}
						break;
						case 4:
						{
								do
								{
									cout<<"\n\n\t\t1.Customer Details\n\n\t\t2.Car Details\n\n\t\t3.Order Details\n\n\t\t4.close the apllication\n\n\t\t5.Go To Home Page\n\n\n\t\t\t Enter your choise : ";
									cin>>c;
									switch(c)
									{
										case 1:
												e.sr1();
										break;
										case 2:
												e.sr2();
										break;
										case 3:
												e.sr3();
										break;
										case 4:
												exit(0);
										break;
										case 5:
												
										break;
										default:cout<<"\n\t\t\t\t\t---------Invalid choice---------\n\n";
										break;
									}
								}while(ch!=5);
						}
						break;
						case 5:
							exit(0);
						break;
						case 6:
						break;
						default:cout<<"\n\t\t\t\t\t---------Invalid choice---------\n\n";
						break;
					}
				}while(choice!=6);		    
         }    
   
         else
         {
                cout<<"\n\n\t\t!!..Please Enetr Correct Username Or Password..!! \n";
		 }	
       	 temp++;
    }
    if(temp>=3)
    {
		cout<<"\n\t\t\tHey Friend!....SORRY!....U'r Login Limit Is Finish!\n";
	}

}
void reg()
{
	string reg_username,reg_password;
	system("cls");
	cout<<"\n\n\t\t Enter Username :";
	cin>>reg_username;
	cout<<"\n\n\t\t Enter Register Password :";
	cin>>reg_password;
	
	ofstream save("database.txt",ios::app);
	save<<reg_username<<' '<<reg_password<<endl;
	system("cls");
	cout<<"\n\t\t\t\t\t!!....Registration Is Successfull....!!\n\n";
}

void log()
{
	char ch;
	do
	{
		system("cls");
		cout<<"\n\t\t\t\tWELCOME!...To Car Showroom Management System!\n\n";
		cout<<"\n\n\t\t1.Register\n\n\t\t2.Login\n\n\t\t3.Close The Apllication\n\n\t\t\tEnter Your Choise : ";
		cin>>ch;
		switch(ch)
		{
			case '1':
					reg();
			break;
			case '2':
					login();
			break;
			case '3':exit(0);
			break;
			default:
					cout<<"\n\t\t\t\t\t---------Invalid choice---------\n\n";
		}
	}while(ch!=3);
	
}

int main()
{
	log();
	return 0;
} 

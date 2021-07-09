#include<bits/stdc++.h>
#include<windows.h>
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;

class student{
public: string fname,lname,roll_no,course,p_no,gmail,c,s,d,p,l,droll;
	void start();
	void meanu();
	void input();
	void dis();
	void modify();
	void search();
	void del();
};
/*****************************************************************************************************************
******************************************************start(  )****************************************************
******************************************************************************************************************/
void student::start()
{
	system("color 5");
	int count=20;
	char x=219;
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t|-----------------------------------------------|"<<endl;
	cout<<"\t\t\t|         DEVELOPER-AMITABH CHAURASIA           |"<<endl;
	cout<<"\t\t\t|               STUDENT OF LPU                  |"<<endl;
	cout<<"\t\t\t|GITHUB-ID:https://github.com/Amitabhchaurasia  |"<<endl;
	cout<<"\t\t\t|-----------------------------------------------|"<<endl;
	cout<<"\t\t\t        LOADING:";
	
	while(count!=0)
	{	cout<<x;
		count--;
		Sleep(200);	
	}
	 meanu();
}


/*--------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------MEANU FUNCTION-------------------------------------------------------------------------*/
void student::meanu()
{	
	system("cls");
	system("color 5");
	int choice;
	char key;
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t|------------------------|"<<endl;
	cout<<"\t\t\t|STUDENT MANGEMENT SYSTEM|"<<endl;
	cout<<"\t\t\t|------------------------|"<<endl;
	cout<<endl<<endl;
	cout<<"\t\t\t--------------------------"<<endl;
	cout<<"\t\t\t| 1.ENTER THE NEW RECORD |"<<endl;
	cout<<"\t\t\t| 2.DISPLAY RECORED      |"<<endl;
	cout<<"\t\t\t| 3.MODIFY RECORD        |"<<endl;
	cout<<"\t\t\t| 4.SEARCH RECORED       |"<<endl;
	cout<<"\t\t\t| 5.DELETE RECOREDS      |"<<endl;
	cout<<"\t\t\t| 6.EXITS                |"<<endl;
	cout<<"\t\t\t--------------------------"<<endl;
	cout<<"\t\t\t CHOOSE OPTION [1 TO 6]  ";
	cin>>choice;
	switch(choice)
	{
		case 1: 
		do{
			input();	
		cout<<"\n\t\t\t--------------DO YOU WANT TO ADD MORE DETAILS---------"<<endl;
		cout<<"\t\t\t--------------------------(Y/N)-------------------------"<<endl;
		cin>>key;
		
		} while(key=='y'||key=='Y');
		meanu();
		break;
		
		case 2:
			dis();
			break;
		case 3:
			modify();
			break;
		case 4:
			search();
			break;
		
		case 5:
				del();
				break;
		case 6:
			system("cls");
			cout<<"$$$|#|SYSTEM CLOSE|#|$$$"<<endl;
			exit(0);
		default :
			system("cls");
			cout<<"\t\t\t----YOU ENETR THE WROUNG VALUE----"<<endl;
			cout<<"\t\t\t----------------------------------"<<endl;
			cout<<"\t\t\t----ENTER THE VAILD CHOICE--------"<<endl;
			cout<<"\t\t\t----------------------------------"<<endl;
			cout<<"\t\t\t---PRESS ANY KEY FOR MAIN MEANU---"<<endl;
			getch();
			meanu();		
	}	
}

/*--------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------data inserting--------------------------------------------------*/
void student::input ()
{	system("cls");
	
	cout<<"\t\t\t*************************"<<endl;
	cout<<"\t\t\t****ADDING NEW RECORD****"<<endl;
	cout<<"\t\t\t*************************"<<endl;
	cout<<endl;
	cout<<endl;
	/*****************************************************/
	
	cout<<"\t\t\tENTER THE FIRST NAME:";
	cin>>fname;	
	cout<<"\t\t\tENTER THE LAST NAME:";
	cin>>lname;
	cout<<"\t\t\tENTER THE ROLL_NO:";
	cin>>roll_no;
	cout<<"\t\t\tENTER THE COURSE:";
	cin>>course;
	cout<<"\t\t\tENTER THE CONTACT_NO:";
	cin>>p_no;
	cout<<"\t\t\tENTER THE GAMIL:";
	cin>>gmail;
	cout<<"\t\t\tENTER THE COUNTRY:";
	cin>>c;
	cout<<"\t\t\tENTER THE STATE:";
	cin>>s;
	cout<<"\t\t\tENTER THE DISTIC:";
	cin>>d;
	cout<<"\t\t\tENTER THE POST-OFFICE:";
	cin>>p;
	cout<<"\t\t\tENTER THE LAND-MARK:";
	cin>>l;
	ofstream sdata;
	sdata.open("student.txt",ios::app);
	sdata<<fname<<" "<<lname<<" "<<roll_no<<" "<<course<<" "<<p_no<<" "<<gmail<<" "<<c<<" "<<s<<" "<<d<<" "<<p<<" "<<l<<endl;
	sdata.close();
	
}

/*-------------------------------------------------------------------------------
----------------------DISPLAYING FUNCTION----------------------------------------*/
void student::dis()
{	system("cls");
int count=0;
	cout<<"\t\t\t*************************"<<endl;
	cout<<"\t\t\t**********RECORDE********"<<endl;
	cout<<"\t\t\t*************************"<<endl;
	
	/*************************************************
	**************************************************
	******************************************************/
	int n;
	ifstream tdata;
	tdata.open("student.txt");
	tdata>>fname>>lname>>roll_no>>course>>p_no>>gmail>>c>>s>>d>>p>>l;
	while(!tdata.eof())
	{	cout<<"\t\t\tNAME:"<<fname<<" "<<lname<<endl;
		cout<<"\t\t\tROLL_NO:"<<roll_no<<endl;
		cout<<"\t\t\tCOURSE:"<<course<<endl;
		cout<<"\t\t\tCONTACT:"<<p_no<<endl;
		cout<<"\t\t\tGMAIL:"<<gmail<<endl;
		cout<<"\t\t\tADDERSS:"<<c<<" "<<s<<" "<<d<<" "<<p<<" "<<l<<endl;
		cout<<endl;
		tdata>>fname>>lname>>roll_no>>course>>p_no>>gmail>>c>>s>>d>>p>>l;
		count++;
	}
	cout<<endl<<endl;
	if(count==0)
	{
		cout<<"\t\t\tDATA NOT PRESENT"<<endl;
		cout<<endl;
	}
	tdata.close();
	/*__________________________________________________________*/
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\tPRESS ANY KEY FOR MAIN MENU"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	getch();
	meanu();
}
/****************************************************************
*****************************************************************
*****************************************************************/

void student::modify()
{	int count=0;
	system("cls");
	cout<<"\t\t\tENTER THE  ROLL WHICH YOU WANT TO modify"<<endl;
	cin>>droll;
	ifstream dd;
	dd.open("student.txt",ios::app);
	ofstream e;
	e.open("new.txt",ios::app);
	dd>>fname>>lname>>roll_no>>course>>p_no>>gmail>>c>>s>>d>>p>>l;
	while(!dd.eof())
	{
		if(droll!=roll_no)
		{	
			e<<fname<<" "<<lname<<" "<<roll_no<<" "<<course<<" "<<p_no<<" "<<gmail<<" "<<c<<" "<<s<<" "<<d<<" "<<p<<" "<<l<<endl;
			
		}
		else
		{
		
	cout<<"\t\t\tENTER THE FIRST NAME:";
	cin>>fname;	
	cout<<"\t\t\tENTER THE LAST NAME:";
	cin>>lname;
	cout<<"\t\t\tENTER THE ROLL_NO:";
	cin>>roll_no;
	cout<<"\t\t\tENTER THE COURSE:";
	cin>>course;
	cout<<"\t\t\tENTER THE CONTACT_NO:";
	cin>>p_no;
	cout<<"\t\t\tENTER THE GAMIL:";
	cin>>gmail;
	cout<<"\t\t\tENTER THE COUNTRY:";
	cin>>c;
	cout<<"\t\t\tENTER THE STATE:";
	cin>>s;
	cout<<"\t\t\tENTER THE DISTIC:";
	cin>>student::d;
	cout<<"\t\t\tENTER THE POST-OFFICE:";
	cin>>p;
	cout<<"\t\t\tENTER THE LAND-MARK:";
	cin>>l;
	e<<fname<<" "<<lname<<" "<<roll_no<<" "<<course<<" "<<p_no<<" "<<gmail<<" "<<c<<" "<<s<<" "<<d<<" "<<p<<" "<<l<<endl;
		}
	dd>>fname>>lname>>roll_no>>course>>p_no>>gmail>>c>>s>>d>>p>>l;

	}
	e.close();
	dd.close();
	remove("student.txt");
	rename("new.txt","student.txt");

	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\tPRESS ANY KEY FOR MAIN MENU"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	getch();
	meanu();
	
}
/*--------------------------------------------------------------------------
-----------------------------------search_function--------------------------
---------------------------------------------------------------------------*/

void student::search()
{	int count=0;
	system("cls");
	cout<<"\t\t\t*************************"<<endl;
	cout<<"\t\t\t**********RECORDE********"<<endl;
	cout<<"\t\t\t**********SEARCH*********"<<endl;
	cout<<"\t\t\t*************************"<<endl;
	cout<<endl;
	/*************************************************
	**************************************************
	******************************************************/
	ifstream sea;
	sea.open("student.txt");
	
	if(!sea)
	{
		cout<<"/t/t/t**DATA NOT PRESENT**"<<endl;
		
	}
	else
	{
		cout<<"\t\t\tENTER THE ROLL_NO:";
			cin>>droll;
			sea>>fname>>lname>>roll_no>>course>>p_no>>gmail>>c>>s>>d>>p>>l;
			
		while(!sea.eof())
		{
			if(droll==roll_no)
			{
			cout<<"\t\t\tNAME:"<<fname<<" "<<lname<<endl;
			cout<<"\t\t\tROLL_NO:"<<roll_no<<endl;
			cout<<"\t\t\tCOURSE:"<<course<<endl;
			cout<<"\t\t\tCONTACT:"<<p_no<<endl;
			cout<<"\t\t\tGMAIL:"<<gmail<<endl;
			cout<<"\t\t\tADDERSS:"<<c<<" "<<s<<" "<<d<<" "<<p<<" "<<l<<endl;
			sea>>fname>>lname>>roll_no>>course>>p_no>>gmail>>c>>s>>d>>p>>l;
			cout<<endl;
			count++;
			}
		
			sea>>fname>>lname>>roll_no>>course>>p_no>>gmail>>c>>s>>d>>p>>l;
			
		}
		
		sea.close();
	}
	if(count==0)
	{	cout<<endl;
		cout<<"\t\t\tDATA NOT PRESENT"<<endl;
	}
	cout<<"\t\t\tPRESS ANY KEY FOR MAIN MENU"<<endl;
	getch();
	meanu();
}
/*****************************************************************************
*******************************del( )*******************************************
******************************************************************************/
void student::del()
{
	system("cls");
	int count=0;
	cout<<"\t\t\tENTER THE  ROLL WHICH YOU WANT TO DELETE";
	cin>>droll;
	ifstream dd;
	dd.open("student.txt");
	ofstream e;
	e.open("new.txt");
	dd>>fname>>lname>>roll_no>>course>>p_no>>gmail>>c>>s>>d>>p>>l; 
	while(!dd.eof())
	{
		if(roll_no==droll)
		{ cout<<"\t\t\t\tFILE DELETED"<<endl;
		
		}
		else
		{
			e<<fname<<" "<<lname<<" "<<roll_no<<" "<<course<<" "<<p_no<<" "<<gmail<<" "<<c<<" "<<s<<" "<<d<<" "<<p<<" "<<l<<endl;
			
		}
		dd>>fname>>lname>>roll_no>>course>>p_no>>gmail>>c>>s>>d>>p>>l; 
		count++;
	}

	e.close();
	dd.close();
	remove("student.txt");
	rename("new.txt","student.txt");
	

	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\tPRESS ANY KEY FOR MAIN MENU"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t****************************"<<endl;
	getch();
	meanu();
}

/*******************************main**************************************************************
**************************************************************************************************
**************************************************************************************************
****************************************************************************************************/
int main()
{	void start();
	
	student rec;
	rec.start();
	return 0;
}

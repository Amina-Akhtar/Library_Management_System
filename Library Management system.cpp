//#include <iostream>
//#include <fstream>
//#include <stdio.h>
//#include <string>
//#include<windows.h>     //for text/bg color and sleep function
//
//HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
//using namespace std;
//
////global variables
//
//int var = 0, var1 = 0, var2 = 0, choice = 0;
//int hint = 0, hint1 = 0, treasury = 0;
//string loginid;
//int lib;
//int diff;
//
//
////structs
//
//struct bookdetail {
//	string title, author, edition, isbn, total;
//};
//bookdetail a1[100];
//
//struct information {
//	string title, author, edition, isbn, total;
//};
//information info[100];
//
//struct returnbook {
//	string idnum, book, author, isbn, edition, date;
//};
//returnbook retbook[100];
//
//struct avaiablity {
//	string name, author;
//	int availability = 0;
//};
//avaiablity avail[100];
//
//struct recbook {
//	string name, author, edition;
//};
//recbook rec[100];
//
//
//
////functions
//
//int stoq(string str)
//{
//	int x = 0;
//	for (int i = 0; i < str.length(); i++)
//	{
//		x = x * 10 + (str[i] - 48);
//	}
//	return x;
//}
//
//void Librarianmenu()
//{
//	system("CLS");
//	system("color 8F");
//	cout << "\n\t\t\tWELCOME TO CASTLEROCK LIBRARY!\n\n";
//	cout << "\t\tLIBRARIAN MENU\t\t" << endl;
//	cout << "\t\t----------------\n";
//	cout << "\t\t1.Book Addition" << endl;
//	cout << "\t\t2.Book Removal" << endl;
//	cout << "\t\t3.Log Out" << endl;
//	cout << "\t\t----------------\n";
//inp2:
//	cout << "What do you want to do: ";
//	cin >> lib;
//	system("color 8F");
//	if (lib < 1 || lib>3)
//	{
//		cout << "Invalid Entry" << endl;
//		goto inp2;
//	}
//}
//
//void welcome()
//{
//	int idk;
//	system("color 8F");
//	cout << "\t\t\t\tWELCOME TO THE CASTLEROCK LIBRARY!" << endl;
//	cout << "\n\t\tYou are the first person to have ever entered this library" << endl;
//	cout << "\n\t\tI as ghost-bot order you to fill this library with books ^_^" << endl;
//	cout << "\n\t\t\t\tI hope you oblige to my order" << endl;
//	cout << "\nPress 1 to continue:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	cin >> idk;
//	system("color 8F");
//}
//
//void functional()
//{
//	system("CLS");
//	system("color 8F");
//	cout << "\n\t\t\t\tWELCOME TO THE CASTLEROCK LIBRARY!" << endl;
//inp1:
//
//	cout << "\n\nPress 1 for Student";
//	cout << "\nPress 2 for Librarian\n";
//	cout << "\n-------------------------------------------------------------------------------------------------------\n";
//	cout << "\nEnter your choice:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	cin >> diff;
//	system("color 8F");
//	if (diff < 1 || diff>2)
//	{
//		system("CLS");
//		system("color 64");
//		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!Invalid Entry!!!" << endl;
//		Sleep(1000);
//		system("CLS");
//		system("color 8F");
//		goto inp1;
//	}
//
//}
//
//void lsignUp()
//{
//	system("CLS");
//	system("color 71");
//	cout << "\n\t\t\tSIGN UP\n";
//	string name, idnum, pass, dep;
//	cout << "\nEnter Your Following Details:\n";
//	cout << "\nName:";
//	cin.ignore();
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, name);
//	system("color 71");
//	cout << "\nID Number:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, idnum);
//	system("color 71");
//	cout << "\nPassword:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, pass);
//	system("color 71");
//
//	ofstream signup;
//	signup.open("lids.txt", ios::out | ios::app);
//	signup << name << "," << idnum << "," << pass << ",";
//	signup.close();
//
//}
//
//void lsignIn()
//{
//	system("CLS");
//	system("color 71");
//	string number;
//	string password;
//	string name, idnum, pass;
//	int iflag = 0;
//	int pflag = 0;
//	cout << "\n\t\t\tSIGN IN\n";
//	cout << "\nEnter Your Following Log In Details:\n";
//start:
//
//	cout << "\nID Number:";
//	cin.ignore();
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, idnum);
//	system("color 71");
//
//input:
//	cout << "\nPassword:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, pass);
//	system("color 71");
//	ifstream help;
//	int phint = 0;
//	int ihint = 0;
//	help.open("lids.txt", ios::app);
//	while (!help.eof())
//	{
//
//		getline(help, number, ',');
//		if (number == idnum)
//		{
//			loginid = idnum;
//
//			ihint++;
//			getline(help, password, ',');
//			if (password == pass)
//			{
//				system("CLS");
//				system("color 71");
//				cout << "\n\n\n\t\t\tYou've Signed In!" << endl;
//				Sleep(1000);
//				system("color 71");
//				phint++;
//				break;
//
//			}
//
//		}
//
//
//	}
//	if (ihint == 0)
//	{
//		cout << "\n\n\t\t\t\tIncorrect ID number" << endl;
//		cout << "-------------------------------------------------------------------------------------------" << endl;
//		iflag++;
//		if (iflag < 3)
//		{
//			goto start;
//		}
//	}
//	if (phint == 0)
//	{
//		cout << "\n\t\t\t\tIncorrect Password" << endl;
//		cout << "-------------------------------------------------------------------------------------------" << endl;
//		pflag++;
//		if (pflag < 3)
//		{
//			goto input;
//		}
//	}
//
//	char redirect = ' ';
//	if ((iflag >= 3) || (pflag >= 3))
//	{
//		cout << "\n\t\t\tIt look like you are not Signed Up :(" << endl;
//	again:
//		cout << "\n\nPress 'U' to Sign Up" << endl;
//		cout << "Press 'I' to try Sign In again" << endl;
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		cin >> redirect;
//		system("color 71");
//		if ((redirect != 'i') && (redirect != 'I') && (redirect != 'u') && (redirect != 'U'))
//		{
//			system("CLS");
//			system("color 64");
//			cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!Invalid Entry!!!" << endl;
//			Sleep(1000);
//			system("CLS");
//			system("color 71");
//			goto again;
//		}
//		if ((redirect == 'u') || (redirect == 'U'))
//		{
//			lsignUp();
//			lsignIn();
//
//		}
//		if ((redirect == 'i') || (redirect == 'I'))
//		{
//			lsignIn();
//		}
//	}
//	help.close();
//}
//
//void lbookadd()
//{
//	system("CLS");
//	system("color 75");
//	string treasure;
//	ifstream fine;
//	fine.open("treasury.txt");
//	getline(fine, treasure, ',');
//	fine.close();
//
//	int tres;
//	tres = stoq(treasure);
//	char decis = ' ';
//	cout << "\n\t\t\tBOOK ADDITION\n";
//
//	cout << endl;
//	cout << endl;
//	char recc;
//	cout << "To access recommended books press 'R': ";
//	cin >> recc;
//
//	if (recc == 'r' || recc == 'R')
//	{
//
//		int ind = 0;
//		string name, author, edition;
//		ifstream get;
//		get.open("recbooks.txt");
//		if (get.fail())
//		{
//			cout << "There are no recommended books present." << endl;
//		}
//		while (!get.eof())
//		{
//			ind++;
//			getline(get, name, ',');
//			rec[ind].name = name;
//			getline(get, author, ',');
//			rec[ind].author = author;
//			getline(get, edition, ',');
//			rec[ind].edition = edition;
//
//		}
//		get.close();
//		system("color 75");
//		cout << "\t\t\t\t\tRecommended books" << endl;
//
//		cout << "Title" << "\t" << "Author" << "\t" << "Edition" << endl;
//
//		for (int i = 1; i < ind; i++)
//		{
//			cout << rec[i].name << "\t" << rec[i].author << "\t" << rec[i].edition << endl;
//		}
//
//	}
//	cout << "\n\nAdditon of a Book Costs Rs.100" << endl;
//	cout << "The current amount in treasury is Rs." << tres << endl;
//	Sleep(1500);
//
//	if (tres == 0)
//	{
//		system("CLS");
//		system("color E4");
//		cout << "\n\n\t\t\tSorry! You Can not Add New Books in the Library as Your Treasury is Empty :(";
//		Sleep(1000);
//		system("color 75");
//	}
//	else
//	{
//		cout << "\nTo add a book press 'y': ";
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		cin >> decis;
//		system("color 75");
//
//
//		while (decis == 'y' && tres > 0)
//		{
//
//			cout << "Book Title:";
//			cin.ignore();
//			SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//			getline(cin, a1[var].title);
//			system("color 75");
//			cout << "Author:";
//			SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//			getline(cin, a1[var].author);
//			system("color 75");
//			cout << "\nEdition:";
//			SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//			getline(cin, a1[var].edition);
//			system("color 75");
//			cout << "\nISBN:";
//			SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//			getline(cin, a1[var].isbn);
//			system("color 75");
//			cout << "Enter the total number of this book avaiable in library." << endl;
//			SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//			getline(cin, a1[var].total);
//			system("color 75");
//
//
//			string available;
//			available = a1[var].total;
//			ofstream jerry;
//			jerry.open(a1[var].title + ".txt", ios::out);
//			jerry << a1[var].title << "," << a1[var].author << "," << a1[var].edition << "," << a1[var].isbn << "," << a1[var].total << ",";
//			jerry.close();
//			ofstream ava;
//			ava.open(a1[var].title + ".available.txt", ios::out | ios::app);
//			ava << a1[var].title << "," << a1[var].author << "," << available << ",";
//			ava.close();
//			var++;
//			system("CLS");
//			system("color 75");
//			cout << "\n\n\n\t\t\tBook successfully added!" << endl;
//			tres -= 100;
//			cout << "\n\n\t\t\tAmount in treasury: Rs." << tres << endl;
//			cout << endl;
//			cout << "Press y to add another book";
//			SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//			cin >> decis;
//			system("color 75");
//			if (tres == 0)
//			{
//				system("CLS");
//				system("color E2");
//				cout << "\n\n\n\t\t\tThe Treasury is Empty Now" << endl;
//				Sleep(1000);
//			}
//		}
//
//		ofstream fin;
//		fin.open("treasury.txt");
//		fin << tres << ",";
//		fin.close();
//	}
//
//}
//
//void bookremoval()
//{
//	system("CLS");
//	system("color 73");
//	int status;
//	char filename[50];
//	cout << "\n\t\t\tBOOK REMOVAL\n";
//	cout << "\nEnter the Name of Book (with .txt): ";
//	cin.ignore();
//	cin.get(filename, 50);
//
//	status = remove(filename);
//	if (status == 0)
//	{
//		system("CLS");
//		system("color 73");
//		cout << "\n\n\t\t\tFile Deleted Successfully!";
//		Sleep(1000);
//		system("color 73");
//
//	}
//	else
//	{
//		system("CLS");
//		system("color 74");
//		cout << "\n\n\n\t\t\tError Occurred!";
//		Sleep(1000);
//		system("color 73");
//	}
//	cout << endl;
//}
//
//void signUp()
//{
//	system("CLS");
//	system("color 71");
//	string name, idnum, pass, dep;
//	//cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
//
//	cout << "\n\t\t\t\tSIGN UP\n";
//	cout << "\n\nTo sign up please enter your following details\n";
//	cout << "\nName:";
//	cin.ignore();
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, name);
//	system("color 71");
//	cout << "\nID number(Format:XXLXXXX):";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, idnum);
//	system("color 71");
//	//cout << "\n\t\t\t Set a Strong Password that No Other Ghost-Walker Can Guess ";
//	cout << "\nPassword:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, pass);
//	system("color 71");
//	cout << "\nDepartment:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, dep);
//	system("color 71");
//
//	ofstream signup;
//	signup.open("ids.txt", ios::out | ios::app);
//	signup << name << "," << idnum << "," << pass << ",";
//	signup.close();
//	system("CLS");
//	system("color 71");
//	cout << "\n\n\n\n\n\n\n\t\t\tCongratulation! You are now in possession of a student account in CastleRock Library!" << endl;
//	//cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
//	Sleep(1000);
//	system("color 71");
//}
//
//void signupwel()
//{
//	int d = 0;
//	system("CLS");
//	system("color 8F");
//	cout << "\t\t\t\t\t         WELCOME TO THE CASTLEROCK LIBRARY!!" << endl;
//	cout << "\t    As the first Ghost-Walker, you are Cordially Invited to Roam and Haunt the Hallways of CastleRock" << endl;
//	cout << "\tYou can Gain Access to more than 10,000 Old Folktales as well as Contemporary Science and Technology Books" << endl;
//	cout << "\t\t\t    \tYou can get all these perks and more, with just a free sign-up!" << endl;
//back:
//	//cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
//
//	cout << "\n\t\t\t    \t\t\tPress '1' to continue. ";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	cin >> d;
//	system("color 8F");
//
//	if (d == 1)
//	{
//		signUp();
//	}
//	else
//	{
//		system("CLS");
//		system("color 64");
//		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!Invalid Entry!!!" << endl;
//		Sleep(1000);
//		system("CLS");
//		system("color 8F");
//
//		goto back;
//	}
//
//}
//
//void menu()
//{
//
//	system("CLS");
//	system("color 8F");
//dec:
//	cout << "\t\t\t\t        WELCOME TO CASTLEROCK HOMEPAGE!" << endl;
//	cout << "\n\t\t\t\t\t\t      MENU" << endl;
//	cout << "\t\t\t\t\t\t1. Borrow a book          \n";
//	cout << "\t\t\t\t\t\t2. Read a book online     \n";
//	cout << "\t\t\t\t\t\t3. Search a book          \n";
//	cout << "\t\t\t\t\t\t4. Return a book          \n";
//	cout << "\t\t\t\t\t\t5. Recommend a book       \n";
//	cout << "\t\t\t\t\t\t6. Sign Out  \n\n";
//	cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
//	cout << "\nWhat do you want to Explore: ";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	cin >> choice;
//	system("color 8F");
//	if (choice < 1 || choice>6)
//	{
//		system("CLS");
//		system("color 64");
//		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!Invalid Entry!!!" << endl;
//		Sleep(1000);
//		system("CLS");
//		system("color 8F");
//
//		goto dec;
//	}
//	//cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
//
//}
//
//void recommendBook()
//{
//	system("CLS");
//	system("color 76");
//	string recbook, recauthor, recedition;
//	cout << "\n\t\t\tRECOMMEND A BOOK\n";
//	cout << "\n\nEnter the Following Details of the Book You want to Recommend:\n";
//	cout << "\nName:";
//	cin.ignore();
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, recbook);
//	system("color 76");
//	cout << "\nAuthor:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, recauthor);
//	system("color 76");
//	cout << "\nEdition:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, recedition);
//	system("color 76");
//
//	ofstream place;
//	place.open("recbooks.txt", ios::out | ios::app);
//	place << recbook << "," << recauthor << "," << recedition << ",";
//	place.close();
//
//	cout << "\n---------------------------------------------------------\n";
//	cout << "\nPress 'Y' to Recommend Another Book" << endl;
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	cout << "\n\t\t\tEntering Anything Else Will Take You Back To The Main Menu" << endl;
//	char decision = ' ';
//	cin >> decision;
//	system("color 76");
//	if (decision == 'y' || decision == 'Y')
//	{
//		recommendBook();
//	}
//	else
//	{
//		menu();
//	}
//
//}
//
//void signIn()
//{
//	system("CLS");
//	system("color 71");
//	string number;
//	string name, idnum, pass;
//
//	cout << "\n\t\t\tSIGN IN\n";
//	cout << "\nPlease enter your following details\n";
//
//start:
//
//	cout << "\nID number:";
//	cin.ignore();
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, idnum);
//	system("color 71");
//	//input:
//	cout << "\nEnter password:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, pass);
//	system("color 71");
//
//	ifstream help;
//
//	string password;
//	int phint = 0;
//	int ihint = 0;
//	help.open("ids.txt", ios::app);
//	while (!help.eof())
//	{
//		getline(help, number, ',');
//		if (number == idnum)
//		{
//			loginid = idnum;
//
//			ihint++;
//			getline(help, password, ',');
//			if (password == pass)
//			{
//				system("CLS");
//				system("color 71");
//				cout << "\n\n\n\n\n\n\n\n\t\t\t\t\tYou have Signed In :)" << endl;
//				Sleep(1000);
//				system("color 71");
//				phint++;
//				break;
//			}
//		}
//	}
//	int iflag = 0;
//	int pflag = 0;
//	if (ihint == 0)
//	{
//
//		cout << "\n\n\t\t\t\tIncorrect ID number" << endl;
//		cout << "-------------------------------------------------------------------------------------------" << endl;
//
//		iflag++;
//	}
//	if (phint == 0)
//	{
//		cout << "\n\t\t\t\tIncorrect Password" << endl;
//		cout << "-------------------------------------------------------------------------------------------" << endl;
//
//		pflag++;
//	}
//	char redirect = ' ';
//	if (iflag >= 1 || pflag >= 1)
//	{
//		cout << "\n\t\t\tIt look like you are not Signed Up :(" << endl;
//	again:
//		cout << "\n\nPress 'U' to Sign Up" << endl;
//		cout << "Press 'I' to try Sign In again" << endl;
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		cin >> redirect;
//		system("color 71");
//		if ((redirect != 'i') && (redirect != 'I') && (redirect != 'u') && (redirect != 'U'))
//		{
//			system("CLS");
//			system("color 71");
//			cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!Invalid Entry!!!" << endl;
//			Sleep(1000);
//			system("CLS");
//			system("color 71");
//			goto again;
//		}
//		if ((redirect == 'i') || (redirect == 'I'))
//		{
//			cout << "-------------------------------------------------------------------------------------------" << endl;
//			goto start;
//		}
//		if ((redirect == 'u') || (redirect == 'U'))
//		{
//			//cout << "-------------------------------------------------------------------------------------------" << endl;
//			signUp();
//			signIn();
//		}
//	}
//	help.close();
//}
//
//void finetrack(int fine)
//{
//	ofstream fin;
//	fin.open("fines.txt", ios::out | ios::app);
//	fin << loginid << "," << fine << ",";
//	fin.close();
//
//}
//
//void bookaddition()
//{
//	system("CLS");
//	system("color 8F");
//	ofstream ch;
//	ch.open("check.txt", ios::out);
//	ch.close();
//	char decis = ' ';
//
//	system("color E5");
//	cout << "\n\t\t\t\t\tBOOK ADDITION\n\n";
//
//
//	do {
//		system("color 8F");
//		cout << "\n------------------------------------------------------------------------------\n";
//		cout << "\nEnter title:";
//		system("color 8F");
//		cin.ignore();
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		getline(cin, a1[var].title);
//		system("color 8F");
//		cout << "\nEnter author:";
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		getline(cin, a1[var].author);
//		system("color 8F");
//		cout << "\nEnter edition:";
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		getline(cin, a1[var].edition);
//		system("color 8F");
//		cout << "\nEnter isbn:";
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		getline(cin, a1[var].isbn);
//		system("color 8F");
//		cout << "\nEnter the total number of this book avaiable in library:";
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		getline(cin, a1[var].total);
//		system("color 8F");
//
//		string available;
//		available = a1[var].total;
//		ofstream jerry;
//		jerry.open(a1[var].title + ".txt", ios::out);
//		jerry << a1[var].title << "," << a1[var].author << "," << a1[var].edition << "," << a1[var].isbn << "," << a1[var].total << ",";
//		jerry.close();
//		ofstream ava;
//		ava.open(a1[var].title + ".available.txt", ios::out | ios::app);
//		ava << a1[var].title << "," << a1[var].author << "," << available << ",";
//		ava.close();
//		var++;
//
//		cout << "\nPress y to add another book:";
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		cout << "\n\t\t Entering anything else will termiate the Book Addition function" << endl;
//		//system("color E5");
//		cin >> decis;
//		cout << "----------------------------------------------------------------------------------------" << endl;
//
//	} while (decis == 'y');
//}
//
//void informationload(string name)
//{
//
//	ifstream read;
//	read.open(name + ".txt");
//
//	string ititle, iauthor, iedition, iisbn, itotal;
//
//	getline(read, ititle, ',');
//	info[var1].title = ititle;
//	getline(read, iauthor, ',');
//	info[var1].author = iauthor;
//	getline(read, iedition, ',');
//	info[var1].edition = iedition;
//	getline(read, iisbn, ',');
//	info[var1].isbn = iisbn;
//	getline(read, itotal, ',');
//	info[var1].total = itotal;
//
//
//	read.close();
//
//}
//
//void searchBook()
//{
//	system("CLS");
//
//	string nauthor, ntitle, nisbn;
//check:
//	cout << "\n\t\t\tSEARCH FOR A BOOK\n\n";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//
//	system("color 73");
//	int hint = 0;
//
//	cout << "Enter Book Name: ";
//	cin.ignore();
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, ntitle);
//	system("color 73");
//	ifstream access;
//	access.open(ntitle + ".txt");
//	if (access.fail())
//	{
//		char choice1 = ' ';
//		cout << "\n\nBook doesn't exist";
//		cout << "\n\nPress 'R' to Recommend Book." << endl;
//		cout << "Press 'S' to Search For Another Book" << endl;
//		cout << "\nEntering Anything Else Will Take You Back To The Main Menu." << endl;
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		cin >> choice1;
//		system("color 73");
//		if (choice1 == 's' || choice1 == 'S')
//		{
//			searchBook();
//		}
//		else if (choice1 == 'r' || choice1 == 'R')
//		{
//			recommendBook();
//		}
//		else
//		{
//			menu();
//			hint1++;
//		}
//	}
//	else
//	{
//		char g = ' ';
//		informationload(ntitle);
//		cout << "\nBook Name:" << info[var1].title << endl;
//		cout << "Author:" << info[var1].author << endl;
//		cout << "ISBN:" << info[var1].isbn << endl;
//		cout << "Edition:" << info[var1].edition << endl;
//		cout << "\n--------------------------------------------\n";
//		cout << "Press enter to go back to menu: ";
//		cin.get(g);
//	}
//
//
//}
//
//void borrowbook()
//{
//	system("CLS");
//	ifstream book;
//	char deci;
//	string date;
//	char choice = ' ';
//
//help:
//	cout << "\n\t\t\tBORROW A BOOK\n";
//	cout << "\nPress O to search the details of the book";
//	cout << "\nPress B to continue\n";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	cin >> choice;
//	system("color 75");
//	if ((choice != 'o') && (choice != 'O') && (choice != 'b') && (choice != 'B'))
//	{
//		system("CLS");
//		system("color 64");
//		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!Invalid Entry!!!" << endl;
//		Sleep(1000);
//		system("CLS");
//		system("color 75");
//		goto help;
//	}
//
//	if ((choice == 'o') || (choice == 'O'))
//	{
//		searchBook();
//		goto ag;
//	}
//	if ((choice == 'b') || (choice == 'B'))
//	{
//		goto ag;
//	}
//
//
//ag:
//
//	string bname, bauthor, bisbn, bedition;
//	system("CLS");
//	cout << "\n\t\t\tBORROW A BOOK\n";
//	cout << "\nPlease Enter the following details of book you want to borrow\n";
//	cout << "\nBook Name: ";
//	cin.ignore();
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, bname);
//	system("color 75");
//	cout << "\nAuthor Name: ";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, bauthor);
//	system("color 75");
//
//INP:
//	cout << "\nISBN(4 digits): ";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, bisbn);
//	system("color 75");
//
//	if (bisbn < "1000" || bisbn>"9999")
//	{
//		system("CLS");
//		system("color 64");
//		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!Invalid Entry!!!" << endl;
//		Sleep(1000);
//		system("CLS");
//		system("color 75");
//		goto INP;
//	}
//	cout << "\nBook Edition: ";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, bedition);
//	system("color 75");
//
//	book.open(bname + ".txt");
//
//	if (book.fail())
//	{
//		cout << "\n---------------------------------------------------------------------\n";
//		cout << "\t\t\t\t\t    Your Requested Book is not Available in the Library." << endl;
//		cout << "\n\nPress 'R' to Recommend a Book" << endl;
//		cout << "Press 'B' to Borrow Another Book" << endl;
//		cout << "\nPressing any other key will take you back to Main Menu" << endl;
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		cin >> deci;
//		system("color 75");
//		if (deci == 'r' || deci == 'R')
//		{
//			recommendBook();
//
//		}
//		if (deci == 'b' || deci == 'B')
//		{
//			borrowbook();
//		}
//		else
//		{
//			menu();
//		}
//
//	}
//	else {
//		int chck = 0;
//		int calc = 0;
//		char why = 0;
//		string cname, cauthor, cavail;
//		int var2 = -1;
//		informationload(bname);
//
//		if (info[var1].author == bauthor)
//		{
//			if (info[var1].edition == bedition)
//			{
//				if (info[var1].isbn == bisbn)
//				{
//					ifstream change;
//					change.open(bname + ".available.txt");
//
//					var2++;
//					getline(change, cname, ',');
//					avail[var2].name = cname;
//					getline(change, cauthor, ',');
//					avail[var2].author = cauthor;
//					getline(change, cavail, ',');
//
//					avail[var2].availability = stoq(cavail);
//					change.close();
//
//					system("CLS");
//					system("color 75");
//					cout << "\n\n\n\n\t\t\tYour requested book is found" << endl;
//					cout << "\n\t\t\t\t         Checking avaiability. . ." << endl;
//					Sleep(1000);
//
//					if (avail[var2].name == bname && avail[var2].author == bauthor)
//					{
//						if (avail[var2].availability < 1)
//						{
//							cout << "\n\t\t\t       Unfortunately, This book is Issued." << endl;
//							cout << "\n\n Enter '1' to Borrow Another Book." << endl;
//							SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//							cin >> why;
//							system("color 75");
//							if (why == '1')
//							{
//								goto help;
//							}
//							else
//							{
//								system("CLS");
//								system("color 64");
//								cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!Invalid Entry!!!" << endl;
//								Sleep(1000);
//								system("CLS");
//								system("color 75");
//
//							}
//						}
//						else
//						{
//							system("CLS");
//							system("color 75");
//							cout << "\n\n\n\n\t\t\t\tThe book is available :)" << endl;
//							Sleep(1000);
//						}
//					}
//
//
//					chck++;
//				}
//			}
//		}
//
//
//
//
//		if (chck == 0)
//		{
//			system("CLS");
//			system("color 74");
//			cout << "\n\n\n\n\t\t\tThe Information Entered Does Not Match With The Book" << endl;
//			Sleep(1000);
//		}
//		else
//		{
//
//			int need = 0;
//
//
//			if (avail[var2].name == bname && avail[var2].author == bauthor)
//			{
//				avail[var2].availability--;
//			}
//			ofstream upd;
//			upd.open(bname + ".available.txt");
//			upd << avail[var2].name << "," << avail[var2].author << "," << avail[var2].availability << ",";
//			upd.close();
//
//			char decision = ' ';
//
//			ofstream lend;
//			lend.open("lending.txt", ios::out | ios::app);
//
//			cout << "\n\nEnter the Issuance Date : " << endl;
//			SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//			getline(cin, date);
//			system("color 75");
//			system("CLS");
//			system("color 75");
//			cout << "\n\n\n\t\t\t\t\tYou Have To Return The Book Within 7 Days Otherwise You Will Be FINED" << endl;
//			cout << "\n\t\t\t\t\t  The Fine After The Returning Date is Rs.100 per Day" << endl;
//			Sleep(1000);
//
//			lend << loginid << "," << info[var1].title << "," << info[var1].author << "," << info[var1].isbn << "," << info[var1].edition;
//			lend.close();
//		}
//	}
//}
//
//void readOnline()
//{
//	system("CLS");
//	char choice = ' ';
//help:
//	cout << "\n\t\t\tREAD ONLINE\n";
//	cout << "\nPress 'S' to Search Details of a Book";
//	cout << "\nPress 'R' to continue\n";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	cin >> choice;
//	system("color 72");
//	if ((choice != 'r') && (choice != 'R') && (choice != 's') && (choice != 'S'))
//	{
//		system("CLS");
//		system("color 64");
//		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!Invalid Entry!!!" << endl;
//		Sleep(1000);
//		system("CLS");
//		system("color 72");
//		goto help;
//	}
//
//	if ((choice == 's') || (choice == 'S'))
//	{
//		searchBook();
//		goto ag;
//	}
//	if ((choice == 'R') || (choice == 'r'))
//	{
//		goto ag;
//	}
//ag:
//	system("CLS");
//	cout << "\n\t\t\tREAD ONLINE\n";
//	string rbook, rauthor, risbn, redition;
//	cout << "\nEnter The Following Details Of The Book You Want To Read:\n";
//	cout << "\nBook Name:";
//	cin.ignore();
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, rbook);
//	system("color 72");
//	cout << "\nAuthor:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, rauthor);
//	system("color 72");
//INP:
//	cout << "\nISBN:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, risbn);
//	system("color 72");
//	if (risbn < "1000" || risbn>"9999")
//	{
//
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		cout << "\n\t\t\tInvalid ISBN\n\t\t\tPlease Enter Again " << endl;
//		system("color 72");
//		goto INP;
//	}
//	cout << "\nEdition:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, redition);
//	system("color 72");
//	ifstream ron;
//	ron.open(rbook + ".txt");
//
//	if (ron.fail())
//	{
//		char deci = ' ';
//		cout << "\n\n\t\t\tYour Requested Book Is Not Available In The Library" << endl;
//		cout << "\nPress 'R' to Recommend a Book" << endl;
//		cout << "Press 'O' to Read Any Other Book" << endl;
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		cout << "\n\t\t\tPressing any other key will take you back to menu." << endl;
//		cin >> deci;
//		system("color 72");
//		if (deci == 'r' || deci == 'R')
//		{
//			recommendBook();
//
//		}
//		if (deci == 'o' || deci == 'O')
//		{
//			readOnline();
//
//		}
//		else
//		{
//			menu();
//			hint++;
//
//
//		}
//
//	}
//
//	else if (hint == 0) {
//		informationload(rbook);
//
//		if (info[var1].author == rauthor)
//		{
//			if (info[var1].edition == redition)
//			{
//				if (info[var1].isbn == risbn)
//				{
//					char ok;
//					system("CLS");
//					system("color 72");
//					cout << "\n\n\n\t\t\t\tYour requested book is found" << endl;
//					cout << "\n\t\t\tTo be redirected to the reading page click the link displayed." << endl;
//					cout << endl;
//					cout << "-This feature is currently unavailable-" << endl;
//					cout << "-Till you can access this feature here's a link to an amazing nivel for you-" << endl;
//					cout << endl;
//					cout << "LINK: https://archive.org/details/bachpan-ka-dec_202108/page/n2/mode/1up?view=theater" << endl;
//					cout << "To continue press enter: ";
//					cin.get(ok);
//
//				}
//			}
//		}
//		else
//		{
//			system("CLS");
//			system("color 64");
//			cout << "\n\n\n\t\t\tThe information entered doesn't match with the respective book" << endl;
//			Sleep(1000);
//		}
//	}
//}
//
//void returnBook()
//{
//	system("CLS");
//	system("color 70");
//	string rbook, rauthor, redition, risbn;
//	int rdate, fine, chk;
//	int var = 0;
//	cout << "\n\t\t\tRETURN BOOK\n";
//	cout << "\n\nEnter the Following Details of the Book You are Returning:\n";
//	cout << "\nName:";
//	cin.ignore();
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, rbook);
//	system("color 70");
//	cout << "\nAuthor:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, rauthor);
//	system("color 70");
//	cout << "\nISBN:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, risbn);
//	system("color 70");
//	cout << "\nEdition:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	getline(cin, redition);
//	system("color 70");
//	cout << "\nEnter the number of days for which the book was in your possession:";
//	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//	cin >> rdate;
//	system("color 70");
//
//
//	string iidnum, iname, iauthor, iisbn, iedition;
//
//	ifstream read;
//
//	read.open("lending.txt");
//	while (!read.eof())
//	{
//		var2++;
//		if (read.eof())
//		{
//			var2--;
//			break;
//		}
//		getline(read, iidnum, ',');
//		retbook[var2].idnum = iidnum;
//		getline(read, iname, ',');
//		retbook[var2].book = iname;
//		getline(read, iauthor, ',');
//		retbook[var2].author = iauthor;
//		getline(read, iisbn, ',');
//		retbook[var2].isbn = iisbn;
//		getline(read, iedition, ',');
//		retbook[var2].edition = iedition;
//	}
//
//
//
//	int ind = 0, chek = 0;
//	for (ind = 1; ind <= var2; ind++)
//	{
//		if (retbook[ind].idnum == loginid)
//		{
//			if (retbook[ind].book == rbook)
//			{
//				if (retbook[ind].author == rauthor)
//				{
//					if (retbook[ind].isbn == risbn)
//					{
//						if (retbook[ind].edition == redition)
//						{
//							chek++;
//							int back = 1;
//							system("CLS");
//							system("color 70");
//							cout << "\n\n\n\t\t\tYour Book has been Successfully Returned!" << endl;
//							Sleep(1000);
//							ofstream okay;
//							okay.open("lending.txt");
//
//							for (back = ind; back <= var2; back++)
//							{
//								retbook[back].idnum = retbook[back + 1].idnum;
//								retbook[back].book = retbook[back + 1].book;
//								retbook[back].author = retbook[back + 1].author;
//								retbook[back].isbn = retbook[back + 1].isbn;
//								retbook[back].edition = retbook[back + 1].edition;
//
//							}
//							for (int plz = 0; plz < var2; plz++)
//							{
//								okay << retbook[plz].idnum << "," << retbook[plz].book << "," << retbook[plz].author << "," << retbook[plz].isbn << ",";
//							}
//
//							okay.close();
//							if (rdate > 7)
//							{
//								//system("CLS");
//								//system("color 64");
//								cout << "\n\n\n\t\t\tYou have a Fine Due!" << endl;
//								fine = (rdate - 7) * 100;
//								cout << "\t\tYour Calculated Fine is Rs." << fine << "/- only :) " << endl;
//								cout << "\t\tPay Your Due Fine through Online Transfer ASAP" << endl;
//								cout << "\t\t\tIf You Have Paid Press 1" << endl;
//								SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//								cin >> chk;
//								system("color 70");
//								if (chk == 1)
//								{
//									//system("color E5");
//									treasury += fine;
//									cout << "\n\n\t\t\tThankyou! Next Time Be On Time!" << endl;
//									//Sleep(1000);
//									finetrack(fine);
//									ofstream fout;
//									fout.open("treasury.txt", ios::out);
//									fout << treasury << ",";
//									fout.close();
//
//								}
//								else
//								{
//
//									cout << "\n\t\t\tPlease Pay at the Earliest " << endl;
//									//Sleep(1000);
//								}
//
//							}
//
//						}
//
//					}
//				}
//			}
//		}
//
//	}
//	if (chek == 0)
//	{
//		//system("CLS");
//		//system("color 64");
//		cout << "\n\nThe information entered doesn't match with your borrowed book" << endl;
//		//Sleep(1000);
//		//system("color E5");
//	}
//}
//
//
//int main()
//{
//	system("color 8F");
//	ifstream first;
//	first.open("check.txt");
//	if (first.fail())
//	{
//		welcome();
//		bookaddition();
//		signupwel();
//		system("CLS");
//		system("color 8F");
//		cout << "\n\n\n\n\n\n\n\n\t\t\tCongratulations you have made this library functional :)" << endl;
//		Sleep(1000);
//	}
//
//
//	functional();
//
//	//student domain functions
//	if (diff == 1)
//	{
//	inp:
//		system("CLS");
//		cout << "\n\t\t\t\t\t\tWELCOME STUDENT!!" << endl;
//		cout << "\t\t\t\t\t  YOUR FIRST TASK OF THE DAY!!" << endl;
//		//cout << "\n\nPress" << endl;
//		cout << "\nPress '1' to Sign Up" << endl;
//		cout << "Press '2' to Sign In" << endl;
//		//cout << "\t\t\t\t      \t\t\t\t";
//		int intro;
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		cin >> intro;
//		system("color 8F");
//		if (intro < 1 || intro>2)
//		{
//			system("CLS");
//			system("color 64");
//			cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!Invalid Entry!!!" << endl;
//			Sleep(1000);
//			system("CLS");
//			system("color 8F");
//
//			goto inp;
//		}
//
//		if (intro == 1)
//		{
//			signUp();
//		}
//		if (intro == 2)
//		{
//			signIn();
//		}
//
//		do
//		{
//			menu();
//		start:
//			if (choice == 1)
//			{
//				borrowbook();
//			}
//			if (choice == 2)
//			{
//				readOnline();
//				if (hint != 0)
//				{
//					goto start;
//				}
//			}
//
//			if (choice == 3)
//			{
//				searchBook();
//				if (hint1 != 0)
//				{
//					goto start;
//				}
//			}
//
//			if (choice == 4)
//			{
//				returnBook();
//			}
//
//			if (choice == 5)
//			{
//				recommendBook();
//			}
//
//			if (choice == 6)
//			{
//				system("CLS");
//				system("color 8F");
//				cout << "\n\n\n\t\t\tYou have successfully signed out!" << endl;
//				Sleep(1000);
//			}
//
//		} while (choice != 6);
//	}
//
//	//librarian domain functions;
//
//	if (diff == 2)
//	{
//		int exist;
//		system("CLS");
//		system("color 8F");
//		cout << "\n\t\t\tHELLO LIBRARIAN!\n";
//		cout << "\nPress '1' to Sign Up";
//		cout << "\nPress '0' to Sign In" << endl;
//		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
//		cin >> exist;
//		system("color 8F");
//		if (exist == 1)
//		{
//			lsignUp();
//		}
//		if (exist == 0)
//		{
//			lsignIn();
//		}
//
//
//		do {
//
//			system("CLS");
//			Librarianmenu();
//
//			if (lib == 1)
//			{
//				lbookadd();
//			}
//
//			if (lib == 2)
//			{
//				bookremoval();
//			}
//			if (lib == 3)
//			{
//				system("CLS");
//				system("color E2");
//				cout << "\n\n\n\t\t\tYOU HAVE SUCCESSFULLY LOGGED OUT!";
//				Sleep(1000);
//				break;
//			}
//
//		} while (true);
//	}
//
//
//}

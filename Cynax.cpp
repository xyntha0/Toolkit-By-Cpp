#include <iostream>
#include <fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
class toolkit {
	public:
	void interface (){
				system ("cls");
	cout<< "\t\t®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®"<<endl;
	cout<< "\t\t          ||        ®®®         ||      "<<endl;
	cout<< "\t\t          ||         ®          ||    "<<endl;
	cout<< "\t\t (¯´•._.• ||  Cynax Toolkit V.1 || •._.•´¯)"<<endl;
	cout<< "\t\t          ||         ®          ||   "<<endl;
	cout<< "\t\t          ||        ®®®         ||      "<<endl;
	cout<< "\t\t®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®"<<endl;
	cout << "\n\n\n\t\t•> (1) Bio\n\t\t•> (2) Enter Toolkit ";
		
	}
	void interface2(){
		system ("CLS");
						cout<<"\t\t :---:---:----:---:"<<endl;
						cout<<"\t\t :----------------:"<<endl;
						cout<< "\t\t  Active Domains  "<<endl;
						cout<<"\t\t :----------------:"<<endl;
						cout<<"\t\t :----------------:"<<endl<<endl<<endl;
		
						cout<< "\t\t1--) Cynax Cipher"<<endl;
	
						cout<< "\t\t2--) Cynax Hash "<<endl;
	
						cout<< "\t\t3--) Cynax Firewall"<<endl;
						
		
						cout<< "\t\t4--) Cynax Password Generator"<<endl;
						cout<< "\t\t5--) Cynax ImageER"<<endl<<endl;
						cout<< "\t\tEnter Your Choice : "; 
	}
	void interface3 (){
						system ("cls");
	cout<< "\t\t®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®"<<endl;
	cout<< "\t\t          ||        ®®®         ||      "<<endl;
	cout<< "\t\t          ||         ®          ||    "<<endl;
	cout<< "\t\t (¯´•._.• ||Thank You For Using || •._.•´¯)"<<endl;
	cout<< "\t\t          ||         ®          ||   "<<endl;
	cout<< "\t\t          ||        ®®®         ||      "<<endl;
	cout<< "\t\t®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®®"<<endl;
	getchar();
	}
};
bool sec;
class security : private toolkit {

	private:
		string name,pass;
		int id;
	public:
		void setname (string n)
		{
			name=n;
		}
		string getname (){
			return name;
		}
		void setpass (string p)
		{
			pass=p;
		}
		string getpass (){
			return pass;
		}
		void setid (int i)
		{
			id=i;
		}
		int getid (){
			return id;
		}
		void authentication(){
			system ("cls");
			int x;string p;
			cout<< "\t\t      Wait A Minute Who Are You O_o"<<endl<<endl;
	cout<< "\t\t 	  1 >--<> Shuja <>--< ?" <<endl;
	cout<< "\t\t 	  2 >--<> Umair <>--< ?" <<endl;
	cout<< "\t\t 	  3 >--<> Sufian<>--< ?" <<endl;
	cout<< "\t\t\t   ";cin>>x;
	if (x==1){
		p="Shuja";
	}
	if (x==2){
		p="Umair";
	}
	if (x==3){
		p="Sufian";
	}
	cout<< "\t\t   >--<>--<>--<"<<p<<" Prove Yourself>--<>--<>--<"<<endl<<endl;
			string nn,pp;
			int ii;
			cout<<endl <<"\t\tEnter Your Nick Name : ";cin>>nn;
			setname(nn);
		    if (((nn=="SHUJA")|| (nn =="SUFIAN") || (nn=="UMAIR"))){
			cout<< "\t\t"<<getname()<<" Now You Have To Complete 2-Step Authentication : "<<endl<<endl;
			cout<< "\t\tEnter Your (5-Digit) Login ID : ";cin>>ii;
			setid(ii);
			if (id==12345)
			
					{
						cout<< "\t\tHold On...! Last Step Left :"<<endl<<endl;
						cout<< "\t\tEnter Your Login Paswword : ";cin>>pp;
						setpass(pp);
							if ((nn == "SHUJA" && pp=="shahlove") || (nn== "UMAIR" && pp == "miki") || (nn=="SUFIAN" && pp== "sufi")){
								sec=true;
								
						}
						else 
						{
						
							cout<<"\t\tInvalid Password...!";
							sec=false;
						}
					}
					else
					{
					
					cout<< "\t\t"<<name<< "Your Id IS Ivalid...! ";
					sec=false;
				}
				}
				else
				{
				
				cout<<"\n\n\t\t"<<name<<" Your Name Not Found In List Of Admins...!";
				sec=false;
			}
			}
	
};
class tools: private  toolkit{
	public:
		unsigned int SHF();
		void cipher(){
			
			cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t::Welcome To Cynax Cipher Machine::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\n\n\nUse(_)Underscores Instead of Blank Spaces" << endl;

                cout << "Enter the message:" << endl;
                char msg[100];
                char ch;
                string pk;
                cin >> msg;
                cout<< "Hash Of Entered Message Is : "<<SHF(msg)<<endl;
                int i = 0, w = 5, j, choice, key;

                cout << "Enter key: ";
                cin >> pk;//take the key as input
                if (pk == "bhai")
                {
                    cout << "Miki And Sufian Cipher Conversation Activated...!\n";
                    key = 5;
                }
                if (pk == "gamer")
                {
                    cout << "Umair And Shah Jee Cipher Conversation Activated...!\n";
                    key = 3;
                }
                if (pk == "capstan")
                {
                    cout << "Sufian And Shah Jee Cipher Conversation Activated...!\n";
                    key = 7;
                }
                cout << "Enter your choice \n1. Encryption \n2. Decryption \n";
                cin >> choice;
                if (choice == 1) //for encryption
                {

                    for (int i = 0; msg[i] != '\0'; ++i) {
                        ch = msg[i];
                        //encrypt for lowercase letter
                        if (ch >= 'a' && ch <= 'z') {
                            ch = ch + key;
                            if (ch > 'z') {
                                ch = ch - 'z' + 'a' - 1;
                            }
                            msg[i] = ch;
                        }
                        //encrypt for uppercase letter
                        else if (ch >= 'A' && ch <= 'Z') {
                            ch = ch + key;
                            if (ch > 'Z') {
                                ch = ch - 'Z' + 'A' - 1;
                            }
                            msg[i] = ch;
                        }
                    }
                    cout << "The Encrypted Message is = \n";cout << msg;
                }
                if (choice == 2) {//for decryption
                    char ch;
                    for (int i = 0; msg[i] != '\0'; ++i) {
                        ch = msg[i];
                        //decrypt for lowercase letter
                        if (ch >= 'a' && ch <= 'z') {
                            ch = ch - key;
                            if (ch < 'a') {
                                ch = ch + 'z' - 'a' + 1;
                            }
                            msg[i] = ch;
                        }


                        //decrypt for uppercase letter
                        else if (ch >= 'A' && ch <= 'Z') {
                            ch = ch - key;
                            if (ch < 'A') {
                                ch = ch + 'Z' - 'A' + 1;
                            }
                            msg[i] = ch;
                        }
                    }
                    cout << "Decrypted message is = \n " << msg;
                    cout<< "Hash Of Decryped Message Is : "<<SHF(msg)<<endl;


                }
            }
unsigned int SHF (string input)
{
unsigned int init = 123456432;
unsigned int magic = 567537;
unsigned int hash;
for (int i = 0; i< input.length(); i++)
{
hash = hash ^ (input[i]);
hash = hash * magic;
}
return hash;
}
		void hash(){
			cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t::Welcome To Cynax Hash Machine::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
		char x[100];
		cout<<endl<<"Enter Text: ";
 		cin>>x;
  		cout << "Hashed Value Is = " << SHF (x);
  		getchar();
			
		}
		char bytefromtext(unsigned char* text)
{   
    char result = 0;
    for(int i=0;i<8;i++)
    {
        if(text[i]=='1')
        {
            result |= (1 << (7-i));
        }
    }
    return result;
}

		void cynaximagenc()
		{
				cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t::   Welcome To Cynax ImageER    ::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
				int ch1;
	cout<<"Select Any :\n1--Image To Binary\n2--Binary To Image ";cin>>ch1;
	if (ch1==1)
	{
			FILE *ptr_bmp_in;
			FILE *ptr_text_out;
			int c;
 			char fn[30];
   			 cout<<"Enter the Name of Image: ";
   			 cin>>fn;

ptr_bmp_in=fopen(fn,"rb");
ptr_text_out=fopen("I2B.txt","w");

if(!ptr_bmp_in)
{
    printf("Unable to open file\n");
    
}

while((c=fgetc(ptr_bmp_in)) != EOF)
    {
        for(int i=0;i<=7;i++)
        {
            if(c&(1<<(7-i)))
            {
                fputc('1',ptr_text_out);
            }
            else
            {
                fputc('0',ptr_text_out);
            }
        }
    }
    cout<<"Image Coverted In Binary Form!!!";
	}
	else if(ch1==2)
	{
		FILE *ptr_txt_in;
 		FILE *ptr_bmp_out;
		unsigned char buf[8];
		int c;
		int j = 0;
		char FNN[30];
   			 cout<<"Enter the Name of Binary File: ";
   			 cin>>FNN;
 

ptr_txt_in=fopen(FNN,"r");
ptr_bmp_out=fopen("BinaryToImg.jpg","wb");


if(!ptr_txt_in)
{
    printf("Unable to open file\n");
   
}

while((c=fgetc(ptr_txt_in)) != EOF)
    {
        buf[j++] = c;
        if(j==8)
        {
            fputc(bytefromtext(buf),ptr_bmp_out);
            j=0;
        }
    }


    fclose(ptr_txt_in);
    fclose(ptr_bmp_out);
    cout<<"Writing Done ! ! !";
	}
	


    int ch;
    cout<<"Select Any : \n1--For Encrypting The File \n2--For Decrypting The File ";cin>>ch;
    if(ch==1)
    {
    	     char fileName[30], ch;
   			 fstream fps, fpt;
   			 cout<<"Enter the Name of File: ";
   			 cin>>fileName;
   		
    fps.open(fileName, fstream::in);
    if(!fps)
    {
        cout<<"\nError Occurred, Opening the Source File (to Read)!";
     
    }
    fpt.open("tmp.txt", fstream::out);
    if(!fpt)
    {
        cout<<"\nError Occurred, Opening/Creating the tmp File!";
     
    }
    while(fps>>noskipws>>ch)
    {
        ch = ch+100;
        fpt<<ch;
    }
    fps.close();
    fpt.close();
    fps.open(fileName, fstream::out);
    if(!fps)
    {
        cout<<"\nError Occurred, Opening the Source File (to write)!";
    
    }
    fpt.open("tmp.txt", fstream::in);
    if(!fpt)
    {
        cout<<"\nError Occurred, Opening the tmp File!";
        
    }
    while(fpt>>noskipws>>ch)
        fps<<ch;
    fps.close();
    fpt.close();
    cout<<"\nFile '"<<fileName<<"' Encrypted Successfully!";
    cout<<endl;
    
}
else if (ch==2)
{
	 char fileName[30], ch;
    fstream fps, fpt;
    cout<<"Enter the Name of File: ";
    cin>>fileName;
    fps.open(fileName, fstream::out);
    if(!fps)
    {
        cout<<"\nError Occurred while Opening the Source File!";
        
    }
    fpt.open("tmp.txt", fstream::in);
    if(!fpt)
    {
        cout<<"\nError Occurred while Opening/Creating tmp File!";
      
    }
    while(fpt>>noskipws>>ch)
    {
        ch = ch-100;
        fps<<ch;
    }
    fps.close();
    fpt.close();
    cout<<"\nFile '"<<fileName<<"' Decrypted Successfully!";
    cout<<endl;
}
	}
		
		void firewall(){
				cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t::  Welcome To Cynax Firewall  ::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
			 char site[20],ch;
    ifstream in;
    ofstream out;
	int i;
	cout<< "To Block A Site Press 1 : \nTo Unblock All Sites Press 2 : ";
	cin>> i;
	if (i==1){
	
    cout<<"Enter the Name of the Site to Block \n";
    cin>>site;

    out.open("C:/Windows/System32/drivers/etc/hosts",ios::app);
    if(!out){
	
        cout<<"Either File Not Found or Permission Denied, Run as Admin the EXE of the Program";}
    else
    {
	
	
    out<<"127.0.0.1"<<"\t"<<site;}
    out.close();
    cout << "\nBlocked";
    system ("pause");
}
	if (i==2)
       {

     out.open("C:/Windows/System32/drivers/etc/hosts");
     if(!out)
     {
	 cout<<"File Not Found(not for linux)";
	 }
     else
     {
	 out<<"\n127.0.0.1"<<"\t"<<"localhost";
	 cout<<"\nAll site are unblocked";

     }
     out.close();
 }
 if (i!=1&&i!=2)
 {
 	cout << "Invalid ";
 }
			
		}
		void pg(){
			cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t::Welcome To Cynax Password Machine::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
                cout << "\t\t:::::::::::::::::::::::::::::::::::" << endl;
	const char alphanum2[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int string_length2 = sizeof(alphanum2);
	const char alphanum3[] = "0123456789!@#$%^&*<>;]abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int string_length3 = sizeof(alphanum3);
	 int n;
    cout<<"Enter the length of password:";
    cin>>n;
    int ch;
    cout<<"For Easy Pasword (Only Numbers) Press 1:\nFor Medium Password Press 2:\nFor Strong Pasword Press 3:";
    cin>>ch;
    if (ch==1)
    {
    srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < n; i++)
    cout << rand() % 10;
	}
	if (ch==2)
	{
	
    srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < n; i++)
    cout << alphanum2[rand() % string_length2];
   }
	if (ch==3)
{
	 srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < n; i++)
    cout << alphanum3[rand() % string_length3];
}
			
		}
};
class info : private toolkit {
	public:
		int i;
		char x;
	void data(){
		
	
		system ("CLS");
		
		do {
		
		cout<< "\t\t1>>Data of Umair "<<endl;
		cout<< "\t\t2>>Data Of Shujja"<<endl;
		cout<< "\t\t3>>Data Of Sufian"<<endl;
		 cin>>i;
		if (i==1){
			cout<< "Name : Umair Sabir \nClass : BsCys-2B\nContact XYZ\n Occupation : Student";
		}
				if (i==2){
			cout<< "Name : Shujja Abubaker \nClass : BsCys-2B\nContact XYZ\n Occupation : Student";
		}
				if (i==3){
			cout<< "Name : Sufian Aziz \nClass : BsCys-2B\nContact XYZ\n Occupation : Student";
		}
		cout<< "\nDo You Want To Continue Y/N ? "<<endl;cin>>x;
	}
	while (x=='Y'||x=='y');
	
}
};
int main (){
	toolkit t1;
	info d1;
	security ss;
	tools tt1;
	char ff;
	do {
	t1.interface();
	int x;
	cin>>x;
	if (x==1){
		d1.data();
	}
	else if (x==2){
	start:
	ss.authentication();
	char fch;
	if (sec==true){
		char ch;
		do {
			t1.interface2();
			int chh;
			char ch;
			cin>>chh;
			if (chh==1){
				do {
				
				tt1.cipher();
				cout<<endl<<"Use Cipher Again Y/N ? ";cin>>ch;
					}
			while (ch=='Y'||ch=='y');
						}
			if (chh==2)
			{
				do {
				
					tt1.hash();
					cout<<endl<<"Use Hash Again Y/N ? ";cin>>ch;
				}
				while (ch=='Y'||ch=='y');
			}
			if (chh==3)
			{
				do {
				
				tt1.firewall();
					cout<<endl<<"Use Firewall Again Y/N ? ";cin>>ch;
			}
			while (ch=='Y'||ch=='y');
		}
			if (chh==4)
			{
				do {
				
			tt1.pg();
				cout<<endl<<"Use Password Generator Again Y/N ? ";cin>>ch;
			}
			while (ch=='Y'||ch=='y');
		}
					if (chh==5)
			{
				do {
				
				tt1.cynaximagenc();
					cout<<endl<<"Use Image Encryptor Again Y/N ? ";cin>>ch;
			}
			while (ch=='Y'||ch=='y');
		}
				
			cout<<endl<<"Use Toolkit Again Y/N ? ";cin>>fch;
		}
			while (fch=='Y'||fch=='y');
		
	
	}
	else  {
			goto start;

		}
	}
	else 
	{
		cout << "Invalid";
	}
	cout<< "Restart ToolKit ? Y/N ";cin>>ff;
	
}
while (ff=='y'||ff=='y');
	t1.interface3();

	}

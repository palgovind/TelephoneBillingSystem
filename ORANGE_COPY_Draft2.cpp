#include<iostream>
#include<fstream.h>
#include<iomanip.h>
#include<math.h>
#include<cmath>
#include<stdio.h>
//#include<cstdio>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<ctype.h>
#include<dos.h>
#include "windows.h"
#include<stdlib.h>

using namespace std;

void gotoxy(int x,int y){
     
 COORD coord;
 coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);    
}
     
class account
{
      char name[30];
      char address[60];
      long acc_no;
      long phone_no;
      public:
        void addi();
        void modify();
        void del();
        void display();
        void generate();
        void help();
};
account obj;

//int bil_ctr=1;

/*int numdigits(int n)
    {
    return(log10(n)+1);
   }*/

/*char *mon(int m)
{
 switch(m)
   {
    case(1):
            return("Jan");
    case(2):
            return("Feb");
    case(3):
            return("Mar");
    case(4):
            return("Apr");
    case(5):
            return("May");
    case(6):
            return("Jun");
    case(7):
            return("July");
    case(8):
            return("Aug");
    case(9):
            return("Sep");
    case(10):
             return("Oct");
    case(11):
             return("Nov");
    case(12):
             return("Dec");
       }
       
    }
*/
int main()

    {   double param, result;
  param = 5.5;
  result = log (param);
  printf ("log(%f) = %f\n", param, result );

      char ch1,ch2;
       
      while(1)
         {
         system("cls");
         //clrscr();
         gotoxy(30,5);
         cout<<"Supreme Telecom Pvt.Ltd";
         gotoxy(30,6);
         cout<<"___________________________";
         gotoxy(30,8);
         cout<<"Manage customer records";
         gotoxy(30,10);
         cout<<"Display list of customers";
         gotoxy(30,12);
         cout<<"Generate bill";
         gotoxy(30,14);
         cout<<"Help";
         gotoxy(30,16);
         cout<<"Exit";
         gotoxy(30,30);
         cout<<"Enter your choice";
         ch1=getch();
         ch1=toupper(ch1);
         switch(ch1)
             {
               case('D'):
               //obj.display();
               break;
               case('G'):
               //obj.generate();
               break;
               case('H'):
               //obj.help();
               break;
               case('E'):
               //clrscr();
               system("cls");
               exit(1);
               case('M'):
               ch2='A';
                do
                  {
                     system("cls");  
                    //clrscr();
                    gotoxy(30,5);
                    cout<<"supreme Telecom Pvt. Ltd";
                    gotoxy(30,6);
                    cout<<"_______________";
                    gotoxy(30,8);
                    cout<<"Add new record";
                    gotoxy(30,10);
                    cout<<"modify existing record";
                    gotoxy(30,12);
                    cout<<"Delete existing record";
                    gotoxy(30,14);
                    cout<<"Exit";
                    gotoxy(30,30);
                    cout<<"Enter your choice";
                    ch2=getch();
                    ch2=toupper(ch2);
                      switch(ch2)
                       {
                       case('A'):
                       obj.addi();
                       break;
                       case('M'):
                       //obj.modify();
                       break;
                       case('D'):
                       //obj.del();
                       break;
                       case('E'):
                       break;
                       }//End of inner switch block
                } while(ch2!='E');//End of do while block
             }//End of outer switch case
        }      
      system("pause");
       return 0;   
     } 
        
void account::addi()
{
     char ch1;
     ofstream fptr1;
     
     fptr1.open("db.dat",ios::app);
     
     
     if(fptr1.fail())
       {
        cout<<"Cannot open the db.dat file";
        getch();
        
        return;
        }
   system("cls");
   //clrscr();
   gotoxy(30,5);
   cout<<"Enter the new customers details";
   while(1){
            gotoxy(30,8);
            cout<<"Name:";
             gets(name);
       if(strlen(name)==0)
         {
          gotoxy(30,30);
         // clreol();
          cout<<"Name cannot be left blank";
          }
         else
         { gotoxy(30,30);
         //clreol();
         }
        break;  
       }
   while(1)
          {
          gotoxy(30,10);
          cout<<"Address";
          gets(address);
          if(strlen(address)==0)
          {
          gotoxy(30,30);
          //void clreol();
          cout<<"Address cannot be left bank";
          }
          else
          {
          gotoxy(30,30);
          //void clreol();
          }
          break;
        }
   while(1)
           {
           gotoxy(30,12);
           cout<<"Phone_no:";
           cin>>phone_no;
           //if(numdigits(phone_no)!=7)
             // {
              gotoxy(54,12);
            //  void clreol(void );
            //  gotoxy(30,30);
            //void clreol(void);
              cout<<"\n Phone no must be of 7 digits";
              //}
           //else
             // {
              //gotoxy(30,30);
             // void clreol(void );
              //  }
          break;    
           }
    while(1)
        {
        gotoxy(30,14);
        cout<<"Acc_no:";
        cin>>acc_no;
     /*   if(numdigits(acc_no)!=5)
        {
        gotoxy(54,14);
        //void clreol(void);
        gotoxy(30,30);
        //void clreol(void );
        cout<<"Account no must be of five digits";
        }
        else
        {
        gotoxy(30,30);
        //void clreol(void );
       }*/
        break;
     }
     gotoxy(30,30);
        cout<<" 'S'ave and Exit";
        gotoxy(30,32);
        cout<<" 'E'xit without saving";
        ch1=getch();
        ch1=toupper(ch1);
        switch(ch1){
                    case ('S'):
                         fptr1.write((char*)this,sizeof(obj));
                         fptr1.close();
                         //return;
                         break;
                    case ('E'):
                         fptr1.close();
                         //return;
                         break;     
                    }      
       }//End of add

        
        
        
        
        
        
              
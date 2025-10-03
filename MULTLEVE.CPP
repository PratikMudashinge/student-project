#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{
   public:
   char name[20];
   int age;
   void get()
   {
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    }
    void disp()
    {
    cout<<"name:"<<name<<endl;
    cout<< "age:"<<age<<endl;
    }
    };
    class employe:public person
    {
     public:
     int emp_id;
     char desti[50];
     void in()
     {
     get();
     cout<<"Enter the employe ID:";
     cin>>emp_id;
     cout<<"Enter destignation:";
     cin>>desti;
     }
     void out()
     {
     disp();
     cout<<"Employe id:"<<emp_id<<endl;
     cout<<"Destignation:"<<desti<<endl;
     }
     };
     class teacher:public employe
     {
     public:
     char sub[50];
     int exper;
     void input()
     {
      in();
      cout<<"Enter subject:";
      cin>>sub;
      cout<<"Experience:";
      cin>>exper;
      }
      void output()
      {
      out();
      cout<<"Subject:"<<sub<<endl;
      cout<<"Experience:"<<exper<<endl;
      }
      };
      void main()
      {
	clrscr();
	teacher t;
	cout<<"---Enter teacher deatails---\n";
	t.input();
	cout<<"\n----Teacher details----";
	t.output();
	getch();
	}
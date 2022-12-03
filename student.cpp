#include<iostream>
#include<string>
#include<iomanip>


using namespace std;

class student
{
    int rollno;
    string name;
    string gender;
    int age;
    string standard;

public:
    void getdata()
    {
        cout<<"Enter the Details of Student:"<<endl;
        cout<<"ROLL NO:";
        cin>>rollno;
        cout<<"NAME:";
        cin>>name;
        cout<<"GENDER:";
        cin>>gender;
        cout<<"AGE:";
        cin>>age;
        cout<<"STD:";
        cin>>standard;
    }
    void showData()
    {

        cout<<"enter the details";
        cout<<"\nrollno:"<<rollno<<endl;
        cout<<"\nname:"<<name<<endl;
        cout<<"\ngender:"<<gender<<endl;
        cout<<"\nage:"<<age<<endl;
        cout<<"\nstandard:"<<standard<<endl;

    }
    void heading()
    {
        cout.setf(ios::left);
        cout<<setw(10)<<"ROLL NO.";
        cout<<setw(20)<<"NAME";
        cout<<setw(10)<<"GENDER";
        cout<<setw(10)<<"AGE";
        cout<<setw(10)<<"STANDARD";
        cout<<endl;

    }
    void listdata()
    
    {
        cout.setf(ios::left);
        cout<<setw(10)<<rollno;
        cout<<setw(20)<<name;
        cout<<setw(10)<<gender;
        cout<<setw(10)<<age;
        cout<<setw(10)<<standard;
        cout<<endl;
        
    }
};
int main()
{ 
    student s[4];
    int i;
    for(i=0;i<4;i++)
    {
        cout<<"Enter the detail for Record No.: "<<i+1<<endl;
        s[i].getdata();
    }
    cout<<endl<<endl;
    s[0].heading();
    for(i=0;i<4;i++)
    {
        
        s[i].listdata();
    
    }
    
};        
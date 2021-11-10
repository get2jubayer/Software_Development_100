#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<cstring>
using namespace std;
class flat
{
public:
    void menu();
    void admin();
    void customer();
    void change_pass();
    void help_line();
    void add_flat();
    void display_flat();
    void check_flat();
    void edit_flat();
    void delete_flat();
    void add_sflat();
    void add_rflat();
    void d_sflat();
    void d_rflat();
    void check_rflat();
    void check_sflat();
    void edit_sflat();
    void edit_rflat();
    void delete_sflat();
    void delete_rflat();
    void pass();
    void password();
    void ccr();
    void ccs();
    void brent();
    void bbuy();
    void bookings();
    void booking_sale();
    void booking_rent();
    void check_b_r();
    void check_b_b();
    void edit_info_r();
    void edit_info_b();
    void cbookings();
    void c_b_r();
    void c_b_b();
    void a_c_b_s();
    void a_c_b_r();

};
void flat::menu()
{
p:
    system("cls");
    system("color 8F");
    int choice;
    cout<<"\n\t\t\t**********************************";
    cout<<"\n\n\t\t\t\tControl Panel";
    cout<<"\n\t\t\t**********************************";
    cout<<"\n\n\n\n\t1.Admin";
    cout<<"\n\t2.Customer";
    cout<<"\n\t3.Exit";
    cout<<"\n\nEnter Your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        pass();

    case 2:
        customer();
    case 3:
        exit(0);
    default:
        cout<<"\n\n Invalid value ....please try again";
    }
    getch();
    goto p;

}
void flat::pass()
{
    system("cls");
    int i=0;
    char ch,st[21],ch1[21]= {"pass"};
    cout<<"\n\n\n\n\n\t\t\t\t\t\tEnter Password : ";
    while(1)
    {
        ch=getch();
        if(ch==13)
        {
            st[i]='\0';
            break;
        }
        else if(ch==8&&i>0)
        {
            i--;
            cout<<"\b \b";
        }
        else
        {
            cout<<"*";
            st[i]=ch;
            i++;
        }
    }
    ifstream inf("password.txt");
    inf>>ch1;
    inf.close();
    for(i=0; st[i]==ch1[i]&&st[i]!='\0'&&ch1[i]!='\0'; i++);
    if(st[i]=='\0'&&ch1[i]=='\0')
    {

        admin();
    }
    else
    {
        cout<<"\n\n\t\tWrong Password.\n\n\t\ttry again.....\n";
        getch();

        menu();
    }
}
void flat::password()
{
    int i=0,j=0;
    char ch,st[21],ch1[21]= {"pass"};
    system("cls");
    cout<<"\n\n\t\tEnter Old Password : ";
    while(1)
    {
        ch=getch();
        if(ch==13)
        {
            st[i]='\0';
            break;
        }
        else if(ch==8&&i>0)
        {
            i--;
            cout<<"\b \b";
        }
        else
        {
            cout<<"*";
            st[i]=ch;
            i++;
        }
    }
    ifstream intf("password.txt");
    intf>>ch1;
    intf.close();
    for(i=0; st[i]==ch1[i]&&st[i]!='\0'&&ch1[i]!='\0'; i++);
    if(st[i]=='\0'&&ch1[i]=='\0')
    {
        system("cls");
        cout<<"\n\t**The Password Should be less than 20 characters & don't use spaces**\n\n";
        cout<<"\n\t\tEnter New Password : ";
        fflush(stdin);
        i=0;
        while(1)
        {
            j++;
            ch=getch();
            if(ch==13)
            {
                for(i=0; st[i]!=' '&&st[i]!='\0'; i++);
                if(j>20 || st[i]==' ')
                {
                    cout<<"\n\n\t\tYou did't follow the instruction \n\n\t\tPress any key for try again.....";
                    getch();
                    system("cls");
                    password();
                    admin();
                }
                st[i]='\0';
                break;
            }
            else if(ch==8&&i>0)
            {
                i--;
                cout<<"\b \b";
            }
            else
            {
                cout<<"*";
                st[i]=ch;
                i++;
            }
        }
        ofstream outf("password.txt");
        outf<<st;
        outf.close();
        cout<<"\n\n\t\tYour Password has been changed Successfully.";
        cout<<"\n\t\tPress any key to continue......";
        getch();
        system("cls");
        admin();
    }
    else
    {
        cout<<"\n\n\t\tPassword is incorrect.....\n";
        cout<<"\n\t\tEnter 1 for retry or 2 for menu";
        cin>>i;
        if(i==1)
        {
            system("cls");
            password();
        }
        else
        {
            admin();
        }
    }
}
void flat::add_sflat()
{
    system("cls");
    fstream file;
    string f_city,code,adr,details,f_area,range;
    cout<<"\n\nFlat Code : ";
    cin>>code;
    cout<<"\n\nCity : ";
    cin>>f_city;
    cout<<"\n\nArea of Flat(sq.feet) : ";
    cin>>f_area;
    cout<<"\n\nCost(taka) : ";
    cin>>range;
    cout<<"\n\nAddress : ";
    cin>>adr;
    cout<<"\n\nDetails about Flat :";
    cin>>details;
    file.open("flat1.txt",ios::out|ios::app);
    file<<code<<" "<<f_city<<" "<<f_area<<" "<<range<<" "<<adr<<" "<<details<<"\n";
    file.close();
    cout<<"One Flat is Added Succesfully..."<<endl;
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::add_rflat()
{
    system("cls");
    fstream file;
    string f_city,code,adr,details,f_area,range;
    cout<<"\n\nFlat Code : ";
    cin>>code;
    cout<<"\n\nCity : ";
    cin>>f_city;
    cout<<"\n\nArea of Flat(sq.feet) : ";
    cin>>f_area;
    cout<<"\n\nCost(taka) : ";
    cin>>range;
    cout<<"\n\nAddress : ";
    cin>>adr;
    cout<<"\n\nDetails about Flat :";
    cin>>details;
    file.open("flat2.txt",ios::out|ios::app);
    file<<code<<" "<<f_city<<" "<<f_area<<" "<<range<<" "<<adr<<" "<<details<<"\n";
    file.close();
    cout<<"One Flat is Added Succesfully..."<<endl;
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::add_flat()
{
    p:
    int choice;
    system("cls");
    cout<<"\n\n\t\t\t\tADD Flat Panel";
    cout<<"\n\t\t-------------------------------------------\n";
    cout<<"\n\n1.Add Flat for Sale";
    cout<<"\n2.Add Flat for Rent";
    cout<<"\n3.Go Back";
    cout<<"\n\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        add_sflat();
        break;
    case 2:
        add_rflat();
        break;
    case 3:
            admin();
    default:
        cout<<"\n\n Invalid choice....";
    }
    getch();
    goto p;

}
void flat::d_sflat()
{
    system("cls");
    fstream file;
    cout<<"\n\n\t\t\t\tDisplay Sale Flat List";
    cout<<"\n\t\t-------------------------------------------\n";
    string f_city,code,adr,details,f_area,range,abc;
    file.open("flat1.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {

        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            cout<<"\n Flat code        : "<<code;
            cout<<"\n City             : "<<f_city;
            cout<<"\n Area(In sq.feet) : "<<f_area;
            cout<<"\n Range            : "<<range;
            cout<<"\n Address          : "<<adr;
            cout<<"\n Details          : "<<details;
            cout<<"\n------------------------------------------\n";
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::d_rflat()
{
    system("cls");
    fstream file;
    cout<<"\n\n\t\t\t\tDisplay Rent Flat List";
    cout<<"\n\t\t-------------------------------------------\n";
    string f_city,code,adr,details,f_area,range;
    file.open("flat2.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {

        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            cout<<"\n Flat code        : "<<code;
            cout<<"\n City             : "<<f_city;
            cout<<"\n Area(In sq.feet) : "<<f_area;
            cout<<"\n Range            : "<<range;
            cout<<"\n Address          : "<<adr;
            cout<<"\n Details          : "<<details;
            cout<<"\n------------------------------------------\n";
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}

void flat::display_flat()
{
    p:
    int choice;
    system("cls");
    cout<<"\n\n\t\t\t\tDisplay Panel";
    cout<<"\n\t\t------------------------------------";
    cout<<"\n\n1.Display Flat for sale";
    cout<<"\n2.Display flat for rent";
    cout<<"\n3.Go Back";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        d_sflat();
        break;
    case 2:
        d_rflat();
        break;
    case 3:
            admin();
    default:
        cout<<"\n\n Invalid choice....";
    }
    getch();
    goto p;
}
void flat:: check_rflat()
{
    system("cls");
    fstream file;
    int c=0;
    string f_country,f_city,code,codee,adr,details,f_area,range;
    cout<<"\n\n\t\t\t\tCheck Specific Flat for Rent";
    cout<<"\n\t\t----------------------------------------------------";
    file.open("flat2.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {
        cout<<"\nFlat Code : ";
        cin>>codee;
        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(codee==code)
            {
                system("cls");
                cout<<"\n\n\t\t\t\tCheck Specific Flat for Rent";
                cout<<"\n Flat code : "<<code;
                cout<<"\n City : "<<f_city;
                cout<<"\n Area(In sq.feet) :"<<f_area;
                cout<<"\n Rent : "<<range;
                cout<<"\n Address : "<<adr;
                cout<<"\n Details : "<<details;
                c++;
                break;

            }
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
        if(c==0)
        {
            cout<<"\n\nFlat code not found.....";
        }
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat:: check_sflat()
{
    system("cls");
    fstream file;
    int c=0;
    string f_city,code,codee,adr,details,f_area,range;
    cout<<"\n\n\t\t\t\tCheck Specific Flat for Sell";
    cout<<"\n\t\t--------------------------------------------------";
    file.open("flat1.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {
        cout<<"\nFlat cade : ";
        cin>>codee;
        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(codee==code)
            {
                system("cls");
                cout<<"\n\n\t\t\t\tCheck Specific Flat for Rent";
                cout<<"\n Flat code : "<<code;
                cout<<"\n City : "<<f_city;
                cout<<"\n Area(In sq.feet) :"<<f_area;
                cout<<"\n Cost : "<<range;
                cout<<"\n Address : "<<adr;
                cout<<"\n Details : "<<details;
                c++;
                break;

            }
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
        if(c==0)
        {
            cout<<"\n\nFlat code not found.....";
        }
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::check_flat()
{
    p:
    int choice;
    system("cls");
    cout<<"\n\n\t\t\t\tchecking Panel";
    cout<<"\n\t\t------------------------------------";
    cout<<"\n\n1.Check Specific Flat for Sale";
    cout<<"\n2.Check Specific Flat for Rent";
    cout<<"\n3.Go Back";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        check_sflat();
        break;
    case 2:
        check_rflat();
        break;
        case 3:
            admin();
    default:
        cout<<"\n\n Invalid choice....";
    }
    getch();
    goto p;
}
void flat::edit_sflat()
{
    system("cls");
    fstream file,file1;
    int c=0,count=0;
    string f_city,code,f_city1,code1,details,adr,details1,adr1,f_area,range,f_area1,range1;
    cout<<"\n\n\t\t\t\tEdit Flat Record";
    cout<<"\n\t\t------------------------------------";
    file1.open("flatt.txt",ios::out|ios::app);
    file.open("flat1.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\n\nFlat code : ";
        cin>>code1;
        //file>>code>>f_city>>adr>>f_area>>range>>details;
        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(code1==code)
            {
                system("cls");
                cout<<"\n\n\t\t\t\tEdit Flat Record";
                cout<<"\n\nNew city name : ";
                cin>>f_city1;
                cout<<"\n\n Area : ";
                cin>>f_area1;
                cout<<"\n\n cost : ";
                cin>>range1;
                cout<<"\n\nAddress : ";
                cin>>adr1;
                cout<<"Details : ";
                cin>>details1;
                file1<<"  "<<code1<<"     "<<f_city1<<"        "<<f_area1<<"           "<<range1<<"     "<<adr1<<"    "<<details1<<"\n";
                count++;
            }
            else
            {
                file1<<"  "<<code<<"     "<<f_city<<"       "<<f_area<<"           "<<range<<"     "<<adr<<"      "<<details<<"\n";
            }
            // file>>code>>f_city>>adr>>f_area>>range>>details;
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat Code not found....";
        }
    }
    file.close();
    file1.close();
    remove("flat1.txt");
    rename("flatt.txt","flat1.txt");
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat:: edit_rflat()
{
    system("cls");
    fstream file,file1;
    int c=0,count=0;
    string f_city,code,f_city1,code1,adr,adr1,details,details1,f_area,range,f_area1,range1;
    cout<<"\n\n\t\t\t\tEdit Flat Record";
    cout<<"\n\t\t------------------------------------";
    file1.open("flatt.txt",ios::out|ios::app);
    file.open("flat2.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\n\nFlat code : ";
        cin>>code1;
        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(code1==code)
            {
                system("cls");
                cout<<"\n\n\t\t\t\tEdit Flat Record";
                cout<<"\n\nNew city name : ";
                cin>>f_city1;
                cout<<"\n\n Area : ";
                cin>>f_area1;
                cout<<"\n\nAddress : ";
                cin>>adr1;
                cout<<"\n\n cost : ";
                cin>>range1;
                cout<<"Details : ";
                cin>>details1;
                file1<<"  "<<code1<<"     "<<f_city1<<"        "<<f_area1<<"           "<<range1<<"     "<<adr1<<"    "<<details1<<"\n";
                count++;
            }
            else
            {
                file1<<"  "<<code<<"     "<<f_city<<"       "<<f_area<<"           "<<range<<"     "<<adr<<"      "<<details<<"\n";
            }
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat Code not found....";
        }
    }
    file.close();
    file1.close();
    remove("flat2.txt");
    rename("flatt.txt","flat2.txt");
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::edit_flat()
{
    p:
    int choice;
    system("cls");
    cout<<"\n\n\t\t\t\tEditing Panel";
    cout<<"\n\t\t------------------------------------";
    cout<<"\n\n1.Edit Flat for Sale";
    cout<<"\n2.Edit Flat for Rent";
    cout<<"\nGo Back";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        edit_sflat();
        break;
    case 2:
        edit_rflat();
        break;
        case 3:
            admin();
    default:
        cout<<"\n\n Invalid choice....";
    }
    getch();
    goto p;
}
void flat::delete_sflat()
{
    system("cls");
    fstream file,file1;
    int count=0;
    string f_city,code,code1,adr,details,f_area,range;
    cout<<"\n\n\t\t\t\tDelete Flat Record";
    cout<<"\n\t\t------------------------------------";
    file1.open("flatt.txt",ios::out|ios::app);
    file.open("flat1.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\n\nFlat code : ";
        cin>>code1;
        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(code1==code)
            {
                system("cls");
                cout<<"\n\n\t\t\t\tDELETE FLAT RECORD";
                cout<<"\n\nOne Flat is Deleted Successfully....";
                count++;
            }
            else
            {
                file1<<"  "<<code<<"     "<<f_city<<"       "<<f_area<<"           "<<range<<"     "<<adr<<"      "<<details<<"\n";
            }
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat Code not found....";
        }
    }
    file.close();
    file1.close();
    remove("flat1.txt");
    rename("flatt.txt","flat1.txt");
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::delete_rflat()
{
    system("cls");
    fstream file,file1;
    int count=0;
    string f_city,code,code1,adr,details,f_area,range;
    cout<<"\n\n\t\t\t\tDelete Flat Record";
    cout<<"\n\t\t------------------------------------";
    file1.open("flatt.txt",ios::out|ios::app);
    file.open("flat2.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\n\nFlat code : ";
        cin>>code1;
        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(code1==code)
            {
                system("cls");
                cout<<"\n\n\t\t\t\tDELETE FLAT RECORD";
                cout<<"\n\nOne Flat is Deleted Successfully....";
                count++;
            }
            else
            {
                file1<<"  "<<code<<"     "<<f_city<<"       "<<f_area<<"           "<<range<<"     "<<adr<<"      "<<details<<"\n";
            }
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat Code not found....";
        }
    }
    file.close();
    file1.close();
    remove("flat2.txt");
    rename("flatt.txt","flat2.txt");
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::delete_flat()
{
    p:
    int choice;
    system("cls");
    cout<<"\n\n\t\t\t\tDeleting Panel";
    cout<<"\n\t\t-----------------------------------";
    cout<<"\n\n1.Delete Flat for Sale";
    cout<<"\n2.Delete Flat for Rent";
    cout<<"\nGo Back";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        delete_sflat();
        break;
    case 2:
        delete_rflat();
        break;
        case 3:
            admin();
    default:
        cout<<"\n\n Invalid choice....";
    }
    getch();
    goto p;
}
void flat::booking_sale()
{
    system("cls");
    fstream file;
    string f_city,code,adr,details,f_area,range,name1,name2,v_id,phn,occu;
    file.open("bbuy.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {
       cout<<"\n\t\t\t\tFlat Sale Booking Record\n";
       cout<<"---------------------------------------------------\n";
        file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            cout<<"\n";
            cout<<"name : "<<name1<<" "<<name2<<endl;
            cout<<"Voter ID : "<<v_id<<endl;
            cout<<"Occupation : "<<occu<<endl;
            cout<<"Phone : "<<phn<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"City : "<<f_city<<endl;
            cout<<"Flat Area(In sq.feet) : "<<f_area<<endl;
            cout<<"Cost : "<<range<<endl;
            cout<<"Address : "<<adr<<endl;
            cout<<"Details : "<<details<<endl;
            cout<<"\n---------------------------------------------------------\n";
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat:: booking_rent()
{
    system("cls");
    fstream file;
    string f_city,code,adr,details,f_area,range,name1,name2,v_id,phn,occu;
    file.open("brent.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {
       cout<<"\n\t\t\t\tFlat Rent Booking Record\n";
       cout<<"---------------------------------------------------\n";
        file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            cout<<"\n";
            cout<<"name : "<<name1<<" "<<name2<<endl;
            cout<<"Voter ID : "<<v_id<<endl;
            cout<<"Occupation : "<<occu<<endl;
            cout<<"Phone : "<<phn<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"City : "<<f_city<<endl;
            cout<<"Flat Area(In sq.feet) : "<<f_area<<endl;
            cout<<"Cost : "<<range<<endl;
            cout<<"Address : "<<adr<<endl;
            cout<<"Details : "<<details<<endl;
            cout<<"\n---------------------------------------------------------\n";
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::a_c_b_s()
{
    system("cls");
    fstream file,file1,file3;
    string f_city,code,adr,details,f_area,range,name1,name2,v_id,phn,occu;
    file.open("cbb.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {
       cout<<"\n\t\t\t\tCustomer Booking Cancel Record for Sale\n";
       cout<<"---------------------------------------------------\n";
        file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            cout<<"\n";
            cout<<"name : "<<name1<<" "<<name2<<endl;
            cout<<"Voter ID : "<<v_id<<endl;
            cout<<"Occupation : "<<occu<<endl;
            cout<<"Phone : "<<phn<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"City : "<<f_city<<endl;
            cout<<"Flat Area(In sq.feet) : "<<f_area<<endl;
            cout<<"Cost : "<<range<<endl;
            cout<<"Address : "<<adr<<endl;
            cout<<"Details : "<<details<<endl;
            cout<<"\n---------------------------------------------------------\n";
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
    }
    int count=0;
    //string q,code1;
    char q;
    string code1;
    cout<<"\nEnter y : Add Cancel Flat To The Selling List\n";
    cout<<"\nEnter n : To Go Back\n";
    cin>>q;
    if(q=='y'||q=='Y')
    {
    file.open("cbb.txt",ios::in);
    file3.open("cbb1.txt",ios::out|ios::app);
    file1.open("flat1.txt",ios::out|ios::app);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\n\nFlat code : ";
        cin>>code1;
      // file>>code>>f_city>>f_area>>range>>adr>>details;
      file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(code1==code)
            {
                file1<<code<<" "<<f_city<<" "<<f_area<<" "<<range<<" "<<adr<<" "<<details<<"\n";
                count++;
                cout<<"Add Flat is successfully ...."<<endl;
                file1.close();
            }

            else
            {
                file3<<name1<<" "<<name2<<"  "<<v_id<<"  "<<occu<<"   "<<phn<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
            }
            //file>>code>>f_city>>f_area>>range>>adr>>details;
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat Code not found....";
        }
    }
    file.close();
    file3.close();
    remove("cbb.txt");
    rename("cbb1.txt","cbb.txt");
    }
    if(q=='n'||q=='N')
    {
        bookings();
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::a_c_b_r()
{
    system("cls");
    fstream file,file1,file3;
    string f_city,code,adr,details,f_area,range,name1,name2,v_id,phn,occu;
    file.open("cbr.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {
       cout<<"\n\t\t\t\tCustomer Booking Cancel Record for Rent\n";
       cout<<"---------------------------------------------------\n";
        file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            cout<<"\n";
            cout<<"name : "<<name1<<" "<<name2<<endl;
            cout<<"Voter ID : "<<v_id<<endl;
            cout<<"Occupation : "<<occu<<endl;
            cout<<"Phone : "<<phn<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"City : "<<f_city<<endl;
            cout<<"Flat Area(In sq.feet) : "<<f_area<<endl;
            cout<<"Cost : "<<range<<endl;
            cout<<"Address : "<<adr<<endl;
            cout<<"Details : "<<details<<endl;
            cout<<"\n---------------------------------------------------------\n";
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
    }
    int count=0;
    //string q,code1;
    char q;
    string code1;
    cout<<"\nEnter y : Add Cancel Flat To The Rent List\n";
    cout<<"\nEnter n : To Go Back\n";
    cin>>q;
    if(q=='y'||q=='Y')
    {
    file.open("cbr.txt",ios::in);
    file3.open("cbr1.txt",ios::out|ios::app);
    file1.open("flat2.txt",ios::out|ios::app);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\n\nFlat code : ";
        cin>>code1;
       //file>>code>>f_city>>f_area>>range>>adr>>details;
       file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(code1==code)
            {
                file1<<code<<" "<<f_city<<" "<<f_area<<" "<<range<<" "<<adr<<" "<<details<<"\n";
                count++;
                cout<<"Add Flat is successfully ...."<<endl;
                file1.close();
            }

            else
            {
                file3<<name1<<" "<<name2<<"  "<<v_id<<"  "<<occu<<"   "<<phn<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
            }
            //file>>code>>f_city>>f_area>>range>>adr>>details;
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat Code not found....";
        }
    }
    file.close();
    file3.close();
    remove("cbr.txt");
    rename("cbr1.txt","cbr.txt");
    }
    if(q=='n'||q=='N')
    {
        bookings();
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::bookings()
{
    p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t\t\tAll Booking Record";
    cout<<"\n\t\t---------------------------------------\n";
    cout<<"\n\n\n1.Booking Record for Sale Flat ";
    cout<<"\n2.Booking Record for Rent Flat ";
    cout<<"\n3.Customer Booking Cancel List for Sale Flat";
    cout<<"\n4.Customer Booking Cancel List for Rent Flat";
    cout<<"\n5.Go Back";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        booking_sale();
        break;
    case 2:
        booking_rent();
        break;
    case 3:
            a_c_b_s();
        break;
    case 4:
            a_c_b_r();
        break;
    case 5:
        admin();
    default:
        cout<<"\n\n Invalid choice....";
    }
    getch();
    goto p;

}
void flat::admin()
{
p:
    int choice;
    system("cls");
    system("color 4B");
    cout<<"\n\t\t\t===========================";
    cout<<"\n\n\t\t\t\tAdmin Panel";
    cout<<"\n\t\t\t===========================";
    cout<<"\n\n\n\n1.Add Flat";
    cout<<"\n2.Display Flat";
    cout<<"\n3.Check Specific Flat";
    cout<<"\n4.Edit Flat";
    cout<<"\n5.Delete Flat";
    cout<<"\n6.Bookings";
    cout<<"\n7.Change Password";
    cout<<"\n8.Go Back";
    cout<<"\nEnter Your Choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        add_flat();
        break;
    case 2:
        display_flat();
        break;
    case 3:
        check_flat();
        break;
    case 4:
        edit_flat();
        break;
    case 5:
        delete_flat();
        break;
    case 6:
        bookings();
        break;
    case 7:
        password();
    case 8:
        menu();
    default:
        cout<<"\n\n Invalid choice....";
    }
    getch();
    goto p;
}
void flat::ccr()
{
    system("cls");
    fstream file;
    int c=0,a=0,b=0,k=0,d=0,e=0;
    string f_city,code,codee,adr,details,f_city1,f_area,range;
    cout<<"\n\n\t\t\t\t Flat for Rent";
    cout<<"\n\t\t------------------------------\n";
    file.open("flat2.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {
        cout<<"\nCity : ";
        cin>>f_city1;
        cout<<"\n\n";
        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if((f_city1.compare(f_city))==0)
            {
                cout<<"\n Flat code        : "<<code;
                cout<<"\n City             : "<<f_city;
                cout<<"\n Area(In sq.feet) : "<<f_area;
                cout<<"\n Range            : "<<range;
                cout<<"\n Address          : "<<adr;
                cout<<"\n Details          : "<<details;
                cout<<"\n--------------------------------------------------------\n";
                c++;

            }
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
        if(c==0)
        {
            cout<<"\n\nFlat code not found.....";
        }
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::ccs()
{
    system("cls");
    fstream file;
    int c=0,a=0,b=0,k=0,d=0,e=0;
    string f_city,code,codee,adr,details,f_city1,f_area,range;
    cout<<"\n\n\t\t\t\t Flat for Buy";
    cout<<"\n\t\t------------------------------\n";
    file.open("flat1.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {
        cout<<"\nCity : ";
        cin>>f_city1;
        cout<<"\n\n";
        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if((f_city1.compare(f_city))==0)
            {
                cout<<"\n Flat code        : "<<code;
                cout<<"\n City             : "<<f_city;
                cout<<"\n Area(In sq.feet) : "<<f_area;
                cout<<"\n Range            : "<<range;
                cout<<"\n Address          : "<<adr;
                cout<<"\n Details          : "<<details;
                cout<<"\n--------------------------------------------------------\n";
                c++;

            }
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
        if(c==0)
        {
            cout<<"\n\nFlat code not found.....";
        }
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::brent()
{
    system("cls");
    cout<<"\n\n\t\t\t\tFlat Booking Panel";
    cout<<"\n\t\t--------------------------------------\n";
    fstream file,file1,file3;
    int count=0;
    string f_city,code,code1,adr,details,name,v_id,occu,phn,f_area,range;
    file3.open("brent.txt",ios::out|ios::app);
    file1.open("flatt.txt",ios::out|ios::app);
    file.open("flat2.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\n\nFlat code : ";
        cin>>code1;
        file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(code1==code)
            {
                getchar();
                cout<<"\nEnter Your Name : ";
                getline(cin,name);
                cout<<"\nEnter Your Voter ID : ";
                cin>>v_id;
                cout<<"\nOccupation : ";
                cin>>occu;
                cout<<"\nPhone : ";
                cin>>phn;

                file3<<name<<"  "<<v_id<<"  "<<occu<<"   "<<phn<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";

                count++;
                cout<<"Flat is successfully booked...."<<endl;
                file3.close();
            }

            else
            {
                file1<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
            }
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat Code not found....";
        }
    }
    file.close();
    file1.close();
    remove("flat2.txt");
    rename("flatt.txt","flat2.txt");
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::bbuy()
{
    system("cls");
    cout<<"\n\n\t\t\t\tFlat Booking Panel";
    cout<<"\n\t\t--------------------------------------\n";
    fstream file,file1,file3;
    int count=0;
    string f_city,code,code1,adr,details,name,v_id,occu,phn, f_area,range;
    file3.open("bbuy.txt",ios::out|ios::app);
    file1.open("flatt.txt",ios::out|ios::app);
    file.open("flat1.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\n\nFlat code : ";
        cin>>code1;
       file>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(code1==code)
            {
                getchar();
                cout<<"\nEnter Your Name : ";
                getline(cin,name);
                cout<<"\nEnter Your Voter ID : ";
                cin>>v_id;
                cout<<"\nOccupation : ";
                cin>>occu;
                cout<<"\nPhone : ";
                cin>>phn;
                file3<<name<<"  "<<v_id<<"  "<<occu<<"   "<<phn<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
                count++;
                cout<<"Flat is successfully booked...."<<endl;
                file3.close();
            }

            else
            {
                file1<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
            }
            file>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat Code not found....";
        }
    }
    file.close();
    file1.close();
    remove("flat1.txt");
    rename("flatt.txt","flat1.txt");
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::check_b_r()
{
    system("cls");
    fstream file;
    int c=0;
    string f_city,code,adr,details,f_area,range,name1,name2,v_id,phn,occu,v_id2,phn2;
    cout<<"\n\t\t\t\tFlat Check Booking Status For The Customer\n";
    cout<<"\t\t-------------------------------------------------------------------------\n";
    file.open("brent.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {

        cout<<"\nEnter Your Voter ID : ";
        cin>>v_id2;
        cout<<"\nPhone : ";
        cin>>phn2;
        file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {

            if(v_id2==v_id&&phn2==phn)
            {
            cout<<"\n";
            cout<<"name : "<<name1<<" "<<name2<<endl;
            cout<<"Voter ID : "<<v_id<<endl;
            cout<<"Occupation : "<<occu<<endl;
            cout<<"Phone : "<<phn<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"City : "<<f_city<<endl;
            cout<<"Flat Area(In sq.feet) : "<<f_area<<endl;
            cout<<"Cost : "<<range<<endl;
            cout<<"Address : "<<adr<<endl;
            cout<<"Details : "<<details<<endl;
            cout<<"\n---------------------------------------------------------\n";
                c++;
                break;
            }
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
        if(c==0)
        {
            cout<<"\n\nFlat not found.....";
        }
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::check_b_b()
{
    system("cls");
    fstream file;
    int c=0;
    string f_city,code,adr,details,f_area,range,name1,name2,v_id,phn,occu,v_id2,phn2;
    cout<<"\n\t\t\t\tFlat Check Booking Status For The Customer\n";
    cout<<"\t\t-------------------------------------------------------------------------\n";
    file.open("bbuy.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error....";
    }
    else
    {

        cout<<"\nEnter Your Voter ID : ";
        cin>>v_id2;
        cout<<"\nPhone : ";
        cin>>phn2;
        file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {

            if(v_id2==v_id&&phn2==phn)
            {
            cout<<"\n";
            cout<<"name : "<<name1<<" "<<name2<<endl;
            cout<<"Voter ID : "<<v_id<<endl;
            cout<<"Occupation : "<<occu<<endl;
            cout<<"Phone : "<<phn<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"City : "<<f_city<<endl;
            cout<<"Flat Area(In sq.feet) : "<<f_area<<endl;
            cout<<"Cost : "<<range<<endl;
            cout<<"Address : "<<adr<<endl;
            cout<<"Details : "<<details<<endl;
            cout<<"\n---------------------------------------------------------\n";
                c++;
                break;
            }
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        file.close();
        if(c==0)
        {
            cout<<"\n\nFlat not found.....";
        }
    }
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::edit_info_r()
{
    system("cls");
    fstream file,file1;
    int c=0,count=0;
    string f_city,code,adr,details,f_area,range,name1,name2,v_id,phn,occu,v_id2,phn2,name3,occu2;
    cout<<"\n\n\t\t\t\tEdit Booking Information";
    cout<<"\n\t\t-----------------------------------------------\n";
    file1.open("brent1.txt",ios::out|ios::app);
    file.open("brent.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\nEnter Your Voter ID : ";
        cin>>v_id2;
        cout<<"\nPhone : ";
        cin>>phn2;
        file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(v_id2==v_id&&phn2==phn)
            {
                cout<<"\n\n\t\t\t\tUpdate Information";
                getchar();
                cout<<"\nEnter Your Name : ";
                getline(cin,name3);
                cout<<"\nEnter Your Voter ID : ";
                cin>>v_id2;
                cout<<"\nOccupation : ";
                cin>>occu2;
                cout<<"\nPhone : ";
                cin>>phn2;
                file1<<name3<<"  "<<v_id2<<"  "<<occu2<<"   "<<phn2<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
                cout<<"\nInformation is updated successfully... ";
                count++;
            }
            else
            {

                file1<<name1<<" "<<name2<<"   "<<v_id<<"  "<<occu<<"   "<<phn<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
            }
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat  not found....";
        }
    }
    file.close();
    file1.close();
    remove("brent.txt");
    rename("brent1.txt","brent.txt");
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::edit_info_b()
{
    system("cls");
    fstream file,file1;
    int c=0,count=0;
    string f_city,code,adr,details,f_area,range,name1,name2,v_id,phn,occu,v_id2,phn2,name3,occu2;
    cout<<"\n\n\t\t\t\tEdit Booking Information";
    cout<<"\n\t\t-----------------------------------------------\n";
    file1.open("bbuy1.txt",ios::out|ios::app);
    file.open("bbuy.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\nEnter Your Voter ID : ";
        cin>>v_id2;
        cout<<"\nPhone : ";
        cin>>phn2;
        file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(v_id2==v_id&&phn2==phn)
            {
                cout<<"\n\n\t\t\t\tUpdate Information";
                getchar();
                cout<<"\nEnter Your Name : ";
                getline(cin,name3);
                cout<<"\nEnter Your Voter ID : ";
                cin>>v_id2;
                cout<<"\nOccupation : ";
                cin>>occu2;
                cout<<"\nPhone : ";
                cin>>phn2;
                file1<<name3<<"  "<<v_id2<<"  "<<occu2<<"   "<<phn2<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
                cout<<"\nInformation is updated successfully... ";
                count++;
            }
            else
            {

                file1<<name1<<" "<<name2<<"   "<<v_id<<"  "<<occu<<"   "<<phn<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
            }
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat  not found....";
        }
    }
    file.close();
    file1.close();
    remove("bbuy.txt");
    rename("bbuy1.txt","bbuy.txt");
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::c_b_r()
{
    system("cls");
    fstream file,file1,file3;
    int count=0;
    string f_city,code,code1,adr,details,name1,v_id,occu,phn,f_area,range,name2,v_id2,phn2;
    cout<<"\n\n\t\t\t\tCancel Booking";
    cout<<"\n\t\t---------------------------------\n";
    file3.open("cbr.txt",ios::out|ios::app);
    file1.open("brent1.txt",ios::out|ios::app);
    file.open("brent.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\nEnter Your Voter ID : ";
        cin>>v_id2;
        cout<<"\nPhone : ";
        cin>>phn2;
        file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(v_id2==v_id&&phn2==phn)
            {


                file3<<name1<<" "<<name2<<"  "<<v_id<<"  "<<occu<<"   "<<phn<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";

                count++;
                cout<<"Cancelled booking succesfully...."<<endl;
                file3.close();
            }

            else
            {
                file1<<name1<<" "<<name2<<"  "<<v_id<<"  "<<occu<<"   "<<phn<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
            }
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat  not found....";
        }
    }
    file.close();
    file1.close();
    remove("brent.txt");
    rename("brent1.txt","brent.txt");
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::c_b_b()
{
    system("cls");
    fstream file,file1,file3;
    int count=0;
    string f_city,code,code1,adr,details,name1,v_id,occu,phn,f_area,range,name2,v_id2,phn2;
    cout<<"\n\n\t\t\t\tCancel Booking";
    cout<<"\n\t\t---------------------------------\n";
    file3.open("cbb.txt",ios::out|ios::app);
    file1.open("bbuy1.txt",ios::out|ios::app);
    file.open("bbuy.txt",ios::in);
    if(!file)
    {
        cout<<"\n\nFile opening error...";
    }
    else
    {
        cout<<"\nEnter Your Voter ID : ";
        cin>>v_id2;
        cout<<"\nPhone : ";
        cin>>phn2;
        file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        while(!file.eof())
        {
            if(v_id2==v_id&&phn2==phn)
            {


                file3<<name1<<" "<<name2<<"  "<<v_id<<"  "<<occu<<"   "<<phn<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";

                count++;
                cout<<"Cancelled booking succesfully...."<<endl;
                file3.close();
            }

            else
            {
                file1<<name1<<" "<<name2<<"  "<<v_id<<"  "<<occu<<"   "<<phn<<"   "<<"  "<<code<<"     "<<f_city<<"      "<<f_area<<"    "<<range<<"           "<<adr<<"     "<<details<<"\n";
            }
            file>>name1>>name2>>v_id>>occu>>phn>>code>>f_city>>f_area>>range>>adr>>details;
        }
        if(count==0)
        {
            cout<<"\n\nFlat  not found....";
        }
    }
    file.close();
    file1.close();
    remove("bbuy.txt");
    rename("bbuy1.txt","bbuy.txt");
    cout<<"\n\t\t\t\tPress Enter to Continue...... ";
}
void flat::cbookings()
{
    p:
    int choice;
    system("cls");
    cout<<"\n\n\t\t\t\tBooking Panel";
    cout<<"\n1.Book flat for rent";
    cout<<"\n2.Book flat for buy";
    cout<<"\n3.Check booking status for rent";
    cout<<"\n4.Check booking status for buy";
    cout<<"\n5.Edit Customer Booking Information For Rent";
    cout<<"\n6.Edit Customer Booking Information For Buy";
    cout<<"\n7.Cancel booking for rent";
    cout<<"\n8.cancel booking for buy";
    cout<<"\n9.Go back:";
    cout<<"\nEnter Your Choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            brent();
            break;
        case 2:
            bbuy();
            break;
        case 3:
            check_b_r();
            break;
        case 4:
            check_b_b();
            break;
        case 5:
            edit_info_r();
            break;
        case 6:
            edit_info_b();
            break;
        case 7:
            c_b_r();
            break;
        case 8:
            c_b_b();
            break;
        case 9:
            customer();
        default:
            cout<<"\n\n Invalid choice....";
        }
        getch();
        goto p;
}
void flat::customer()
{
p:
    int choice;
    system("cls");
    system("color E4");
    cout<<"\n\n\t\t\t\tCustomer Panel";
    cout<<"\n\n\n1.Check Flat for Rent";
    cout<<"\n2.Check flat for Buy";
    cout<<"\n3.Bookings";
    cout<<"\n4.Help Line";
    cout<<"\n5.Go Back";
    cout<<"\nEnter Your Choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        ccr();
        break;
    case 2:
        ccs();
        break;
    case 3:
        cbookings();
        break;
    case 4:
        help_line();
        break;
    case 5:
        menu();
    default:
        cout<<"\n\n Invalid choice....";
    }
    getch();
    goto p;
}

void flat::help_line()
{
    system("cls");
    system("color 0F");
    cout<<"\n\n\t\t\t\tWelcome to our Help Service. ";
    cout<<"\n\nIf you have any specific QUERY please feel free to contact us.\n\nWe are always available for you!";
    cout<<"\n\nHotline Number : +8801770011111  \n\nThank you.\n";
}
void intro()
{
    system("cls");
    system("color A0");
    cout<<"\n\n\n\n\n";
    cout<<"\t\t\t==============================";
    cout<<"\n\t\t\t==============================";
    cout<<"\n\n\t\t\t\t";
    cout<<"\n\n\n\t\t\t Bismillahir Rahmanir Rahim";
    cout<<"\n\n\t\t\t ";
    cout<<"\n\n\t\t\t==============================";
    cout<<"\n\t\t\t==============================";
    getch();
    system("cls");
    cout<<"\n\n\n\n\n\n\n";
    cout<<"\t\t\t==============================";
    cout<<"\n\t\t\t==============================";
    cout<<"\n\n\t\t\t  FLAT RENT AND BUY SERVICE";
    cout<<"\n\n\n\t\t\t\t";
    cout<<"\n\n\t\t\t==============================";
    cout<<"\n\t\t\t==============================";
    getch();

}
int main()
{
    flat f;
    intro();
    f.menu();
    return 0;
}

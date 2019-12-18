#include<iostream>
#include<iomanip>
#include<fstream>
#include<istream>
#include<ostream>

using namespace std;

int items_sandwich=0;
int items_puff=0;
int items_french_fries=0;
int items_burger=0;
int items_drinks=0;

class Sandwich
{
public:
    static int total_sandwich;
    int choice_sandwich;
    int price_sandwich;
    int quantity_sandwich;
    string name_sandwich;

    void get_choice_sandwich()
    {
       cout<<endl<<setw(35)<<left<<"1.Cheese Butter Slice"<<setw(5)<<"15/-";
       cout<<endl<<setw(35)<<left<<"2.Bread Butter"<<setw(5)<<"20/-";
       cout<<endl<<setw(35)<<left<<"3.Cheese Chatni Toast"<<setw(5)<<"25/-";
       cout<<endl<<setw(35)<<left<<"4.Bread Butter Cheese"<<setw(5)<<"30/-";
       cout<<endl<<setw(35)<<left<<"5.Bread Butter Cheese Grilled"<<setw(5)<<"40/-";
       cout<<endl<<setw(35)<<left<<"6.Veg Sandwich"<<setw(5)<<"30/-";
       cout<<endl<<setw(35)<<left<<"7.Veg Cheese Sandwich"<<setw(5)<<"50/-";
       cout<<endl<<setw(35)<<left<<"8.Veg Cheese Grilled"<<setw(5)<<"60/-";
       cout<<endl<<setw(35)<<left<<"9.Cheese Chatni Grilled"<<setw(5)<<"40/-";
       cout<<endl<<endl<<"\nEnter the corresponding number to add item:";
       cin>>choice_sandwich;
       switch(choice_sandwich)
       {
        case 1:
            name_sandwich="Cheese Butter Slice";
            price_sandwich=15;
            break;
        case 2:
            name_sandwich="Bread Butter";
            price_sandwich=20;
            break;
        case 3:
            name_sandwich="Cheese Chatni Toast";
            price_sandwich=25;
            break;
        case 4:
            name_sandwich="Bread Butter Cheese";
            price_sandwich=30;
            break;
        case 5:
            name_sandwich="Bread Butter Cheese Grilled";
            price_sandwich=40;
            break;
        case 6:
            name_sandwich="Veg Sandwich";
            price_sandwich=30;
            break;
        case 7:
            name_sandwich="Veg Cheese Sandwich";
            price_sandwich=50;
            break;
        case 8:
            name_sandwich="Veg Cheese Grilled";
            price_sandwich=60;
            break;
        case 9:
            name_sandwich="Cheese Chatni Grilled";
            price_sandwich=40;
            break;
        default:
            cout<<"\nEnter the valid choice...";
            break;
       }
       cout<<"\nEnter the Quantity:";
       cin>>quantity_sandwich;

    }

    int sum_sandwich(Sandwich s[])
    {
        for(int i=0;i<items_sandwich;i++)
        {
            total_sandwich+=s[i].quantity_sandwich*s[i].price_sandwich;
        }
        return total_sandwich;
    }
};

class Puff
{
public:
    static int total_puff;
    int choice_puff;
    int price_puff;
    int quantity_puff;
    string name_puff;

    void get_puff_choice()
    {
        cout<<endl<<setw(25)<<left<<"1.Plain Puff"<<setw(5)<<"10/-";
        cout<<endl<<setw(25)<<left<<"2.Sev Puff"<<setw(5)<<"15/-";
        cout<<endl<<setw(25)<<left<<"3.Cheese Puff"<<setw(5)<<"20/-";
        cout<<endl<<setw(25)<<left<<"4.Cheese Sev Puff"<<setw(5)<<"25/-";
        cout<<endl<<setw(25)<<left<<"5.Mayonnaise Puff"<<setw(5)<<"20/-";
        cout<<endl<<setw(25)<<left<<"6.Mayonnaise Sev Puff"<<setw(5)<<"25/-";
        cout<<endl<<setw(25)<<left<<"7.Chinese Puff"<<setw(5)<<"25/-";
        cout<<"\n\nEnter the corresponding number to select the item:";
        cin>>choice_puff;
        switch(choice_puff)
        {
        case 1:
            name_puff="Plain Puff";
            price_puff=10;
            break;
        case 2:
            name_puff="Sev Puff";
            price_puff=15;
            break;
        case 3:
            name_puff="Cheese Puff";
            price_puff=20;
            break;
        case 4:
            name_puff="Cheese Sev Puff";
            price_puff=25;
            break;
        case 5:
            name_puff="Mayonnaise Puff";
            price_puff=20;
            break;
        case 6:
            name_puff="Mayonnaise Sev Puff";
            price_puff=25;
            break;
        case 7:
            name_puff="Chinese Puff";
            price_puff=25;
            break;
        default:
            cout<<"\nEnter the valid choice...";

        }
        cout<<"\nEnter the Quantity:";
        cin>>quantity_puff;

    }
    int sum_puff(Puff p[])
    {
        for(int i=0;i<items_puff;i++)
        {
            total_puff+=p[i].quantity_puff*p[i].price_puff;
        }
        return total_puff;
    }
};

class French_fries
{
public:
    static int total_french_fries;
    int choice_french_fries;
    int price_french_fries;
    int quantity_french_fries;
    string name_french_fries;


    void get_choice_french_fries()
    {

    cout<<endl<<setw(22)<<left<<"1.French Fries"<<setw(5)<<"50/-";
    cout<<endl<<setw(22)<<left<<"2.Cheese French Fries"<<setw(5)<<"60/-";
    cout<<"\n\nEnter the corresponding number to select the item:";
    cin>>choice_french_fries;
    if(choice_french_fries==1)
    {
        name_french_fries="French Fries";
        price_french_fries=50;
    }
    else if(choice_french_fries==2)
    {
        name_french_fries="Cheese French Fries";
        price_french_fries=60;
    }
    else
    {
        cout<<"\nEnter the valid choice...";
    }
    cout<<"\nEnter the Quantity:";
    cin>>quantity_french_fries;
    }

    int sum_french_fries(French_fries f[])
    {
        for(int i=0;i<items_french_fries;i++)
        {
            total_french_fries+=f[i].quantity_french_fries*f[i].price_french_fries;
        }
        return total_french_fries;
    }
};

class Burger
{
public:
    static int total_burger;
    int choice_burger;
    int price_burger;
    int quantity_burger;
    string name_burger;

    void get_choice_burger()
    {
        cout<<setw(30)<<left<<"\n1.Aloo Tikki Burger"<<setw(5)<<"50/-"<<"\n";
        cout<<setw(30)<<left<<"2.Aloo Tikki Cheese Burger"<<setw(5)<<"60/-";

        cout<<"\n\nEnter the corresponding number to select the item:";
        cin>>choice_burger;

        if(choice_burger==1)
        {
            name_burger="Aloo Tikki Burger";
            price_burger=50;
        }
        else if(choice_burger==2)
        {
            name_burger="Aloo Tikki Cheese Burger";
            price_burger=60;
        }

        cout<<"\nEnter the Quantity:";
        cin>>quantity_burger;

    }

    int sum_burger(Burger b[])
    {
        for(int i=0;i<items_burger;i++)
        {
            total_burger+=b[i].quantity_burger*b[i].price_burger;
        }
        return total_burger;
    }

};

class Drinks
{
public:
    static int total_drinks;
    int choice_drinks;
    int price_drinks;
    int quantity_drinks;
    string name_drinks;

    void get_drink_data()
    {
    cout<<endl<<setw(18)<<left<<"1.Tea"<<setw(5)<<"10/-";
    cout<<endl<<setw(18)<<left<<"2.Coffee"<<setw(5)<<"15/-";
    cout<<endl<<setw(18)<<left<<"3.Bournvita"<<setw(5)<<"20/-";
    cout<<endl<<setw(18)<<left<<"4.Chocolate Shake"<<setw(5)<<"30/-";
    cout<<endl<<setw(18)<<left<<"5.Cold Coffee"<<setw(5)<<"30/-";

     cout<<"\n\nEnter the corresponding number to select the item:";
     cin>>choice_drinks;

     switch(choice_drinks)
     {
    case 1:
        {
            name_drinks="Tea";
            price_drinks=10;

        }
        break;
    case 2:
        {
            name_drinks="Coffee";
            price_drinks=15;

        }
        break;
    case 3:
        {
            name_drinks="Bournvita";
            price_drinks=20;

        }
        break;
     case 4:
        {
            name_drinks="Chocolate Shake";
            price_drinks=30;

        }
        break;
     case 5:
        {
            name_drinks="Cold Coffee";
            price_drinks=30;

        }
        break;
     default:
        cout<<"\nEnter the valid choice...";

     }
     cout<<"\nEnter the Quantity:";
        cin>>quantity_drinks;
    }

    int sum_drinks(Drinks d[])
    {
        for(int i=0;i<items_drinks;i++)
        {
            total_drinks+=d[i].price_drinks;
        }
        return total_drinks;
    }

};


int Sandwich::total_sandwich=0;
int Puff::total_puff=0;
int French_fries::total_french_fries=0;
int Burger::total_burger=0;
int Drinks::total_drinks=0;

main()
{
    int choice1,choice2,i,gts=0,gtp=0,gtf=0,gtb=0,gtd=0,grand_total=0,counter,gkk=10000;
    char gk[gkk];
    cout<<"\n1.Add Item";
   // cout<<"\n2.Delete Item";
    cout<<"\n0.Exit";
    cout<<"\nEnter your Choice:";
    cin>>choice1;
    if(choice1==1)
    {
        ofstream f1;
        f1.open("gk.txt",ios::out);

    do
    {
            cout<<"\nWhat would you like to eat:";
            cout<<"\n1.Sandwich";
            cout<<"\n2.Puff";
            cout<<"\n3.French Fries";
            cout<<"\n4.Burger";
            cout<<"\n5.Drinks";
            cout<<"\nEnter your choice:";
            cin>>choice2;
            switch(choice2)
            {
            case 1:
                {
                    cout<<"\nHow many different items you want to buy:";
                    cin>>items_sandwich;
                     Sandwich s1,s[items_sandwich];
                    for(i=0;i<items_sandwich;i++)
                    {
                        cout<<"\nEnter the Data for item "<<i+1<<":";
                        s[i].get_choice_sandwich();
                    }
                    gts=s1.sum_sandwich(s);
                    for(int g=0;g<items_sandwich;g++)
                    {
                        f1<<"|"<<setw(40)<<left<<s[g].name_sandwich<<"|"<<setw(20)<<left<<s[g].price_sandwich<<"|"<<setw(20)<<left<<s[g].quantity_sandwich<<"|"<<"\n";
                    }
                }
                break;

            case 2:
                {
                    cout<<"\nHow many different items you want to buy:";
                    cin>>items_puff;
                    Puff p1,p[items_puff];
                    for(i=0;i<items_puff;i++)
                    {
                        cout<<"\nEnter the data for item "<<i+1<<":";
                        p[i].get_puff_choice();
                    }
                    gtp=p1.sum_puff(p);
                    for(int g=0;g<items_puff;g++)
                    {
                        f1<<"|"<<setw(40)<<left<<p[g].name_puff<<"|"<<setw(20)<<left<<p[g].price_puff<<"|"<<setw(20)<<left<<p[g].quantity_puff<<"|"<<"\n";
                    }
                }
                break;

            case 3:
                {
                    cout<<"\nHow many different items you want to buy:";
                    cin>>items_french_fries;
                    French_fries y1,y[items_french_fries];
                    for(i=0;i<items_french_fries;i++)
                    {
                        cout<<"\nEnter the data for item "<<i+1<<":";
                        y[i].get_choice_french_fries();
                    }

                    gtf=y1.sum_french_fries(y);
                    for(int g=0;g<items_french_fries;g++)
                    {
                        f1<<"|"<<setw(40)<<left<<y[g].name_french_fries<<"|"<<setw(20)<<left<<y[g].price_french_fries<<"|"<<setw(20)<<left<<y[g].quantity_french_fries<<"|"<<"\n";
                    }
                }
                break;

            case 4:
                {
                    cout<<"\nHow many different items you want to buy:";
                    cin>>items_burger;
                    Burger b1,b[items_burger];
                    for(i=0;i<items_burger;i++)
                    {
                        cout<<"\nEnter the Data for item "<<i+1<<":";
                        b[i].get_choice_burger();
                    }
                    gtb=b1.sum_burger(b);
                    for(int g=0;g<items_burger;g++)
                    {
                        f1<<"|"<<setw(40)<<left<<b[g].name_burger<<"|"<<setw(20)<<left<<b[g].price_burger<<"|"<<setw(20)<<left<<b[g].quantity_burger<<"|"<<"\n";
                    }
                }
                break;

            case 5:
                {
                    cout<<"\nHow many different items you want to buy:";
                    cin>>items_drinks;
                    Drinks d1,d[items_drinks];
                    for(i=0;i<items_drinks;i++)
                    {
                        d[i].get_drink_data();
                    }
                    gtd=d1.sum_drinks(d);
                    for(int g=0;g<items_drinks;g++)
                    {
                        f1<<"|"<<setw(40)<<left<<d[g].name_drinks<<"|"<<setw(20)<<left<<d[g].price_drinks<<"|"<<setw(20)<<left<<d[g].quantity_drinks<<"|"<<"\n";
                    }
                }
                break;
            default:
                cout<<"\nEnter the valid choice...";
            }

    cout<<"\n1.Continue\n0.Exit";
    cout<<"\nEnter your choice:";
    cin>>counter;

    }while(counter!=0);

    f1.close();
    grand_total=gts+gtp+gtb+gtd+gtf;
    cout<<endl<<"------------------------------------------------------------------------------------";
    cout<<endl<<setw(40)<<left<<"|Item Name                               |"<<setw(20)<<left<<"Prize               |"<<setw(20)<<left<<"Quantity           "<<"|";
    cout<<endl<<"------------------------------------------------------------------------------------";

    ifstream f2("gk.txt");
        while(!f2.eof())
        {
            f2.getline(gk,gkk);
            cout<<endl<<gk;
        }
    cout<<"------------------------------------------------------------------------------------";
    cout<<endl<<endl<<"\t\t\t\tTotal bill is: "<<grand_total<<endl<<endl;
    }
}

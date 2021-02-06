#include <iostream>
#include<iomanip>
using namespace std;
float Adult (float total_male, float total_female){
float total_adult = total_male+total_female;
return total_adult;
}
float Kids (float total_boy, float total_girl){
float total_kids=total_boy+total_girl;
return total_kids;
}
int main()
{
	char age;
	float male, female, boy, girl,total_male,total_female,total_boy,total_girl;
	double quantity_tickets,x,choice;

    cout<<endl<<"Do you want to buy Adult tickets or Kid's tickets?";
    cout<<endl<<"1. Adult";
    cout<<endl<<"2. Kids";
    cout<<endl<<"Enter your choice : ";
    cin>>choice;

    if(choice == 1){
        cout<<endl<<endl<<"Enter the quantity of tickets : ";
        cin>>quantity_tickets;
        cout<<endl<<endl<<"Select the age of the tickets";
        cout<<endl<<"1. Male - M";
        cout<<endl<<"2. Female - F";
         for(x = 0 ; x < quantity_tickets ; x++)
    {
        cout<<endl<<endl<<"Enter the Age of the customer : ";
        cin>>age;
        if(age == 'M' || age == 'm')
            {
                    male = 15.20;
                    total_male += male;
            }
        else if(age =='F' || age == 'f')
            {
                    female = 13.40;
                    total_female += female;
            }
            else
                {
                    cout<<endl<<"Invalid Input!!!!!";
                }
    }

    }
        else if(choice == 2)
            {
                cout<<endl<<endl<<"Enter the quantity of tickets : ";
                cin>>quantity_tickets;
                cout<<endl<<endl<<"Select the age of the tickets";
                cout<<endl<<"3. Boy - B";
                cout<<endl<<"4. Girl - G";
                for(x = 0 ; x < quantity_tickets ; x++)
                {
                    cout<<endl<<endl<<"Enter the Age of the customer : ";
                    cin>>age;
                        if(age == 'B' || age == 'b')
                {
                        boy = 10.50;
                        total_boy += boy;
                }
                else if(age == 'G' ||age == 'g')
                {
                        girl = 8.70;
                        total_girl += girl;
                }
                else
                {
                    cout<<endl<<"Invalid Input!!!!!";
                }
                }
                }


        cout<<endl<<fixed<<setprecision(2)<<"The  adult's ticket price is RM "<<Adult (total_male, total_female);
        cout<<endl<<fixed<<setprecision(2)<<"The kid's ticket price is RM "<<Kids(total_boy, total_girl);

	return 0;
}


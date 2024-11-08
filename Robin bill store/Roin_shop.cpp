
#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include <fstream>


using namespace std;



typedef struct
{
    int price[1000];
    string robin_stuff[100000];
    string date;
    int choose;
    int calculate;
    int amount[1000];

}Robin_stuff;


typedef struct
{
    int price;
    string staff_name;

}data_user;

typedef struct
{
    string robin_stuff;

}Show_manu_board;

void bill_end(Robin_stuff* Robin_stuff , ofstream& file);

void bill_create(Robin_stuff* Robin,ofstream& file);

void bill_sign(data_user* user, ofstream& file);

void Bill_show_manu(Show_manu_board * Draw_manu, ofstream& file);

void bill_end_create(ofstream& file);

Robin_stuff robin;
data_user user;
Show_manu_board list;


int main()
{

     ofstream file("Robin_bill.txt");
    if (!file.is_open())
    {
        cout << "Failed to open file" << endl;
        return(1);

    }

    cout << "Enter your costumer name  = " << "\t";
    cin >> user.staff_name;
    cout << "Date = " << "\t";
    cin >> robin.date;



   Bill_show_manu(&list , file);

   bill_sign(&user , file);

   bill_create(&robin , file);

   bill_end_create(file);
       
   file.close();

   return(0);
}


void bill_create(Robin_stuff* Robin , ofstream& file)
{
    cout << "choose number of stuff = " << "\t";
    cin >> Robin->choose;

    for (int i = 0; i < Robin->choose ; i++)
    {
        cout << "Enter stuff = " << "\t";
        cin >> Robin->robin_stuff[i];
        cout << "Enter price = " << "\t";
        cin >> Robin->price[i];
        cout << "amount stuff = " << "\t";
        cin >> Robin->amount[i];
        Robin->calculate += Robin->price[i] * Robin->amount[i] + 7 / 100;
        

    }

    bill_end(&robin , file);
}

void bill_sign(data_user* user, ofstream& file)
{

    cout << "___________________________" << "\r\n";
    cout << "Welcome To Robin love Nana shop" << "\r\n";
    cout << "___________________________" << "\r\n";

}
void bill_end(Robin_stuff* Robin_stuff , ofstream& file)
{

    cout << "______________________________________________________" << "\r\n";
    cout << "Total price = " << Robin_stuff->calculate  << "\r\n";
    cout << "______________________________________________________" << "\r\n";

}


void Bill_show_manu(Show_manu_board* Draw_manu, ofstream& file)
{
    cout << "____________________ ROBIN MANU ____________________"  << "\r\n";

    cout << "       *****MANU*****       " << "\r\n";

    cout << "1. Robin backpack cost = 20 dollar" << "\r\n";

    cout << "2. Robin T-shirt cost = 100 dollar" << "\r\n";

    cout << "3. Robin Earphone cost = 150 dollar" << "\r\n";

    cout << "4. Robin pen cost = 10 dollar" << "\r\n";

    cout << "5. Robin smart watch = 90 dollar" << "\r\n";

}

void bill_end_create(ofstream& file)
{
    cout << "___________________________" << "\r\n";
    cout << "Thank you for visiting Robin love Nana shop" << "\r\n";
    cout << "___________________________" << "\r\n";
}
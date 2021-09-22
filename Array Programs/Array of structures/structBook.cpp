//Program coded in Borland Turbo C++ compiler V3.00
//Program to illustrate working of structures in C++ using structures - 'book', 'publication'.
#include <iostream.h>
#include <conio.h>

struct book {           //This structures represents a record of book having fields like tile, edition...
    char title[50];     
    int edition;
    char author[20];
    float price;
    
};

int main()
{   clrscr();
    book b[3];
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter book" <<i+1 << " name : ";
        gets(b[i].title);
        cout << "Enter edition: ";
        cin >> b[i].edition;
        cout << "Enter author name: " ;
        gets(b[i].author);
        cout << "Enter price: ";
        cin >> b[i].price;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "\nbook name : " <<b[i].title ;
        cout << "\nedition: " << b[i].edition;
        cout << "\nauthor name: "<< b[i].author;
        cout << "\nprice: "<<b[i].price << endl;
    }
    
    getch();
    return 0;
}
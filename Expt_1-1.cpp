#include <iostream>
#include <conio.h>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  string mystr;
  float price = 0 ;
  double quantity = 0 ;
  cout << "Football Stadium Ticket Sales" << endl;
  cout << "Ticket Prices:  $25   $50   $100   $250" << endl;
  cout <<"         " << endl;

  cout << "Ticket Price: "; 
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;

  cout <<"         " << endl;
  cout << "Ticket Price: "; 
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;

  cout <<"         " << endl;
  cout << "Ticket Price: "; 
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;

  cout <<"         " << endl;
  cout << "Ticket Price: "; 
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;
  cout <<"         " << endl;

  _getch();
  return 0;
}
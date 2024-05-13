//Ammar Yasir 20I-0501 Lab Section A
#include <iostream>
#include "ShoppingPortal.cpp"
#include <fstream>
using namespace std;

int main()
{
    Shopping obj;
    Shopping obj2;
    Shopping obj3;
    Shopping obj4;
    Administration obj5;
    Administration obj6;
    Administration obj7;
    Invoicing obj8;
    Invoicing obj9;
    int option;

    cout << "////////////////Welcome to the shopping portal////////////////////" << endl;
    cout << "Press 1: For the Customer Signup " << endl;
    cout << "Press 2: For the Customer login " << endl;
    cout << "Press 3: For the purchase of the items " << endl;
    cout << "Press 4: For the Item search " << endl;
    cout << "Press 5(3a category):if you want to make the purchase via card " << endl;
    cout << "Press 6(3b category):if you want to make the purchase via cash on delivery " << endl;
    cout << "Press 7: Customer manager login " << endl;
    cout << "Press 8: Admistration login " << endl;
    cout << "Press 9:For the registor worker login " << endl;
    cout << "This is only for the manager to select the option 10 and 11 " << endl;
    cout << "Manager Press 10: for the credit invoice adding " << endl;
    cout << "Manager Press 11: for the for the cash information invoice " << endl;
    cout << endl;

    cin >> option; //the user enters the option

    switch (option)
    {
    case (1):
    {
        obj.signupdetails();
    }
    break;
    case (2):
    {
        obj2.logindetails();
    }
    break;
    case (5):
    {
        obj3.CardPayment();
    }
    break;
    case (6):
    {
        obj4.CashDelivery();
    }
    break;
    case (7):
    {
        obj6.ManagerLogin();
    }
    break;
    case (8):
    {
        obj5.AdminLogin();
    }
    break;
    case (9):
    {
        obj7.WorkerLogin();
    }
    break;
    case (10):
    {
        obj9.CreditInvoice();
    }
    break;
    case (11):
    {
        obj8.IdInvoice();
    }
    }
}
//Ammar Yasir 20I-0501 Lab Section A
#include <iostream>
#include <string>
using namespace std;

//////////////////The class of the shopping////////////////////////////
class Shopping
{
protected: //private attributes
    string name;
    string email;
    string email_existing;
    string name_existing;
    int phone_number;
    string address;
    int card_number;

public: //public attributes
    //Administration *admin; //the use of the polymorphism
    Shopping() //default constructor
    {
        phone_number = 0;
        card_number = 0;
    }
    Shopping(string n, string e, int phone, string a, int card, string emailexisting, string nameexisting) //parametrized constructor
    {
        name = n;
        email = e;
        name_existing = nameexisting;
        email_existing = emailexisting;
        phone_number = phone;
        address = a;
        card_number = card;
    }
    //The setters and the getters of the function of the login
    void settername_customer(string na)
    {
        name = na;
    }

    string gettername_customer()
    {
        return name;
    }

    void setteremail(string em)
    {
        email = em;
    }

    string getteremail()
    {
        return email;
    }

    void settername_existing(string nn)
    {
        name_existing = nn;
    }

    string gettername_existing()
    {
        return name_existing;
    }

    void setteremail_existing(string existingemail)
    {
        email_existing = existingemail;
    }

    string getteremail_existing()
    {
        return email_existing;
    }

    void setterphone(int ph)
    {
        phone_number = ph;
    }

    int getterphone()
    {
        return phone_number;
    }

    void setteraddress(string ad)
    {
        address = ad;
    }

    string getteraddress()
    {
        return address;
    }

    void settercard(int c)
    {
        card_number = c;
    }

    int gettercard()
    {
        return card_number;
    }

    void signupdetails()
    {
        cout << "Please enter your name: ";
        cin >> name;
        cout << endl;
        cout << "Please your email address: ";
        cin >> email;
        cout << endl;
        cout << "Please enter your phone number for registeration: ";
        cin >> phone_number;
        cout << endl;
        cout << "Please enter your address: ";
        cin >> address;
        cout << endl;
        cout << endl;
        cout << "Your name is: ";
        cout << name;
        cout << endl;
        cout << "Your email is: ";
        cout << email;
        cout << endl;
        cout << "Your phone number is: ";
        cout << phone_number;
        cout << endl;
        cout << "Your address is: ";
        cout << address;
        cout << endl;
    }

    void logindetails()
    {
        cout << "Please enter your registered name: ";
        cin >> name_existing;
        cout << endl;
        cout << "Please enter your registered email: ";
        cin >> email_existing;
        cout << endl;
        cout << "Your registered name is: ";
        cout << name_existing;
        cout << endl;
        cout << "Your registered email is: ";
        cout << email_existing;
        cout << endl;
    }

    void CardPayment()
    {
        cout << "Please enter your card pin for the online purchase: ";
        cin >> card_number;
        cout << "This is the register pin you have entered: ";
        cout << card_number;
    }

    void CashDelivery()
    {
        cout << "Your payment has been made and the order it will come soon";
        cout << endl;
    }

    //The destructor
    ~Shopping()
    {
    }
};

///////////The admistration////////////////////////////////////////////////////////////////////////////////////////////
class Administration : protected Shopping //the admistration can view the customers details and purchases
{
protected:
    int IdofAdmin;
    int IdOfStoreManager;
    int IdofWorkers;
    int passwordofAdmin;
    int passwordofManager;
    int passwordofWorker;

public:
    Shopping *customers; //The use of the polymorphism
    Administration()     // the default constructor
    {
        IdofAdmin = 313;
        IdOfStoreManager = 3131;
        IdofWorkers = 868;
        passwordofAdmin = 0;
        passwordofManager = 0;
        passwordofWorker = 0;
    }

    Administration(int AdminID, int ManagerId, int WorkersId, int passAdmin, int passManager, int passWorker) //parametrized constructor
    {
        IdofAdmin = AdminID;
        IdOfStoreManager = ManagerId;
        IdofWorkers = WorkersId;
        passwordofAdmin = passAdmin;
        passwordofManager = passManager;
        passwordofWorker = passWorker;
    }

    //The setter and getters of the class
    void setteradminId(int adID)
    {
        IdofAdmin = adID;
    }

    int getteradminID()
    {
        return IdofAdmin;
    }

    void setterManagerID(int mangID)
    {
        IdOfStoreManager = mangID;
    }

    int getterManagerID()
    {
        return IdOfStoreManager;
    }

    void setterWorkers(int workID)
    {
        IdofWorkers = workID;
    }

    int getterWorker()
    {
        return IdofWorkers;
    }

    void setterAdminPassword(int adPass)
    {
        passwordofAdmin = adPass;
    }

    int getterAdminPassword()
    {
        return passwordofAdmin;
    }

    void setterManagerPassword(int managerpass)
    {
        passwordofWorker = managerpass;
    }

    int getterManagerPassword()
    {
        return passwordofWorker;
    }

    void setterWorkerPassword(int workerpass)
    {
        passwordofWorker = workerpass;
    }

    int getterWorkerPassword()
    {
        return passwordofWorker;
    }

    void AdminLogin()
    {
        cout << "Please enter your id admin: ";
        cin >> IdofAdmin;
        cout << endl;
        cout << "Please enter your admin password: ";
        cin >> passwordofAdmin;
        cout << endl;
        cout << "Your id is: ";
        cout << IdofAdmin;
        cout << endl;
    }

    void ManagerLogin()
    {
        cout << "Please enter your id manager: ";
        cin >> IdOfStoreManager;
        cout << endl;
        cout << "Please enter your manager password: ";
        cin >> passwordofManager;
        cout << endl;
        cout << "Your id manager is: ";
        cout << IdofAdmin;
        cout << endl;
    }

    void WorkerLogin()
    {
        cout << "Please enter your id worker: ";
        cin >> IdofWorkers;
        cout << endl;
        cout << "Please enter your worker password: ";
        cin >> passwordofWorker;
        cout << endl;
        cout << "Your id worker is: ";
        cout << IdofWorkers;
        cout << endl;
    }

    //The destructor
    ~Administration()
    {
    }
};

class Invoicing : public Shopping //the class of the invoice can only access the customer name and email
{
private:
    int invoiceid;
    int quantityitems;
    int totalamountpurchased;
    int creditinvoice;

public:
    Invoicing() //default constructor
    {
        invoiceid = 0;
        quantityitems = 5;
        totalamountpurchased = 1403;
        creditinvoice = 1200;
    }

    Invoicing(int invid, int quantity, int amount) //parametrized constructor
    {
        invoiceid = invid;
        quantityitems = quantity;
        totalamountpurchased = amount;
    }

    //The setters and the getters of the class
    void settersinvoiceid(int id)
    {
        invoiceid = id;
    }
    int gettersinvoiceid()
    {
        return invoiceid;
    }
    void settersquantity(int quantity)
    {
        quantityitems = quantity;
    }
    int gettersquantity()
    {
        return quantityitems;
    }

    void IdInvoice()
    {
        cout << "Please enter the invoice id: ";
        cin >> invoiceid;
        cout << endl;
        cout << "This is your invoice id: ";
        cout << invoiceid;
        cout << endl;
        cout << "Purchased: "
             << " an umberalla:$20 "
             << " a waterbottle:$10 "
             << " a playstation:$600 "
             << " a pepsi:$2 "
             << " a cycle:$800 ";
        cout << endl;
        cout << "Your total quantity is: ";
        cout << quantityitems;
        cout << endl;
        cout << "Your total amount totals to: ";
        cout << totalamountpurchased;

        cout << endl;
    }

    void CreditInvoice()
    {
        cout << "Please manager how much will the credited be detucted: ";
        cin >> creditinvoice;
        cout << endl;
        cout << "The total credited is: ";
        cout << creditinvoice;
    }
};

///////////////////////////The class of the Inventory Management////////////////////////
class Inventory
{
private:
    int sales_price;
    int purchase_price;
    int stock_quantity;
    string dairy;
    string department;

public:
    Inventory() //default constructor
    {
        sales_price = 0;
        purchase_price = 0;
        stock_quantity = 0;
    }
    Inventory(int sales, int purchase, int stock, string d, string depart) //parametrized
    {
        sales_price = sales;
        purchase_price = purchase;
        stock_quantity = stock;
        dairy = d;
        department = depart;
    }

    ~Inventory() //desuctor
    {
    }
};
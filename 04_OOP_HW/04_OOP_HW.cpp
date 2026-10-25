#include <iostream>
using namespace std;

struct PIB
{
    string firstName;
    string lastName;
    string middleName;
};

struct Phones
{
    int homePhone;
    int workPhone;
    int mobilePhone;
};

class Abonent
{
    PIB pib;
    Phones phone;
    string addInfo;
    static int count;
public:
    Abonent()
    {
        pib.firstName = "no first name";
        pib.lastName = "no last name";
        pib.middleName = "no middle name";
        phone.homePhone = 0;
        phone.workPhone = 0;
        phone.mobilePhone = 0;
        addInfo = "no additional info";
        count++;
    }
    Abonent(string firstName) : Abonent()
    {
        pib.firstName = firstName;
    }
    Abonent(string firstName, string lastName) : Abonent(firstName)
    {
        pib.lastName = lastName;
    }
    Abonent(string firstName, string lastName, string middleName) : Abonent(firstName, lastName)
    {
        pib.middleName = middleName;
    }
    Abonent(string firstName, string lastName, string middleName, int homePhone) : Abonent(firstName, lastName, middleName)
    {
        phone.homePhone = homePhone;
    }
    Abonent(string firstName, string lastName, string middleName, int homePhone, int workPhone) : Abonent(firstName, lastName, middleName, homePhone)
    {
        phone.workPhone = workPhone;
    }
    Abonent(string firstName, string lastName, string middleName, int homePhone, int workPhone, int mobilePhone) : Abonent(firstName, lastName, middleName, homePhone, workPhone)
    {
        phone.mobilePhone = mobilePhone;
    }
    Abonent(string firstName, string lastName, string middleName, int homePhone, int workPhone, int mobilePhone, string addInfo) : Abonent(firstName, lastName, middleName, homePhone, workPhone, mobilePhone)
    {
        this->addInfo = addInfo;
    }
    static int getCount() { return count; }

    void Show()
    {
        cout << "Abonent's name is " << pib.firstName << " " << pib.lastName << " " << pib.middleName << endl;
        cout << "Abonent's home phone is " << phone.homePhone << endl;
        cout << "Abonent's work phone is " << phone.workPhone << endl;
        cout << "Abonent's mobile phone is " << phone.mobilePhone << endl;
        cout << "Abonent's additional info is " << addInfo << endl;
        cout << "================================================" << endl;
    }
    
};

int Abonent::count = 0;

int main()
{
    Abonent person1;
    person1.Show();
    Abonent person2("Petro");
    person2.Show();
    Abonent person3("Petro","Petrenko");
    person3.Show();
    Abonent person4("Petro", "Petrenko", "Petronkovuch");
    person4.Show();
    Abonent person5("Petro", "Petrenko", "Petronkovuch", 381234567);
    cout << Abonent::getCount() << endl;
    person5.Show();
    Abonent person6("Petro", "Petrenko", "Petronkovuch", 381234567, 388765432);
    person6.Show();
    Abonent person7("Petro", "Petrenko", "Petronkovuch", 381234567, 388765432, 381234987);
    person7.Show();
    Abonent person8("Petro", "Petrenko", "Petronkovuch", 381234567, 388765432, 381234987, "Good person");
    person8.Show();
    cout << Abonent::getCount() << endl;
}

#include <iostream>
#include "dma.h"
using namespace std;
namespace seneca {

    


    void reverse()
    {
        int n,i;
        cout << "Enter the number of double values: \n> " << endl;
        cin >> n;
        double* arr = new double[n];
        for (i = 0; i < n;i++) {
            cout << i + 1 << "> " << endl;
            cin >> arr[i];
        }
        for (i = n - 1; i > 0;i--) {
            cout << arr[i] << endl;
        }
        delete[]arr;
    }

    Contact* getContact()
    {
        Contact* cont = new Contact;
        cout << "Name: " << endl;
        cin >> cont->m_name;
        cout << "Last name: " << endl;
        cin >> cont->m_lastname;
        cout << "Phone number: " << endl;
        cin >> cont->m_phoneNumber;
        return cont;
    }

    void display(Contact& contact)
    {
        cout << contact.m_name << contact.m_lastname << ", " << "+" << contact.m_phoneNumber << endl;
    }

    void deallocate(Contact* contact)
    {
        delete contact;
    }

    void setEmpty(Contact& contact)
    {
        contact.m_name[0] = '\0';
        contact.m_lastname[0] = '\0';
        contact.m_phoneNumber = 0;
    }


}

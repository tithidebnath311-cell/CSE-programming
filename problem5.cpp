#include<iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() = 0;
    virtual ~Payment() {}
};

class CreditCardPayment : public Payment {
public:
    void processPayment() { cout << "Processing payment via Credit Card..." << endl; }
};

class MobileBankingPayment : public Payment {
public:
    void processPayment() { cout << "Processing payment via Mobile Banking..." << endl; }
};

int main() {
    Payment *p;
    
    p = new CreditCardPayment();
    p->processPayment();
    delete p;
    
    p = new MobileBankingPayment();
    p->processPayment();
    delete p;
    
    return 0;
}
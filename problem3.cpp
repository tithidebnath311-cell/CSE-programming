#include<iostream>
using namespace std;

class Smartphone {
public:
    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;
    virtual ~Smartphone() {} // virtual destructor
};

class Android : public Smartphone {
public:
    void takeSelfie() { cout << "Android: Taking selfie with Google Camera" << endl; }
    void makeCall() { cout << "Android: Making call using Dialer" << endl; }
};

class IPhone : public Smartphone {
public:
    void takeSelfie() { cout << "iPhone: Taking selfie with iOS Camera" << endl; }
    void makeCall() { cout << "iPhone: Making call using FaceTime" << endl; }
};

int main() {
    Smartphone *ptr;
    
    ptr = new Android();
    ptr->takeSelfie();
    ptr->makeCall();
    delete ptr;
    
    ptr = new IPhone();
    ptr->takeSelfie();
    ptr->makeCall();
    delete ptr;
    
    return 0;
}
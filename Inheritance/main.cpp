#include <iostream>
using namespace std;

class Chef //We call this a superclass
{
    public:
        void makeChicken() 
        {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() 
        {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() 
        {
            cout << "The chef makes a chicken tender milkshake" << endl;
        }
};

class ItalianChef : public Chef //We call this a subclass
{
    public:
        void makePizza() 
        {
            cout << "The chef makes pizza" << endl;
        }
        void makeSpecialDish() 
        {
            cout << "The chef makes spaghetti bolognaise" << endl;
        }
};

class TurkishChef : public Chef 
{
    public:
        void makeBaklava() 
        {
            cout << "The chef makes baklava" << endl;
        }
};

int main() 
{
    Chef boringChef;
    boringChef.makeSpecialDish();

    ItalianChef chef1;
    chef1.makeChicken(); //Any chef can make this
    chef1.makePizza();
    chef1.makeSpecialDish(); //Overrides makeSpecialDish() method of the Chef class
    //chef1.makeBaklava(); This doesn't work because chef1 is an Italian chef

    TurkishChef chef2;
    chef2.makeSalad(); //Any chef can make this
    chef2.makeBaklava();
    //chef2.makePizza(); This doesn't work because chef2 is a Turkish chef

    return 0;
}

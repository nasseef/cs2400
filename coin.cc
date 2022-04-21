#include "Die.h"
class Coin{
public:
    Coin(); //coin.setNumSides(2);
    //getters
    string getCoinFaceValue();//1 (Heads), 2 (Tails)

    void flip(); //coin.roll();
private:
    Die coin;
};
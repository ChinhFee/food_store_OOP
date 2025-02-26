#include <string>

using namespace std;

class Dish
{
    private:
        int dishID;
        string dishName;
        double price;
    public:
        Dish(int dishID, string dishName, double price, string description){
            this->dishID = dishID;
            this->dishName = dishName;
            this->price = price;
        }
        string getDetails(){
            return dishID + ". " + dishName + ": $" + to_string(price);
        }
};

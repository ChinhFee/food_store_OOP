#include <string>

using namespace std;

class Dish
{
    private:
        int dishID;
        string dishName;
        double gia;
    public:
    //sửa lại gia -> price  để phù hợp với tên biến ở dưới
        Dish(int dishID, string dishName, double gia, string description){
            this->dishID = dishID;
            this->dishName = dishName;
            this->price = gia;
        }
        string getDetails(){
            return dishID + ". " + dishName + ": $" + to_string(price);
        }
};

#include <string>
#include <vector>

#include "Dish.h"

using namespace std;
// danhuy đã can thiệp vào đây
class Menu
{
    private:
        int menuID;
        string menuName;
        vector<Dish> dishes;
    public:
    Menu(int menuID, string menuName){
        this->menuID = menuID;
        this->menuName = menuName;
    }
    void addDish(Dish dish){
        dishes.push_back(dish);
    }
    string getMenuDetails(){
        string details = menuID + ". " + menuName + "\n"; 
        for(int i = 0; i < dishes.size(); i++){ 
            details += to_string(i+1) + dishes[i].getDetails() + "\n";
        }
        return details; 
  }
};
#include <stdio.h>
#include <stdbool.h>

typedef struct Tuple {
    char name[20];
    int price;
    char type[7];
    int water;
    int milk;
    int intensity;
    char roastLevel[7];
    bool enabled;
} Coffee;

Coffee coffees[12] = {
        {"Ristretto", 140, "Robusta", 20, 0, 5, "Dark",true},
        {"Espresso", 150, "Arabica", 30, 0, 5, "Dark", true},
        {"Latte", 200, "Arabica", 60, 30, 3, "Medium",true},
        {"Cappuccino", 180, "Arabica", 50, 40, 4, "Medium",true},
        {"Americano", 120, "Arabica", 100, 0, 2, "Medium",true},
        {"Mocha", 220, "Arabica", 70, 30, 4, "Medium",true},
        {"Long Black", 130, "Arabica", 120, 0, 3, "Medium",true},
        {"Macchiato", 160, "Arabica", 40, 10, 4, "Medium",true},
        {"Irish Coffee", 250, "Arabica", 50, 20, 5, "Dark",true},
        {"Black Coffee", 100, "Robusta", 150, 0, 4, "Dark",true},
        {"Turkish Coffee", 120, "Robusta", 100, 0, 5, "Dark",true},
        {"Vietnamese Coffee", 130, "Robusta", 100, 30, 4, "Medium",true},

};

//int currentWater = 5000;
//int currentMilk = 1000;
int currentWater = 200;
int currentMilk = 100;


void makeCoffee(int index){
    currentWater -= coffees[index].water;
    currentMilk -= coffees[index].milk;
}

void checkAvailability() {
    for (int i = 0; i < sizeof(coffees) / sizeof(coffees[0]); ++i) {
        coffees[i].enabled = (coffees[i].water <= currentWater && coffees[i].milk <= currentMilk);
    }
}

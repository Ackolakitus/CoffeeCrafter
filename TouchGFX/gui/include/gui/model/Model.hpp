#ifndef MODEL_HPP
#define MODEL_HPP
#include <touchgfx/hal/Types.hpp>
class ModelListener;

typedef struct Tuple {
    char name[20];
    int price;
    char type[8];
    int water;
    int milk;
    int intensity;
    char roastLevel[7];
    bool enabled;
} Coffee;

class Model
{
public:
    Model();

    void bind(ModelListener* listener){
        modelListener = listener;
    }

    void tick();

    char* getCoffeeType(int16_t index){
        return coffeeArray[index].type;
    }

    int getCoffeePrice(int16_t index){
        return coffeeArray[index].price;
    }

    char* getCoffeeRoastLevel(int16_t index){
        return coffeeArray[index].roastLevel;
    }

    int getCoffeeIntensity(int16_t index){
        return coffeeArray[index].intensity;
    }

    void setSelectedCoffee(int16_t index){
        selectedCoffee = index;
    }

    int16_t getSelectedCoffee(){
        return selectedCoffee;
    }

    void setIsCoffeeChosen(bool dali){
        isCoffeeChosen = dali;
    }

    bool getIsCoffeeChosen(){
        return isCoffeeChosen;
    }

    int16_t getSugarLevel(){
        return chosenSugarLevel;
    }

    void setSugarLevel(int16_t level){
        chosenSugarLevel = level;
    }

    void sendCoffeeIndexTroughQueue();

    bool getIsCoffeeEnabled(int16_t index){
        return coffeeArray[index].enabled;
    }

    int getCoffeeWater(int16_t index){
        return coffeeArray[index].water;
    }

    int getCoffeeMilk(int16_t index){
        return coffeeArray[index].milk;
    }
protected:
    ModelListener* modelListener;
    Coffee coffeeArray[12];
    int16_t selectedCoffee;
    bool isCoffeeChosen;
    int16_t chosenSugarLevel;
};


#endif // MODEL_HPP


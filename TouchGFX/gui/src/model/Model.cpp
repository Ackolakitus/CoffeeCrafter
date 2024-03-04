#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

Coffee getCoffees[12];
int coffeeIndex;

extern "C"{
	//Communicate with the backend app via queues
        QueueHandle_t CoffeesHandle;
        QueueHandle_t ChosenCoffeeHandle;
        TaskHandle_t xUpdateCoffees;
        TaskHandle_t xMaintenance;
}

Model::Model() : modelListener(0), coffeeArray() , selectedCoffee(0), isCoffeeChosen(false)
{
     
        CoffeesHandle = xQueueGenericCreate(1, sizeof(coffeeArray), 0);
        ChosenCoffeeHandle = xQueueGenericCreate(1,sizeof(coffeeIndex),0);

}

void Model::tick()
{
	if(xQueueReceive(CoffeesHandle , &getCoffees, 0) == pdTRUE)
        {
		for(int i=0; i<12; i++)
		{
			coffeeArray[i] = getCoffees[i];
		}
	}
}

void Model::sendCoffeeIndexTroughQueue()
{
	setIsCoffeeChosen(false);
	int coffeeIndex = getSelectedCoffee();
	xQueueSend(ChosenCoffeeHandle, &coffeeIndex, 0);
}
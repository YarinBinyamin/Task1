#include <iostream>
#include "Volunteer.h"

Volunteer::Volunteer(int id1, const string &name1):id(id1),name(name1){
    completedOrderId = NO_ORDER;
    activeOrderId = NO_ORDER;

    }

int Volunteer::getId() const{
    return id;

}

const string& Volunteer:: getName() const{
    return name;
}

int Volunteer:: getActiveOrderId() const{
    return activeOrderId;
}

int Volunteer::getCompletedOrderId() const{
    return completedOrderId;
}

bool Volunteer::isBusy() const{
    //depends on other class, leave for later
}
















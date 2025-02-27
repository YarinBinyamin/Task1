#include <iostream>
#include "Volunteer.h"

 CollectorVolunteer::CollectorVolunteer(int id1, string name1, int coolDown1):Volunteer(id1, name1),coolDown(coolDown1){
    timeLeft=0;

 }

 CollectorVolunteer* CollectorVolunteer::clone() const{//we deleted override
    return new CollectorVolunteer(*this);

 }

 void CollectorVolunteer::step(){//we deleted override
    //need to complete

 }

 int CollectorVolunteer::getCoolDown() const{
    return coolDown;
 }

 int CollectorVolunteer::getTimeLeft() const{
    return timeLeft;//check where to change timeLeft
 }

 bool CollectorVolunteer::decreaseCoolDown(){
    if(timeLeft>0){
        timeLeft=timeLeft-1;
    }
    
    if(timeLeft==0){
        return true;
    }

    else{
        return false;
    }

 }

 bool CollectorVolunteer::hasOrdersLeft() const {//we deleted override
    return true;
 }

 bool CollectorVolunteer::canTakeOrder(const Order &order) const {//we deleted override
    //how to use the paraneter order?
    return !isBusy();
 }

 void CollectorVolunteer::acceptOrder(const Order &order) {//we deleted override
    activeOrderId = order.getId();
    timeLeft = coolDown;

 }

 string CollectorVolunteer::toString() const {//we deleted override
    return ("id = " + getId() + "\nVolunteer name = " + getName() +
    "\ncompletedOrderId= " + completedOrderId + "\nactiveOrderId =" + activeOrderId +"\ncoolDown = " + coolDown +
    "\ntimeLeft = " + timeLeft);
 }




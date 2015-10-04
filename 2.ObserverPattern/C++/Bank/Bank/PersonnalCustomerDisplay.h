#pragma once

#include <iostream>
#include <string>

#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"
#include "AdvertisingData.h"

using namespace std;

class PersonnalCustomerDisplay : public Observer, DisplayElement{

private:

	Subject *subject;
	string kospi, kosdaq;

public:

	PersonnalCustomerDisplay(Subject *subject){
		this->subject = subject;
		
		subject->registerObserver(this);
	}

	void display() {
		cout << "[PersonnalCustomerDisplay] Kospi conditions : " 
			<< kospi 
			<< " kosdaq conditions: "
			<< kosdaq << endl;
	}

	void update(){

		AdvertisingData *ad = dynamic_cast<AdvertisingData *>(subject);
		this->kospi = ad->getKospi();
		this->kosdaq = ad->getKosdaq();

		display();
	}

};
#include "AdvertisingData.h"
#include "CorporateCustomerDisplay.h"
#include "PersonnalCustomerDisplay.h"

int main(){

	// Subject
	AdvertisingData *adData = new AdvertisingData();
	
	// Observers
	CorporateCustomerDisplay *ccd = new CorporateCustomerDisplay(adData);
	PersonnalCustomerDisplay *pcd = new PersonnalCustomerDisplay(adData);

	// Update
	adData->setMeasurements("1,969.68", "686.42");
	adData->setMeasurements("1,873,64", "694.32");

	return 0;
}
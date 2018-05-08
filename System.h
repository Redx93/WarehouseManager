#ifndef SYSTEM_H
#define SYSTEM_H

#include "DatabaseHandler.h"
#include "WarehouseHandler.h"

class System
{
private:
	DatabaseHandler* databaseHandler;
	WarehouseHandler* warehouseHandler;

	Warehouse* selectedWarehouse;
public:
	System(int databaseCapacity = 1, int warehouseCapacity = 10);
	virtual ~System();

	void selectWarehouse(std::string name);
	void addWarehouse(Warehouse* warehouse);
	void removeWarehouse(std::string name);
	
	Warehouse* getSelectedWarehouse() const;
    bool isDatabaseHandlerFull() const;
    bool isWarehouseHandlerFull() const;
    bool warehouseExists(std::string name) const;
};

#endif // !SYSTEM_H

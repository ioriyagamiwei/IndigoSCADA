/**********************************************************************
--- Qt Architect generated file ---
File: modbus_masterConfigurationData.h
Last generated: Thu Jan 4 16:13:32 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#ifndef modbus_masterConfigurationData_included
#define modbus_masterConfigurationData_included

#include <qt.h>

class modbus_masterConfigurationData : public QDialog
{
	Q_OBJECT
	public:
	modbus_masterConfigurationData(QWidget *parent = NULL, const char *name = NULL);
	virtual ~modbus_masterConfigurationData();
	protected slots:
	virtual void Help() =0;
	virtual void OkClicked() =0;
	protected:
	QLabel *Name;
	QSpinBox *NItems;
	QSpinBox *PollInterval;
	//QLineEdit *OpcServerProgIDText;
	QLineEdit *MODBUServerIPAddressText;
};
#endif // modbus_masterConfigurationData_included

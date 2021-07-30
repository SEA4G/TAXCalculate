#pragma once
struct opt{
	char op; //option (y/n) or (1-9)
}; //option
struct salTax{
	double salary, bonus, family,lastSal, tax;
	int spouse, child;
};
struct vats{
	double income, tax, lastincome;
	char ch,op;
};
struct pro{ // tax on property 
	double sale, afterpay, tax;
	char op;
};


void welcome(); //welcome
void menu(); //menu
void salaryTax(); //salary tax
void vat(); // VALUE ADDED TAX
void propertyTax(); // Tax on Properties
void salaryTaxData(); // view data of Salary Tax
void vatData(); // view Vat data
void propertyData(); //view properties data 
void datamenu(); //menu of viewing data list
void clearSalary(); //clear Salary tax
void clearVat(); // clear Value added tax 
void clearProperty(); // clear tax on property 
void clear(); //bind all clear data tax

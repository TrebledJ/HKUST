#include <iostream>
#include <string>
#include "account.h"

using std::string;
using namespace std;


int main()
{

    Income* income1 = new Income(10000, false, "28/10/2020", GIFTS, CASH, "Scholarship");
    income1->setDate("28/11/2020");
	cout << income1->getDate() << endl;
	
    delete income1;

    return 0;
} 
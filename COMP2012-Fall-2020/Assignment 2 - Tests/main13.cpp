#include <iostream>
#include <string>
#include "account.h"

using std::string;
using namespace std;

 

int main()
{

    Expenses* expense1 = new Expenses(-3000, false, "30/10/2020", INVEST_RETURNS, BANK, "Investment Losses");
    expense1->setGoesTo(CASH);
	GoesTo where = expense1->getGoesTo();
	cout << "GoesTo matches? " << (where==CASH) << endl;
	
    delete expense1;

    return 0;
} 
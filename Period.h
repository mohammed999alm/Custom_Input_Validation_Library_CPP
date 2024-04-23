#pragma once
#include "clsDate.h"

class Period
{
	clsDate startDate;
	clsDate endDate;


public :

	Period(clsDate startDate, clsDate endDate) 
	{
		this->startDate = startDate;
		this->endDate = endDate;
	}

	static bool isOverlapPeriod(Period period1, Period period2) 
	{
		//if (period1.startDate.isDateAfterDate2(period2.endDate) 
		//	|| period1.endDate.isDateBeforeDate2(period2.startDate))
		//	return false;

		if (period1.startDate.compareDates(period2.endDate) == clsDate::After
			||
			period1.endDate.compareDates(period2.startDate) == clsDate::Before
			)
			return false;

		else
			return true;
	}

	bool IsOverlapWith(Period period)
	{
		return isOverlapPeriod(*this, period);
	}

	void print() 
	{
		cout << "Period Start : " << endl;
		startDate.print();

		cout << "Period End   : " << endl;
		endDate.print();
	}
};
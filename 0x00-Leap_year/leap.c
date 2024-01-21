#include "leap.h"

/**
 * leap_year - check for leap year
 * @year: to be checked
 * Return: boolean
 */
 
 /* if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        return (true);
    return (false);

*/


bool leap_year(int year)
{
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}



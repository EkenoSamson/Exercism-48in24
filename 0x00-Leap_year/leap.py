#!/usr/bin/python3
""" Module contains function leap_year"""


def leap_year(year):
    """ Returns True if the year is leap year; otherwise Returns False

    if ((year % 4 == 0) and (year % 100 != 0 or year % 400 == 0)):
        return True
    return False
    """
    
    return ((year % 4 == 0) and (year % 100 != 0 or year % 400 == 0))

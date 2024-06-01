#pragma once
#include <iostream>
using namespace std;
class SortBL
{
    public:
    int index;
    string organization, name, website;
    string country, description, industry;
    int found, numOfEmployees;
    SortBL(int indx, string organ, string n, string web, string c, string des, int found, string indus, int noe)
    {
        index = indx;
        organization = organ;
        name = n;
        website = web;
        country = c;
        description = des;
        found = found;
        industry = indus;
        numOfEmployees = noe;
    }
    SortBL()
    {
    }
};
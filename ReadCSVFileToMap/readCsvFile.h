#pragma once
#include<fstream>
#include<string>
#include<cstdlib>
#include<vector>
#include <sstream>
#include"lookupTableGmOverId.h"
class readCsvFile
{
public:
    readCsvFile();
    ~readCsvFile();
    void readCSVFile(lookupTableGmOverId &);
};


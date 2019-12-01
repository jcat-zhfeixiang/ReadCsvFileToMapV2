#include "lookupTableGmOverId.h"



lookupTableGmOverId::lookupTableGmOverId()
{
}


lookupTableGmOverId::~lookupTableGmOverId()
{
}

void lookupTableGmOverId::toCsvMapString()
{
    std::map<L, std::map<IdW, GmId>>::iterator iterCsvMap;
    std::map<IdW, GmId>::iterator iterCsv;
    iterCsvMap = csvMap.begin();
    for (iterCsvMap; iterCsvMap != csvMap.end(); iterCsvMap++)
    {
        std::cout << "L: " << iterCsvMap->first << std::endl;
        iterCsv = (iterCsvMap->second).begin();
        for (iterCsv; iterCsv != (iterCsvMap->second).end(); iterCsv++)
        {
            std::cout << iterCsv->first << "," << iterCsv->second << std::endl;
        }
    }
    return;
}

void lookupTableGmOverId::setCSVMap(std::map<L, std::map<IdW, GmId>> csvMap)
{
    this->csvMap = csvMap;
}

std::map<L, std::map<IdW, GmId>> lookupTableGmOverId::getCSVMap()
{
    return this->csvMap;
}

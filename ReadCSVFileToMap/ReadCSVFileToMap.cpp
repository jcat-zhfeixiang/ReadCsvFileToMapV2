#include<iostream>
#include<map>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include"lookupTableGmOverId.h"
#include "readCsvFile.h"
int main(void) {
    std::cout << "key-->value:" << std::endl;
    //�����б�
    lookupTableGmOverId *ltgi = new lookupTableGmOverId();
    readCsvFile *rcf = new readCsvFile();
    rcf->readCSVFile(*ltgi);
    //ltgi->toCsvMapString();
    //����L��IdW��ѯGmId
    //eg:L = 3 ,IdW =  7.482826088
    L l = 3;
    IdW idw = 7.482826088;
    std::map<L, std::map<IdW, GmId>> csvMap = ltgi->getCSVMap();
    std::map<L, std::map<IdW, GmId>>::iterator iterCsvMap = csvMap.find(l);
    if (iterCsvMap != csvMap.end())
    {
        std::map<IdW, GmId>::iterator iterCsv = (iterCsvMap->second).find(idw);
        if (iterCsv != (iterCsvMap->second).end())
        {
            std::cout << "L: " << l << std::endl;
            std::cout << "IdW: " << idw << " , " << iterCsv->second << std::endl;
        }
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "value-->key:" << std::endl;
    l = 3;
    GmId gmid = 2.247144345;
    std::cout << "L: " << l << std::endl;
    std::cout << "value: " << gmid << std::endl;
    //����value��ö�Ӧ��key
    iterCsvMap = csvMap.find(l);
    if (iterCsvMap != csvMap.end())
    {
        std::map<IdW, GmId>::iterator iterCsv = (iterCsvMap->second).find(idw);
        if (iterCsv != (iterCsvMap->second).end())
        {
            std::map<IdW, GmId>::iterator iterCsv;
            iterCsv = (iterCsvMap->second).begin();
            for (iterCsv; iterCsv != (iterCsvMap->second).end(); iterCsv++)
            {
                if (iterCsv->second == gmid)
                {
                    std::cout << "key: " << iterCsv->first;
                }
            }
        }
    }

    return 0;
}
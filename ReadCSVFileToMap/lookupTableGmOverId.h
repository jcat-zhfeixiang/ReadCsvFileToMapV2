#pragma once
#include<iostream>
#include<map>
#include<string>
#define L int
#define IdW float
#define GmId float
class lookupTableGmOverId
{
public:
    lookupTableGmOverId();
    ~lookupTableGmOverId();
    void toCsvMapString();
    void setCSVMap(std::map<L, std::map<IdW, GmId>>);
    std::map<L, std::map<IdW, GmId>> getCSVMap();
private:
    std::map<L, std::map<IdW, GmId>> csvMap;
};


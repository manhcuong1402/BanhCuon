#pragma once
#include <bits/stdc++.h>
using namespace std;
class BanhCuon
{
    protected:
        double sl_vo;
        double sl_nhan;
        double gia_vo;
        double gia_nhan;
    public:
        BanhCuon();
        BanhCuon(double,double,double, double);        
};

BanhCuon::BanhCuon(){}
BanhCuon::BanhCuon(double slvo,double giavo,double slnhan, double gianhan){
    sl_vo=slvo;
    sl_nhan=slnhan;
    gia_vo=giavo;
    gia_nhan=gianhan;
}

#pragma once
#include "BanhCuon.h"
#include <bits/stdc++.h>
using namespace std;
class BanhCuonThit : public BanhCuon
{
private:
public:
    BanhCuonThit();
    BanhCuonThit(double, double,double, double);
    void setSL_vo(double);
    void setSL_nhan(double);
    void setGia_vo(double);
    void setGia_nhan(double);
    double getSl_vo()const;
    double getSl_nhan()const;
    double getGia_vo()const;
    double getGia_nhan()const;
    double getPrice()const;
};
BanhCuonThit::BanhCuonThit(){}
BanhCuonThit::BanhCuonThit(double slvo, double giavo, double slnhan, double gianhan){
    sl_vo=slvo;
    gia_vo=giavo;
    sl_nhan=slnhan;
    gia_nhan=gianhan;
}
void BanhCuonThit::setSL_vo(double slvo){
    sl_vo=slvo;
}
void BanhCuonThit::setSL_nhan(double slnhan){
    sl_nhan=slnhan;
}
void BanhCuonThit::setGia_vo(double giavo){
    gia_vo=giavo;
}
void BanhCuonThit::setGia_nhan(double gianhan){
    gia_nhan=gianhan;
}
double BanhCuonThit::getSl_vo()const{
    return sl_vo;
}
double BanhCuonThit::getSl_nhan()const{
    return sl_nhan;
}
double BanhCuonThit::getGia_vo()const{
    return gia_vo;
}
double BanhCuonThit::getGia_nhan()const{
    return gia_nhan;
}
double BanhCuonThit::getPrice()const{
    return (sl_vo/100.0*gia_vo + sl_nhan/100.0*gia_nhan); 
}

#pragma once
#include "BanhCuon.h"
#include "BanhCuonThit.h"
#include <bits/stdc++.h>
using namespace std;
class BanhCuonDB : public BanhCuonThit
{
private:
    double sl_thit_CC;
    double gia_thit_CC;
public:
    BanhCuonDB();
    BanhCuonDB(double, double,double,double,double,double);
    void setSl_thit(double);
    void setGia_thit(double);
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
BanhCuonDB::BanhCuonDB(){}
BanhCuonDB::BanhCuonDB(double slvo, double giavo, double slnhan, double gianhan, double slthit, double giathit){
    sl_vo=slvo;
    gia_vo=giavo;
    sl_nhan=slnhan;
    gia_nhan=gianhan;
    sl_thit_CC=slthit;
    gia_thit_CC=giathit;
}
void BanhCuonDB::setSl_thit(double slthit){
    sl_thit_CC=slthit;
}
void BanhCuonDB::setGia_thit(double giathit){
    gia_thit_CC=giathit;
}
void BanhCuonDB::setSL_vo(double slvo){
    sl_vo=slvo;
}
void BanhCuonDB::setSL_nhan(double slnhan){
    sl_nhan=slnhan;
}
void BanhCuonDB::setGia_vo(double giavo){
    gia_vo=giavo;
}
void BanhCuonDB::setGia_nhan(double gianhan){
    gia_nhan=gianhan;
}
double BanhCuonDB::getSl_vo()const{
    return sl_vo;
}
double BanhCuonDB::getSl_nhan()const{
    return sl_nhan;
}
double BanhCuonDB::getGia_vo()const{
    return gia_vo;
}
double BanhCuonDB::getGia_nhan()const{
    return gia_nhan;
}
double BanhCuonDB::getPrice()const{
    return (sl_vo/100.0*gia_vo + sl_nhan/100.0*gia_nhan + sl_thit_CC/100.0*gia_thit_CC); 
}

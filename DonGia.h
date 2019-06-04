#pragma once
#include "BanhCuon.h"
#include "BanhCuonChay.h"
#include "BanhCuonMong.h"
#include "BanhCuonThit.h"
#include "BanhCuonDB.h"
#include <iostream>
using namespace std;
class DonGia : public BanhCuon
{
    protected:
        static int counter;
        int ID;
        BanhCuonChay A;
        BanhCuonMong B;
        BanhCuonThit C;
        BanhCuonDB D;
    public:
        DonGia();
        DonGia(BanhCuonChay, BanhCuonMong, BanhCuonThit, BanhCuonDB);
        void Print()const;
        double tinh_lai()const;
};

DonGia::DonGia(){}
DonGia::DonGia(BanhCuonChay a, BanhCuonMong b, BanhCuonThit c, BanhCuonDB d){
    A=a;
    B=b;
    C=c;
    D=d;
    ID=counter;
    counter++;
}
int DonGia::counter=1;
void DonGia::Print()const{
    cout<<"ID\t"<<"Ten loai banh\t\t\t\t"<<"Khoi luong vo\t\t"<<"Khoi luong nhan\t\t\t"<<"Gia tien"<<endl;
    cout<<"1"<<"\tBanh Cuon Chay\t\t"<<"\t\t"<<A.getSl_vo()<<"\t\t\t"<<A.getSl_nhan()<<"\t\t\t\t"<<A.getPrice()<<endl;
    cout<<"2"<<"\tBanh Cuon Mong\t\t"<<"\t\t"<<B.getSl_vo()<<"\t\t\t"<<B.getSl_nhan()<<"\t\t\t\t"<<B.getPrice()<<endl;
    cout<<"3"<<"\tBanh Cuon Thit\t\t"<<"\t\t"<<C.getSl_vo()<<"\t\t\t"<<C.getSl_nhan()<<"\t\t\t\t"<<C.getPrice()<<endl;
    cout<<"4"<<"\tBanh Cuon DB\t\t"<<"\t\t"<<D.getSl_vo()<<"\t\t\t"<<D.getSl_nhan()<<"\t\t\t\t"<<D.getPrice()<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t"<<"Tong gia tien"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t"<<A.getPrice()+B.getPrice()+C.getPrice()+D.getPrice()<<endl;
}
double DonGia::tinh_lai()const{
    return (A.getPrice()+B.getPrice()+C.getPrice()+D.getPrice()*0.1);

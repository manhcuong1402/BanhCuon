#include "BanhCuon.h"
#include "BanhCuonMong.h"
#include "BanhCuonChay.h"
#include "BanhCuonThit.h"
#include "BanhCuonDB.h"
#include "DonGia.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    BanhCuon *a;
    BanhCuon *b;
    BanhCuon *c;
    BanhCuon *d;
    BanhCuonChay A(100,10000,200,15000);
    BanhCuonMong B(100,10000,300,10000);
    BanhCuonThit C(100,10000,400,20000);
    BanhCuonDB D(100,10000,200,20000,200,30000);
    DonGia don_gia(A,B,C,D);
    a=&A;
    b=&B;
    c=&C;
    d=&D;
    don_gia.Print();
}
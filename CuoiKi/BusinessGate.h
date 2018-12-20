#ifndef _BUSINESS_GATE_H_
#define _BUSINESS_GATE_H_

#include "Gate.h"

class BusinessGate:public Gate{
    private:
        int donGia;
        int soHang;
    public:
        virtual void input(){
            cout<<"Nhap don gia: ";
            cin>>donGia;
            cout<<"Nhap so hang: ";
            cin>>soHang;
        }
        virtual bool quaCong(Prince &p){
            if (p.getTien()>=(donGia*soHang)){
                p.setTien(p.getTien()-donGia*soHang);
                return true;
            }
            return false;
        }
};
#endif
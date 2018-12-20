#ifndef _POWER_GATE_H_
#define _POWER_GATE_H_

#include "Gate.h"

class PowerGate:public Gate{
    private:
        int sucManh;
    public:
        virtual void input(){
            cout<<"Nhap chi so suc manh: ";
            cin>>sucManh;
        }
        virtual bool quaCong(Prince &p){
            if (p.getSucManh()>=sucManh){
                p.setSucManh(p.getSucManh()-sucManh);
                return true;
            }
            return false;
        }
};
#endif
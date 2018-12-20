#ifndef _ACADEMIC_GATE_H_
#define _ACADEMIC_GATE_H_

#include "Gate.h"

class AcademicGate:public Gate{
    private:
        int triTue;
    public:
        virtual void input(){
            cout<<"Nhap chi so tri tue: ";
            cin>>triTue;
        }
        virtual bool quaCong(Prince &p){
            if (p.getTriTue()>=triTue){
                return true;
            }
            return false;
        }
};
#endif
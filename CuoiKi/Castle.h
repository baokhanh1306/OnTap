#ifndef _CASTLE_H_
#define _CASTLE_H_

#include "Gate.h"
#include "BusinessGate.h"
#include "AcademicGate.h"
#include "PowerGate.h"
#include <vector>

class Castle{
    private:
        vector<Gate*> Gates;
        Prince p;
    public:
        void inputGates(){
            cout<<"Nhap so luong cong: ";
            int n;
            cin>>n;
            for (int i=0;i<n;i++){
                Gate* gate;
                int choice;
                cout<<"Nhap lua chon cong(1 tien,2 tri tue,3 suc manh): ";
                cin>>choice;
                if (choice==1){
                    gate=new BusinessGate;
                }
                else if (choice==2){
                    gate=new AcademicGate;
                }
                else{
                    gate=new PowerGate;
                }
                gate->input();
                Gates.push_back(gate);
            }
        }
        void inputPrince(){
            cout<<"Nhap thong tin hoang tu: "<<endl;
            p.input();
        }
        bool hoanThanh(){
            for (int i=0;i<Gates.size();i++){
                if (!Gates[i]->quaCong(p)){
                    cout<<"Hoang tu khong qua cong hehe"<<endl;
                    return false;
                }
            }
            p.output();
            return true;
        }
};
#endif
#ifndef _PRINCE_H_
#define _PRINCE_H_

#include <iostream>
using namespace std;

class Prince{
    private:
        int tien,triTue,sucManh;
    public:
        void input(){
            cout<<"Nhap tien: ";
            cin>>tien;
            cout<<"Nhap tri tue: ";
            cin>>triTue;
            cout<<"Nhap suc manh: ";
            cin>>sucManh;
        }
        void output(){
            cout<<"Tien: "<<tien<<endl;
            cout<<"Tri tue: "<<triTue<<endl;
            cout<<"Suc manh: "<<sucManh<<endl;
        }
        int getTien() const{
            return tien;
        }
        int getTriTue() const{
            return triTue;
        }
        int getSucManh() const{
            return sucManh;
        }
        void setTien(int t){
            tien=t;
        }
        void setTriTue(int tt){
            triTue=tt;
        }
        void setSucManh(int sm){
            sucManh=sm;
        }
};
#endif
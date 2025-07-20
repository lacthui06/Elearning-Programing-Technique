# include <iostream>
using namespace std;
int main(){
    int rut, 
    soto1=0, soto2=0, soto3=0, soto4=0, soto5=0, soto6=0, soto7=0, soto8=0, soto9=0,
    to1 = 500000, to2 = 200000, to3 = 100000, to4 = 50000, to5 = 20000,
    to6 = 10000, to7 = 5000, to8 = 2000, to9 = 1000;
    
    do{cout<<"Nhap so tien ban muon rut : ";
    cin>>rut;
        if (rut >5000000||rut<20000|| rut % 1000 != 0){
        cout <<"So tien duoc rut toi da la 5.000.000 VND, toi thieu la 20.000 VND\n"
        <<"Va don vi rut toi thieu la hang nghin! \n"
        <<"Vui long nhap lai : ";
        }
    }while (rut > 5000000||rut<20000|| rut % 1000 != 0);

        while (rut >= to1){
        rut-=to1;
        soto1+=1;
        }
        if (soto1>0) cout<<"- "<<soto1<<" to 500.000\n";

        while (rut >= to2){
        rut-=to2;
        soto2+=1;
        }
        if (soto2>0) cout<<"- "<<soto2<<" to 200.000\n";

        while (rut >= to3){
        rut-=to3;
        soto3+=1;
        }
        if (soto3>0) cout<<"- "<<soto3<<" to 100.000\n";

        while (rut >= to4){
        rut-=to4;
        soto4+=1;
        }
        if (soto4>0) cout<<"- "<<soto4<<" to 50.000\n";

        while (rut >= to5){
        rut-=to5;
        soto5+=1;
        }
        if (soto5>0) cout<<"- "<<soto5<<" to 20.000\n";

        while (rut >= to6){
        rut-=to6;
        soto6+=1;
        }
        if (soto6>0) cout<<"- "<<soto6<<" to 10.000\n";

        while (rut >= to7){
        rut-=to7;
        soto7+=1;
        }
        if (soto7>0) cout<<"- "<<soto7<<" to 5.000\n";

        while (rut >= to8){
        rut-=to8;
        soto8+=1;
        }
        if (soto8>0) cout<<"- "<<soto8<<" to 2.000\n";

        while (rut >= to9){
        rut-=to9;
        soto9+=1;
        }
        if (soto9>0) cout<<"- "<<soto9<<" to 1.000\n";
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    const int jamParkir = 15; // 7-10
    const int tarifMobil = 3000;
    const int tarifMotor = 2000;
    const int kapasitasMobilNormal = 10;
    const int kapasitasMotorNormal = 50;
    int totalPendapatan = 0;

    for (int hari = 1; hari <= 30; hari++)
    {
        int kapasitasMobil = kapasitasMobilNormal;
        int kapasitasMotor = kapasitasMotorNormal;
        if (hari % 7 == 5 || hari % 7 == 0)
        {
            kapasitasMobil = kapasitasMobilNormal / 2;
            kapasitasMotor = kapasitasMotorNormal / 2;
        }

        int pendapatanHarian = ((kapasitasMobil * tarifMobil) + (kapasitasMotor * tarifMotor)) * jamParkir;
        
        cout << "Hari " << hari << ": Rp" << pendapatanHarian << endl;
        totalPendapatan += pendapatanHarian;
    }

    cout << "total pendapatan : " << totalPendapatan << endl;
}

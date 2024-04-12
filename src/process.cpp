#include <iostream>
using namespace std;
#include "process.h"

void Proc::proc(){
    cout << "this process" << endl;
    mapPro.map_Info();
    cout << "Proc success" << endl;
}


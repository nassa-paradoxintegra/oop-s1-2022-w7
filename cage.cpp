#include <iostream>
#include <stdlib.h>
#include <string>
#include "cage.h"
using namespace std;

class cage {
    public:
        cage();
        int newNumber = 0;
        string newName = "";
    
        cage(int newNumber, string newName);
};

/*
int get_ID_Number() {
    

    return 0;
}
*/

int main(){
    cage coolcage(15, "cool");
    //cout << coolcage.newNumber << " " << coolcage.newName << endl;
    cout << "35" << endl;

    return 0;
}


//string get_name

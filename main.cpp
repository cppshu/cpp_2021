#include <iostream>
#include "fonction.h"

using namespace std;
using namespace TD1;

int main() {
    essai e;
    raz(&e);
    cout<<e.n<<" "<<e.x<<"\n";
    e.n=4;
    e.x=float(3.14);
    cout<<e.n<<" "<<e.x<<"\n";
    raz(e);
    cout<<e.n<<" "<<e.x<<"\n";

    return 0;
}

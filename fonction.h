#ifndef CPP_2021_FONCTION_H
#define CPP_2021_FONCTION_H

#include <iostream>

inline void bonjour()
{
    std::cout << "Zaoshang hao\n";
}


namespace N1 {
    void bonjour();

    namespace N3{
        void bonjour();
    }
}

namespace N2 {
    void bonjour();
}

#endif //CPP_2021_FONCTION_H

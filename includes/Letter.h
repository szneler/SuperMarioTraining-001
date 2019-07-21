#ifndef __LETTER_H_INCLUDED
#define __LETTER_H_INCLUDED

#include <vector>
#include <string>

using namespace std;

class Letter
{
    private:
        vector <string> Lines;

    public:
        Letter();
        ~Letter();
        void getLines();
};

#endif

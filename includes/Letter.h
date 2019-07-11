#ifndef __LETTER_H_INCLUDED
#define __LETTER_H_INCLUDED

using namespace std;

class Letter
{
    private:
        vector <string> lines;

    public:
        Letter();
        ~Letter();
        vector <string> GetLines();
};

#endif

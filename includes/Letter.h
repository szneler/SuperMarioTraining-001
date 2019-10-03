#ifndef __LETTER_H_INCLUDED
#define __LETTER_H_INCLUDED

#include <vector>
#include <string>

using namespace std;

class Letter
{
    private:
        char character;
        string line1, line2, line3, line4, line5;
        
    public:
        Letter(char, string, string, string, string, string);
        ~Letter();
        char getCharacter() const;
        string getLine1() const;
        string getLine2() const;
        string getLine3() const;
        string getLine4() const;
        string getLine5() const;
};

#endif

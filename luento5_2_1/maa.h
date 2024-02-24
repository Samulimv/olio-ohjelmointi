#ifndef MAA_H
#define MAA_H

#include <string>

using namespace std;

class Maa
{
public:
    Maa();
    string getNimi() const;
    void setNimi(const string &newNimi);

    int getVakiluku() const;
    void setVakiluku(int newVakiluku);

private:
    string nimi;
    int vakiluku;
};

#endif // MAA_H

#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto {
private:
    int asukasMaara;
    int nelio;

public:
    Asunto();
    ~Asunto();

    void tulostaTiedot() const;
    void maarita(int asukasMaara, int nelio);
    double laskeKulutus(double hinta) const;
};

#endif // ASUNTO_H

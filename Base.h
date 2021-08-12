#pragma once
class poslid {
public:
    virtual void print_info() = 0;
    virtual int chlen_posl(int) = 0;
};
class aryf_prog : public poslid {
private:
    int perviy;
    int raznica;
public:
    aryf_prog(int, int);
    void print_info() override;
    int chlen_posl(int) override;
    int get_per() { return perviy; }
    int get_raz() { return raznica; }
};
class geom_prog : public poslid {
private:
    int perviy;
    int mnozh;
public:
    geom_prog(int, int);
    void print_info() override;
    int chlen_posl(int) override;
    int get_per() { return perviy; }
    int get_mn() { return mnozh; }
};
class fibonachi : public poslid {
public:
    void print_info() override;
    int chlen_posl(int) override;
};

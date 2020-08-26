#ifndef PLORG_H_
#define PLORG_H_
class Plorg
{
private:
    char name[20];
    int CI;
public:
    Plorg(char *n  = "Plorga");
    ~Plorg();
    void showplorg() const;
    void newCI(int ci);
};
#endif

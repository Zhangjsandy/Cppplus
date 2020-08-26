#ifndef GOLF_H_
#define GOLF_H_
const int LEN = 40;
class golf
{
private:
    char fullname[LEN];
    int handicap;
public:
    golf(char *, int);
    golf();
    ~golf();
    void sethandicap(int);
    void showgolf();
};
#endif

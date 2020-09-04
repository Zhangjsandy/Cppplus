#include <iostream>
#include "tv1.h"
int main()
{
    using std::cout;
    using std::endl;
    Tv s42;
    Remote grey;
    cout << "Initial setting for 42\" TV:\n";
    s42.settings();
    cout << endl;
    grey.showmode();
    s42.set_remote_mode(grey);
    grey.showmode();
    cout << endl;
    s42.onoff();
    s42.chanup();
    cout << "\nAdjusted settings for 42\" TV:\n";
    s42.settings();
    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n42\" settings after using remote:\n";
    s42.settings();
    cout << endl;
    grey.showmode();
    s42.set_remote_mode(grey);
    grey.showmode();
    return 0;
}

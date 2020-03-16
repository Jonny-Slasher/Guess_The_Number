#pragma once
#include <iostream>
#include<windows.h>
#include<string>
#include<tchar.h>
using namespace std;

class Game {
private:
    DWORD users_number;
    DWORD cpu_number;
    DWORD max_number;
    DWORD min_number;
public:
    //////////setters and getters
    void SetUserNumber(DWORD tuser_num); 
    DWORD GetUserNumber()const;

    void SetCpuNumber(DWORD tcpu_num);
    DWORD GetCpuNumber()const;

    void SetMaxNumber(DWORD tmax_num);
    DWORD GetMaxNumber()const;

    void SetMinNumber(DWORD tmin_num);
    DWORD GetMinNumber()const;

    /////////////////////

    Game();
    ///////////methods

    BOOL TheNumbersAreEqual(DWORD user_n, DWORD cpu_n);

};

void ShowMessBoxYourNumber(DWORD num);
void ShowMessBoxCpuNumber(DWORD num);
void SuccessMessage();
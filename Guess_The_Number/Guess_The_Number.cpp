#include"Guess_The_Number_header.h"

    //////////setters and getters
void  Game ::  SetUserNumber(DWORD tuser_num) {
        users_number = tuser_num;
    }
    DWORD Game:: GetUserNumber()const {
        return users_number;
    }

    void  Game::SetCpuNumber(DWORD tcpu_num) {
        cpu_number = tcpu_num;
    }
    DWORD Game::GetCpuNumber()const {
        return cpu_number;
    }

    void  Game::SetMaxNumber(DWORD tmax_num) {
        max_number = tmax_num;
    }
    DWORD Game::GetMaxNumber()const {
        return max_number;
    }

    void  Game::SetMinNumber(DWORD tmin_num) {
        min_number = tmin_num;
    }
    DWORD Game::GetMinNumber()const {
        return min_number;
    }
    /////////////////////

    Game::Game() {
        users_number = 0;
        cpu_number = 0;
        min_number = 1;
        max_number = 20;
    }
    ///////////methods

   BOOL Game:: TheNumbersAreEqual(DWORD user_n, DWORD cpu_n) {
        if (user_n == cpu_n)
            return 1;
        else
            return 0;
    }
   


    void ShowMessBoxYourNumber(DWORD num) {
        WCHAR temp[10];
        swprintf_s(temp, 10, L"%d", num);
        MessageBox(NULL, temp, (LPCWSTR)_T("Ваше число - "), MB_OK);
        cout << '\7';
    }

    void ShowMessBoxCpuNumber(DWORD num) {
        WCHAR temp[10];
        swprintf_s(temp, 10, L"%d", num);
        MessageBox(NULL, temp, (LPCWSTR)_T("Число компьютера - "), MB_OK);
        cout << '\7';
    }

    void SuccessMessage() {
        MessageBox(NULL, (LPCWSTR)_T("Компьютер угадал число"), (LPCWSTR)_T("Игра окончена"), MB_OK | MB_ICONWARNING);
        cout << '\7' << '\7' << '\7' << '\7';
    }



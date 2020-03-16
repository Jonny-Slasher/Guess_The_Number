#include"Guess_The_Number_header.h"
int main() {

    setlocale(0, "Russian");

    Game numbers;
    MessageBoxW(NULL, (LPCWSTR)_T("Добро пожаловать в игру\nЗагадайте число от 1 до 20"), (LPCWSTR)_T("Угадай число"), MB_OK);

    DWORD player_num;
    DWORD result;
    do {
        wcin >> player_num;
    } while (player_num <= 0 || player_num > 20);
    numbers.SetUserNumber(player_num);
    ShowMessBoxYourNumber(player_num);

    numbers.SetCpuNumber((numbers.GetMaxNumber() + numbers.GetMinNumber()) / 2);

    for (int i = 0; i < 7; i++) {
        cout << '\7';
        if (numbers.TheNumbersAreEqual(numbers.GetUserNumber(), numbers.GetCpuNumber()) == 1) {

            SuccessMessage();
            ShowMessBoxCpuNumber(numbers.GetCpuNumber());
            break;
        }
        ShowMessBoxCpuNumber(numbers.GetCpuNumber());

        result = MessageBoxW(NULL, (LPCWSTR)_T("Число игрока больше?\nДа - нажми ОК   Нет - нажми Отмена"), (LPCWSTR)_T("Угадай число"), MB_OK | MB_OKCANCEL);
        if (result == IDOK) {
            numbers.SetMinNumber(numbers.GetCpuNumber());
        }
        else {
            numbers.SetMaxNumber(numbers.GetCpuNumber());
        }
        numbers.SetCpuNumber((numbers.GetMaxNumber() + numbers.GetMinNumber()) / 2);
        if ((numbers.GetMaxNumber() - numbers.GetMinNumber() < 2)) {

            SuccessMessage();
            ShowMessBoxCpuNumber(numbers.GetCpuNumber());
            break;
        }

    }

    return 0;
}
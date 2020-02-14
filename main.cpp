#include <iostream>

int main() {
    using namespace std;

    wstring toEncrypt = L"Test";
    wchar_t keyToEncrypt = 'd';

    for (int temp = 0; temp < toEncrypt.size(); temp++)
        toEncrypt[temp] ^= keyToEncrypt;
    wcout << "The encrypted data = " << toEncrypt;

    for (int temp = 0; temp < toEncrypt.size(); temp++)
        toEncrypt[temp] ^= keyToEncrypt;
    wcout << "\nThe unencrypted data = " << toEncrypt;
    return 0;
}

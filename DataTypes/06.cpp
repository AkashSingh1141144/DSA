// Wide character dataType

/*In C++, the wide character data type is used to represent characters that require more than one byte of memory. This is especially useful for handling international characters and various encoding schemes such as Unicode.

Wide Character Data Types
wchar_t

Definition: Represents a wide character.
Size: Typically 2 or 4 bytes, depending on the platform and compiler.
Range: The range depends on the size of wchar_t. For instance, it can be 0 to 65,535 (2 bytes) or 0 to 4,294,967,295 (4 bytes).*/

#include <iostream>
#include <locale>
#include <codecvt> // For converting between wide and narrow strings
using namespace std;

int main() {
    // Wide character variables
    wchar_t wideChar = L'Ω';
    char16_t utf16Char = u'Ω';
    char32_t utf32Char = U'Ω';

    // Wide character strings
    wchar_t wideString[] = L"Wide character string";
    char16_t utf16String[] = u"UTF-16 string";
    char32_t utf32String[] = U"UTF-32 string";

    // Output wide characters and strings
    wcout.imbue(locale("")); // Set locale for wide character output
    wcout << L"Wide char: " << wideChar << endl;
    wcout << L"Wide string: " << wideString << endl;

    // Convert UTF-16 to narrow string for output
    wstring_convert<codecvt_utf8_utf16<char16_t>, char16_t> convert16;
    string utf16Str = convert16.to_bytes(utf16String);
    cout << "UTF-16 string: " << utf16Str << endl;

    // Convert UTF-32 to narrow string for output
    wstring_convert<codecvt_utf8<char32_t>, char32_t> convert32;
    string utf32Str = convert32.to_bytes(utf32String);
    cout << "UTF-32 string: " << utf32Str << endl;

    return 0;
}

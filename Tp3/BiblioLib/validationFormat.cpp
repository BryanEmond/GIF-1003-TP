#include <iostream>
#include <string>
#include <regex>

#include "validationFormat.h"

using namespace std;
namespace util
{

    bool validerFormatNom(const std::string& p_nom)
    {
        regex wordRegex(R"((([A-Za-z])(\-|\ |)){0,100})");
        std::smatch s;
        return std::regex_match(p_nom, s, wordRegex);
    }

    bool validerCodeIssn(const std::string& p_issn)
    {
        regex wordRegex(R"((issn|ISSN)+\ +[0-9]{4}\-+[0-9]{4})");
        std::smatch s;
        return std::regex_match(p_issn, s, wordRegex);
    }

    bool validerCodeIsbn(const std::string& p_isbn)
    {
        regex wordRegex(R"((isbn|ISBN)+\ +[0-9]{3}\-+[0-9]{1}\-+[0-9]{4}\-+[0-9]{4}\-+[0-9]{1})");
        std::smatch s;
        return std::regex_match(p_isbn, s, wordRegex);
    }
}


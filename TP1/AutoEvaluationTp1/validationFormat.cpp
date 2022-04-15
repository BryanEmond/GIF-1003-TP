#include <iostream>
#include <string>
#include <regex>

#include "validationFormat.h"

using namespace std;

bool validerFormatNom(const std::string& p_nom)
{
    regex wordRegex(R"((([A-Za-z])(\-|\ |)){0,100})");
    std::smatch s;
    return regex_match(p_nom, s, wordRegex);
}

bool validerCodeIssn(const std::string& p_issn)
{
    regex wordRegex(R"(ISSN+\ +[0-9]{4}\-+[0-9]{4})");
    std::smatch s;
    return regex_match(p_issn, s, wordRegex);
}

bool validerCodeIsbn(const std::string& p_isbn)
{
    regex wordRegex(R"(^(?=(?:\D*\d){10}(?:(?:\D*\d){3})?$)[\d-]+$)");
    std::smatch s;
    return regex_match(p_isbn, s, wordRegex);
}



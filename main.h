#ifndef CPP_HSE_MAIN_H
#define CPP_HSE_MAIN_H

#include <iostream>

#include "Parsing/Parse.h"
#include "Image/Image.h"
#include "Reading_and_writing/Reader.h"
#include "Reading_and_writing/Writer.h"
#include "Filters/filter.h"

Image GetImage(const std::string& path);

std::vector<parser::Token> ParseTokens(int argc, char** argv);

Image ApplyFilter(const std::vector<parser::Token>& tokens, Image& image);

void PrintImage(const std::string& path, const Image& image);

#endif  // CPP_HSE_MAIN_H

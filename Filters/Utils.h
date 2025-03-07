#ifndef IMAGE_PROCESSOR_UTILS_H
#define IMAGE_PROCESSOR_UTILS_H

#include <string>
#include <vector>

const int max_color = 255;
const int white_color = 0;
const int black_color = 255;
const int min_color = 0;
std::vector<std::vector<int>> edge_matrix = {{0, -1, 0}, {-1, 4, -1}, {0, -1, 0}};
#endif //IMAGE_PROCESSOR_UTILS_H

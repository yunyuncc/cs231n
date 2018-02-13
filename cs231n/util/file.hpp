#pragma once
#include <string>
#include <vector>

namespace yun::util {
/**
 * @brief 将sub_paths按顺序连接起来，组成一个路径
 */
std::string path_join(const std::vector<std::string> &sub_paths);
} // namespace yun::util

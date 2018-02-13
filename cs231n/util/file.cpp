#include <cs231n/util/file.hpp>
namespace yun::util {

void add_path_tail(std::string &path) {
  if (path.empty()) {
    return;
  }
  if (path.back() == '/') {
    return;
  }
  path += '/';
  return;
}

std::string path_join(const std::vector<std::string> &sub_paths) {
  std::vector<std::string> paths(sub_paths);
  std::string full_path;
  for (std::size_t i = 0; i < paths.size(); i++) {
    if (i < (paths.size() - 1)) {
      add_path_tail(paths.at(i));
    }
    full_path += paths.at(i);
  }
  return full_path;
}

} // namespace yun::util

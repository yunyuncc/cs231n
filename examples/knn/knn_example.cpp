#include <cs231n/util/file.hpp>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void load_CIFAR10(const string& root_path){
  for(int i = 1; i < 6; i++){
    auto data_path = "data_batch_" + std::to_string(i);
    auto full_data_path = yun::util::path_join({root_path, data_path});
    cout << "full_data_path:" << full_data_path << endl;
  }
}
int main(int argc, char**argv){
  if(argc !=  2){
    cout << "usage:\n"<< argv[0] << " path_to_data_set" << endl;
    return 0;
  }
  cout << "knn_example begin!!" << endl;
  std::string path_to_data_set(argv[1]);
  load_CIFAR10(path_to_data_set);
  return 0;
}

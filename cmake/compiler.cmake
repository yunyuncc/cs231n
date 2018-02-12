SET(CMAKE_CXX_STANDARD 17)

IF(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  add_compile_options("-g" "-O3" "-Weverything" "-Wno-c++98-compat" "-Wno-zero-as-null-pointer-constant" "-Wno-c++98-compat-pedantic" "-Wno-padded" "-Wno-double-promotion" "-Wno-weak-vtables" "-Wno-deprecated-dynamic-exception-spec")
ELSEIF(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  add_compile_options("-O3" "-Wall" "-Wextra" "-Wshadow" "-Wnon-virtual-dtor" "-pedantic" "-g")
ELSEIF(MSVC)
  add_compile_options("/MP" "/utf-8" "/W4" "/Ox")
ENDIF()


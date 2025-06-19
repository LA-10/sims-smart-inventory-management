
# Make an explicit list of all source files in sims_app_INC. This is important
# because CMake is not a build system: it is a build system generator. Suppose
# you add a file foo.cpp to src/ after running cmake .. . If you set
# sims_app_INC with `file(GLOB ... )`, this is not passed to the makefile; it
# doesn't know that foo.cpp exists and will not re-run cmake. Your
# collaborator's builds will fail and it will be unclear why. Whether you use
# file(GLOB ...) or not, you will need to re-run cmake, but with an explicit
# file list, you know beforehand why your code isn't compiling. 
set(sims_app_INC
    ${CMAKE_CURRENT_SOURCE_DIR}/CLI11.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/sqlite3.h
    PARENT_SCOPE
    )

# ... and pass the variable to the parent scope.
set(sims_app_INC ${sims_app_INC}  PARENT_SCOPE)

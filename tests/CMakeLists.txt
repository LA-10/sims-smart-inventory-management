cmake_minimum_required(VERSION 4.0)
set(CMAKE_CXX_STANDARD 20)

# Explicitly list the test source code and headers. The Catch header-only unit
# test framework is stored in with the test source.
set(sims_app_TEST_SRC
    test_cmake_demo.cpp
)
set(sims_app_TEST_HEADER
    catch.hpp
)


# Make an executable target that depends on the test source code we specified
# above.
# add_executable(Testsims_app ${sims_app_TEST_SRC} ${sims_app_TEST_HEADER})

# # Enable testing via CTest
# enable_testing()
# # Add our test as runnable via CTest
# add_test(NAME Testsims_app  COMMAND Testsims_app)

# # Link our unit tests against the library we compiled
# target_link_libraries(Testsims_app sims_app)

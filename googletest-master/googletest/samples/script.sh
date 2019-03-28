#! /bin/bash
make
./sample2_unittest --gtest_output="xml"
gcov sample2_unittes.cc
lcov --capture --directory . --output-file main_coverage.info
genhtml main_coverage.info --output-directory out


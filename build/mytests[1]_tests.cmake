add_test([=[Hiker.Life_the_universe_and_everything]=]  /workspaces/fizzbuzz/build/mytests [==[--gtest_filter=Hiker.Life_the_universe_and_everything]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Hiker.Life_the_universe_and_everything]=]  PROPERTIES WORKING_DIRECTORY /workspaces/fizzbuzz/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[Calc.testAdd]=]  /workspaces/fizzbuzz/build/mytests [==[--gtest_filter=Calc.testAdd]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Calc.testAdd]=]  PROPERTIES WORKING_DIRECTORY /workspaces/fizzbuzz/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[FizzBuzz.testFizz]=]  /workspaces/fizzbuzz/build/mytests [==[--gtest_filter=FizzBuzz.testFizz]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[FizzBuzz.testFizz]=]  PROPERTIES WORKING_DIRECTORY /workspaces/fizzbuzz/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  mytests_TESTS Hiker.Life_the_universe_and_everything Calc.testAdd FizzBuzz.testFizz)
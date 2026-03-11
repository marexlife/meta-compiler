function(test_function PROJECT_NAME)
    enable_testing()
    
    find_package(GTest CONFIG REQUIRED)
    target_link_libraries(${PROJECT_NAME} PRIVATE 
        GTest::gtest 
        GTest::gtest_main
        GTest::gmock
        GTest::gmock_main
    )

    add_test(AllTestsInMain ${PROJECT_NAME})
endfunction()


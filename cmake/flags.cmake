if(MSVC)
    set(COMPILER_FLAGS
        /W4
    )
else()
    set(COMPILER_FLAGS
        -Wall
        -Wextra
        -Wpedantic
        -Wconversion
        -Werror

        -O3
        -flto

        -fno-exceptions
        -fno-rtti
        -ffast-math
    )
endif()

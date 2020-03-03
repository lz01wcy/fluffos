if(${PACKAGE_DATABASE})
    add_library(package_database STATIC
            "database.cc"
            )
endif()

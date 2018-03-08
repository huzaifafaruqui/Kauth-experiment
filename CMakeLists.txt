project(kauth_experiment)
cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
find_package(ECM REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR})

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings NO_POLICY_SCOPE)


find_package(Qt5 REQUIRED Core)
find_package(KF5Auth REQUIRED)

set(SOURCES
    main.cpp
    external.cpp
    )

set(HEADERS
    external.h
    )

add_executable(kauthexp ${SOURCES} ${HEADERS} helper.cpp)

target_link_libraries(kauthexp KF5::Auth Qt5::Core)
install(TARGETS kauthexp DESTINATION ${KAUTH_HELPER_INSTALL_DIR})

kauth_install_helper_files(kauthexp org.kde.kauthexp.external root)
kauth_install_actions(org.kde.kauthexp.external org.kde.kauthexp.external.actions)

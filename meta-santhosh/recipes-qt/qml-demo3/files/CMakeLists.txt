cmake_minimum_required(VERSION 3.16)

project(QtDigitalSpeedo VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
find_package(Qt6  REQUIRED COMPONENTS Quick Qml)

#qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appQtDigitalSpeedo
    main.cpp
)

qt_add_qml_module(appQtDigitalSpeedo
    URI QtDigitalSpeedo
    VERSION 1.0
    QML_FILES speedo.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appQtDigitalSpeedo PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appQtDigitalSpeedo
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appQtDigitalSpeedo
    PRIVATE Qt6::Quick
					Qt6::Qml
)

include(GNUInstallDirs)
install(TARGETS appQtDigitalSpeedo
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

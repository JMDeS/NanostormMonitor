
include(../gtest_dependency.pri)

QT       += core gui multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG += qt

HEADERS += \    
    mock_foo.h \
    tst_pump.h \
    tst_foo.h \
    pump.h \
    global_objects.h \
    power.h \
    mainwindow.h \
    pump.h \
    interfaces.h \
    mocks.h \
    tst_camera.h \
    tst_power.h \
    camera.h \
    analoginput.h \
    labjackdriver.h \
    labjackwrapper.h

SOURCES +=    \
#    main.cpp \
    _tmain.cpp \
    pump.cpp \
    global_objects.cpp \
    power.cpp \
    mainwindow.cpp \
    pump.cpp \
    camera.cpp \
    analoginput.cpp

FORMS += \
    mainwindow.ui

DISTFILES += \
    start.cmd


unix|win32: LIBS += -L$$PWD/'../../../../../../../../Program Files/Thorlabs/Scientific Imaging/DCx Camera Support/Develop/Lib/' -luc480_64
unix|win32: LIBS += -L$$PWD/'../../../../../../../../Program Files/Thorlabs/Scientific Imaging/DCx Camera Support/Develop/Lib/' -luc480_tools_64

INCLUDEPATH += $$PWD/'../../../../../../../../Program Files/Thorlabs/Scientific Imaging/DCx Camera Support/Develop/Include'
DEPENDPATH += $$PWD/'../../../../../../../../Program Files/Thorlabs/Scientific Imaging/DCx Camera Support/Develop/Include'



#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../../../../Program Files/LabJack/Drivers/64bit/' -lLabJackU
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../../../../Program Files/LabJack/Drivers/64bit/' -lLabJackUd
#else:unix: LIBS += -L$$PWD/'../../../../../../../../Program Files/LabJack/Drivers/64bit/' -lLabJackU

#INCLUDEPATH += $$PWD/'../../../../../../../../Program Files/LabJack/Drivers/64bit'
#DEPENDPATH += $$PWD/'../../../../../../../../Program Files/LabJack/Drivers/64bit'

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../Program Files/LabJack/Drivers/64bit/' -lLabJackU
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../Program Files/LabJack/Drivers/64bit/' -lLabJackUd
#else:unix: LIBS += -L$$PWD/'../../../../Program Files/LabJack/Drivers/64bit/' -lLabJackU

#INCLUDEPATH += $$PWD/'../../../../Program Files/LabJack/Drivers'
#DEPENDPATH += $$PWD/'../../../../Program Files/LabJack/Drivers'

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../../../../Program Files/LabJack/Drivers/64bit/' -lLabJackU
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../../../../Program Files/LabJack/Drivers/64bit/' -lLabJackUd
#else:unix: LIBS += -L$$PWD/'../../../../../../../../Program Files/LabJack/Drivers/64bit/' -lLabJackU

#INCLUDEPATH += $$PWD/'../../../../../../../../Program Files/LabJack/Drivers/64bit'
#DEPENDPATH += $$PWD/'../../../../../../../../Program Files/LabJack/Drivers/64bit'

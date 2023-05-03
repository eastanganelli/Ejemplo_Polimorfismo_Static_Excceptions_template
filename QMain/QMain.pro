QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        ../Ejemplo_Polimorfismo/Circulo.cpp \
        ../Ejemplo_Polimorfismo/Cuadrado.cpp \
        ../Ejemplo_Polimorfismo/Figura.cpp \
        ../Ejemplo_Polimorfismo/Triangulo.cpp \
        ../Ejemplo_Static/Calculadora.cpp \
        ../Ejemplo_Template/foo.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../Ejemplo_Polimorfismo/ClassDiagram.cd \
    ../Ejemplo_Static/Ejemplo_Static.vcxproj \
    ../Ejemplo_Static/Ejemplo_Static.vcxproj.filters

HEADERS += \
    ../Ejemplo_Polimorfismo/Circulo.h \
    ../Ejemplo_Polimorfismo/Cuadrado.h \
    ../Ejemplo_Polimorfismo/Figura.h \
    ../Ejemplo_Polimorfismo/Triangulo.h \
    ../Ejemplo_Polimorfismo/framework.h \
    ../Ejemplo_Static/Calculadora.h \
    ../Ejemplo_Static/framework.h \
    ../Ejemplo_Template/foo.h \
    ../Ejemplo_Template/framework.h \
    ../Ejemplo_Template/propiedad.h


#ifndef ANALOGINPUT_H
#define ANALOGINPUT_H
//#include "LabJackUD.h"
#include<stdio.h>
#include <windows.h>
#include<QObject>
#include<QDebug>
//#include<QThread>

//class AnalogInput : public QObject
//{
//    Q_OBJECT
//public:
//    AnalogInput();
//    void ErrorHandler(LJ_ERROR lngErrorcode, long lngLineNumber, long lngIteration)
//    {


//        if (lngErrorcode != LJE_NOERROR)
//        {
//            ErrorToString(lngErrorcode,err);
//            qDebug()<<"Error number = "<<lngErrorcode;
//            qDebug()<<"Error string = "<<err;
//            qDebug()<<"(Source line number = "<<lngLineNumber;

////            printf("Source line number = %d\n",lngLineNumber);
////            printf("Error number = %d\n",lngErrorcode);
////            printf("Error string = %s\n",err);
////            printf("Source line number = %d\n",lngLineNumber);
////            printf("Iteration = %d\n\n",lngIteration);
//            if(lngErrorcode > LJE_MIN_GROUP_ERROR)
//            {
//                //Quit if this is a group error.
//                getchar();
//                exit(0);
//            }
//       }
//    };

//public slots:
//    void execute();

//private:
//    LJ_ERROR lngErrorcode;
//    long lngIOType=0, lngChannel=0;
//    double dblValue=0;
//    double Value2=0,Value3=0;
//    double ValueDIBit=0,ValueDIPort=0,ValueCounter=0;
//    LJ_HANDLE lngHandle=0;
//    long lngGetNextIteration;
//    char ch;
//    char err[255];

//};

#endif // ANALOGINPUT_H

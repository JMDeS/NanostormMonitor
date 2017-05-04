#include "analoginput.h"

#include<QDebug>

//AnalogInput::AnalogInput()
//{

//}

////This is our simple error handling function that is called after every UD
////function call.  This function displays the errorcode and string description
////of the error.  It also has a line number input that can be used with the
////macro __LINE__ to display the line number in source code that called the
////error handler.  It also has an iteration input is useful when processing
////results in a loop (getfirst/getnext).



//void AnalogInput::execute()
//{
//    //Open the first found LabJack U6.
//    lngErrorcode = OpenLabJack (LJ_dtU6, LJ_ctUSB, "1", 1, &lngHandle);


//    //First some configuration commands.  These will be done with the ePut
//    //function which combines the add/go/get into a single call.

//    //Configure resolution of the analog inputs (pass a non-zero value for quick sampling).
//    //See section 2.6 / 3.1 for more information.
//    lngErrorcode = ePut (lngHandle, LJ_ioPUT_CONFIG, LJ_chAIN_RESOLUTION, 0, 0);
//    ErrorHandler(lngErrorcode, __LINE__, 0);

//    //Configure the analog input range on channels 2 and 3 for bipolar gain=1.
//    lngErrorcode = ePut (lngHandle,  LJ_ioPUT_AIN_RANGE, 2, LJ_rgBIP10V, 0);
//    ErrorHandler(lngErrorcode, __LINE__, 0);

//    lngErrorcode = ePut (lngHandle,  LJ_ioPUT_AIN_RANGE, 3, LJ_rgBIP10V, 0);
//    ErrorHandler(lngErrorcode, __LINE__, 0);

//    //Enable Counter0 which will appear on FIO0 (assuming no other
//    //program has enabled any timers or Counter1).
//    lngErrorcode = ePut (lngHandle,  LJ_ioPUT_COUNTER_ENABLE, 0, 1, 0);
//    ErrorHandler(lngErrorcode, __LINE__, 0);


//    //Request AIN2 and AIN3.
//    lngErrorcode = AddRequest (lngHandle, LJ_ioGET_AIN, 2, 0, 0, 0);
//    ErrorHandler(lngErrorcode, __LINE__, 0);

//    lngErrorcode = AddRequest (lngHandle, LJ_ioGET_AIN, 3, 0, 0, 0);
//    ErrorHandler(lngErrorcode, __LINE__, 0);

//    //Set digital output FIO2 to output-high.
//    lngErrorcode = AddRequest (lngHandle, LJ_ioPUT_DIGITAL_BIT, 2, 1, 0, 0);
//    ErrorHandler(lngErrorcode, __LINE__, 0);

//    // //Read digital inputs FIO3 through FIO7.
//    // lngErrorcode = AddRequest (lngHandle, LJ_ioGET_DIGITAL_PORT, 3, 0, 5, 0);
//    // ErrorHandler(lngErrorcode, __LINE__, 0);

//    //Request the value of Counter0.
//    lngErrorcode = AddRequest (lngHandle, LJ_ioGET_COUNTER, 0, 0, 0, 0);
//    ErrorHandler(lngErrorcode, __LINE__, 0);


//    while (1)
//    {
//       //Execute the requests.
//        lngErrorcode = GoOne (lngHandle);
//        this->ErrorHandler(lngErrorcode, __LINE__, 0);


//        //Get all the results.  The input measurement results are stored.  All other
//        //results are for configuration or output requests so we are just checking
//        //whether there was an error.
//        lngErrorcode = GetFirstResult(lngHandle, &lngIOType, &lngChannel, &dblValue, 0, 0);
//        ErrorHandler(lngErrorcode, __LINE__, 0);

//        lngGetNextIteration=0;	//Used by the error handling function.

//        while(lngErrorcode < LJE_MIN_GROUP_ERROR)
//        {
//            switch(lngIOType)
//            {

//                case LJ_ioGET_AIN :
//                    switch(lngChannel)
//                    {
//                        case 2:
//                            Value2=dblValue;
//                            break;
//                        case 3:
//                            Value3=dblValue;
//                            break;
//                    }
//                    break;

//                case LJ_ioGET_DIGITAL_BIT :
//                    ValueDIBit=dblValue;
//                break;

//                case LJ_ioGET_COUNTER :
//                    ValueCounter=dblValue;
//                    break;

//            }

//            lngErrorcode = GetNextResult(lngHandle, &lngIOType, &lngChannel, &dblValue, 0, 0);
//            if(lngErrorcode != LJE_NO_MORE_DATA_AVAILABLE)
//            {
//                ErrorHandler(lngErrorcode, __LINE__, lngGetNextIteration);
//            }

//            lngGetNextIteration++;

//        }
//    }

//    qDebug()<<"AIN2 = "<<Value2;
//    qDebug()<<"AIN3 = "<<Value3;
//    qDebug()<<"Counter0 (FIO0) = "<<ValueCounter;
////    printf("AIN2 = %f\n",Value2);
////    printf("AIN3 = %f\n",Value3);
////    printf("Counter0 (FIO0) = %f\n",ValueCounter);

//    printf("\nPress Enter to go again or (q) to quit\n");
//    ch = getchar();
//    if (ch == 'q') return;
//}


#ifndef DATAVIEWER_H
#define DATAVIEWER_H

#include<cstdio>

class DataViewer{
public:
    DataViewer();
    virtual ~DataViewer();
    virtual void displayImageinfo()= 0;

};


#endif
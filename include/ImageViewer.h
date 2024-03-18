#ifndef DATAVIEWER_H
#define DATAVIEWER_H

#include "DataViewer.h"

class ImageViewer : public DataViewer{
public:
    ImageViewer();
    ~ImageViewer();

    void displayImageinfo();
private:
    int getImagePixels();

};

#endif
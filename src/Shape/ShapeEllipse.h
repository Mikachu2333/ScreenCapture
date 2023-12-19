#pragma once
#include "include/core/SkSurface.h"
#include "include/core/SkCanvas.h"
#include "include/core/SkRect.h"
#include "include/core/SkPoint.h"
#include "include/core/SkPath.h"
#include "ShapeRect.h"
#include <vector>

class ShapeEllipse : public ShapeRect
{
public:
    ShapeEllipse(const int &x, const int &y);
    ~ShapeEllipse();
    bool OnPaint(SkCanvas *canvas) override;
protected:
    bool isMouseOver(const int& x, const int& y) override;
private:
};
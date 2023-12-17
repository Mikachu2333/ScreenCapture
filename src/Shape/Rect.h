#pragma once
#include "include/core/SkSurface.h"
#include "include/core/SkCanvas.h"
#include "include/core/SkRect.h"
#include "include/core/SkPoint.h"
#include "include/core/SkPath.h"
#include "ShapeBase.h"
#include <vector>

class Rect : public ShapeBase
{
public:
    Rect();
    ~Rect();
    bool OnMouseDown(const int& x, const int& y) override;
    bool OnMouseUp(const int& x, const int& y) override;
    bool OnMouseMove(const int& x, const int& y) override;
    bool OnPaint(SkCanvas *canvas) override;

private:
    SkRect rect;
};
#pragma once
#include "include/core/SkSurface.h"
#include "include/core/SkCanvas.h"
#include "include/core/SkRect.h"
#include "include/core/SkPoint.h"
#include "include/core/SkPath.h"
#include "ShapeBase.h"
#include <vector>

class ShapeNumber : public ShapeBase
{
public:
    ShapeNumber(const int &x, const int &y);
    ~ShapeNumber();
    bool OnMouseDown(const int &x, const int &y) override;
    bool OnMouseUp(const int &x, const int &y) override;
    bool OnMouseMove(const int &x, const int &y) override;
    virtual bool OnPaint(SkCanvas *canvas) override;
    bool OnMoseDrag(const int &x, const int &y) override;

protected:
    virtual bool isMouseOver(const int &x, const int &y);
    void paintDragger(SkCanvas *canvas);
    void initParams();
    void makeArrowPath(const int &x1, const int &y1, const int &x2, const int &y2);
    SkPath path;
    bool stroke{true};
    int strokeWidth{4};
    SkColor color{SkColorSetARGB(255, 207, 19, 34)};
    std::vector<SkRect> draggers;
    int endX, endY;
    int hoverX, hoverY;

private:
};